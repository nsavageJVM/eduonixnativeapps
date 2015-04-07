package eduonix.nativeapp.views;

import eduonix.nativeapp.controllers.VideoController;
import javafx.scene.layout.Region;

import java.io.IOException;

/**
 * View Component
 */
public class VideoView {

    VideoController vidPanelController;

    /**
     * Constructor
     */
    public VideoView() {

    }

    /**
     * getView function
     * @return the region of the JavaFX view
     */
    public Region getView() {
        if (vidPanelController == null)  {
            try {
                vidPanelController = VideoController.init();
            } catch (IOException e) {
                // TODO: add exception handling here
            }

        }
        return vidPanelController.getRoot();
    }
}
