package eduonix.nativeapp.controllers;

import eduonix.nativeapp.components.NanoTimer;
import eduonix.nativeapp.handlers.VideoFileHandler;
import eduonix.nativeapp.widgets.CanvasVideoComponent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.VBox;

import java.io.File;
import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;

/**
 * View Controller Component
 */
public class VideoController  implements Initializable  {

    @FXML
    private AnchorPane videoBasePanel;

    private VideoFileHandler fileHandler;

    @FXML private VBox videoBaseContainer;

    private CanvasVideoComponent player;

    private static final double FPS = 21.9140;


    /**
     * Initialises the MediaGridView FXML file, this will be injected into the main screen.
     *
     * @return The JavaFX MediaGridController
     * @throws IOException
     */
    public static VideoController init() throws IOException {
        URL resource = VideoController.class.getResource("VidPanelView.fxml");
        FXMLLoader loader = new FXMLLoader(resource);

        loader.load();

        return loader.getController();
    }

    /**
     * Will return the view for this controller as a JavaFx AnchorPane type.
     * @return
     */
    public AnchorPane getRoot() {
        return videoBasePanel;
    }



    /**
     * JavaFX initialize method
     * Called before the dialog is created or anything else happens.
     */
    @Override
    public void initialize(URL location, ResourceBundle resources) {

        fileHandler = new VideoFileHandler();

        String uriString  = fileHandler.getExampleMP4FilePathAsString().getPath();
        uriString = new StringBuilder("file://").append(uriString).toString();
        System.out.println(uriString);
        player = new  CanvasVideoComponent();

        player.getMediaPlayerComponent().getMediaPlayer().playMedia(uriString);

        videoBaseContainer.getChildren().add(player.getCanvas());


        startTimer();


    }


    /**
     *
     */
    private final NanoTimer nanoTimer = new NanoTimer(1000.0 / FPS) {
        @Override
        protected void onSucceeded() {
            player.renderFrame();
        }
    };

    protected void startTimer() {
        nanoTimer.start();
    }


    protected void stopTimer() {
        nanoTimer.cancel();
    }

}
