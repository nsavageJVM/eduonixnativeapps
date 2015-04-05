package eduonix.nativeapp.widgets;

import com.sun.jna.Memory;
import javafx.application.Platform;
import javafx.scene.canvas.Canvas;
import javafx.scene.image.PixelFormat;
import javafx.scene.image.PixelWriter;
import javafx.scene.image.WritablePixelFormat;
import uk.co.caprica.vlcj.component.DirectMediaPlayerComponent;
import uk.co.caprica.vlcj.player.direct.BufferFormat;
import uk.co.caprica.vlcj.player.direct.BufferFormatCallback;
import uk.co.caprica.vlcj.player.direct.DefaultDirectMediaPlayer;
import uk.co.caprica.vlcj.player.direct.format.RV32BufferFormat;

import java.nio.ByteBuffer;

/**
 * Created by ubu on 29.03.15.
 */

public class CanvasVideoComponent {

    /**
     * Set this to <code>true</code> to resize the display to the dimensions of the
     * video, otherwise it will use {@link #WIDTH} and {@link #HEIGHT}.
     */
    private static final boolean useSourceSize = false;

    /**
     * Target width, unless {@link #useSourceSize} is set.
     */
    private static final int WIDTH = 420;

    /**
     * Target height, unless {@link #useSourceSize} is set.
     */
    private static final int HEIGHT = 400;

    public Canvas getCanvas() {
        return canvas;
    }

    /**
     * Lightweight JavaFX canvas, the video is rendered here.
     */
    private final Canvas canvas;

    /**
     * Pixel writer to update the canvas.
     */
    private final PixelWriter pixelWriter;

    /**
     * Pixel format.
     */
    private final WritablePixelFormat<ByteBuffer> pixelFormat;

    public DirectMediaPlayerComponent getMediaPlayerComponent() {
        return mediaPlayerComponent;
    }

    /**
     * The vlcj direct rendering media player component.
     */
    private final DirectMediaPlayerComponent mediaPlayerComponent;

    public CanvasVideoComponent() {
        canvas = new Canvas();
        pixelWriter = canvas.getGraphicsContext2D().getPixelWriter();
        pixelFormat = PixelFormat.getByteBgraInstance();

        mediaPlayerComponent = new CanvasMediaPlayerComponent();

    }



    /**
     * Implementation of a direct rendering media player component that renders
     * the video to a JavaFX canvas.
     */
    private class CanvasMediaPlayerComponent extends DirectMediaPlayerComponent {

        public CanvasMediaPlayerComponent() {
            super(new CanvasBufferFormatCallback());
        }
    }

    /**
     * Callback to get the buffer format to use for video playback.
     */
    private class CanvasBufferFormatCallback implements BufferFormatCallback {

        @Override
        public BufferFormat getBufferFormat(int sourceWidth, int sourceHeight) {
            final int width;
            final int height;
            if (useSourceSize) {
                width = sourceWidth;
                height = sourceHeight;
            }
            else {
                width = WIDTH;
                height = HEIGHT;
            }
            Platform.runLater(new Runnable() {
                @Override
                public void run() {
                    canvas.setWidth(width);
                    canvas.setHeight(height);
                }
            });
            return new RV32BufferFormat(width, height);
        }
    }

    /**
     *
     */
    public final void renderFrame() {
        Memory[] nativeBuffers = mediaPlayerComponent.getMediaPlayer().lock();
        if (nativeBuffers != null) {
            // FIXME there may be more efficient ways to do this...
            // Since this is now being called by a specific rendering time, independent of the native video callbacks being
            // invoked, some more defensive conditional checks are needed
            Memory nativeBuffer = nativeBuffers[0];
            if (nativeBuffer != null) {
                ByteBuffer byteBuffer = nativeBuffer.getByteBuffer(0, nativeBuffer.size());
                BufferFormat bufferFormat = ((DefaultDirectMediaPlayer) mediaPlayerComponent.getMediaPlayer()).getBufferFormat();
                if (bufferFormat.getWidth() > 2 && bufferFormat.getHeight() > 2) {
                    pixelWriter.setPixels(0, 0, bufferFormat.getWidth(), bufferFormat.getHeight(), pixelFormat, byteBuffer, bufferFormat.getPitches()[0]);
                }
            }
        }
        mediaPlayerComponent.getMediaPlayer().unlock();
    }



}
