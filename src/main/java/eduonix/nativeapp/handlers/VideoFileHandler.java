package eduonix.nativeapp.handlers;

import java.net.URL;

/**
 * Created by ubu on 03.04.15.
 */
public class VideoFileHandler {

    public URL getExampleMP4FilePathAsString() {

        URL path = null;
        path = VideoFileHandler.class.getResource("testvid.mp4") ;

        return path;
    }
}
