package eduonix.nativeapp;

import com.sun.jna.Native;
import com.sun.jna.NativeLibrary;
import eduonix.nativeapp.views.VideoView;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.layout.Region;
import javafx.stage.Stage;
import uk.co.caprica.vlcj.binding.LibVlc;
import uk.co.caprica.vlcj.runtime.RuntimeUtil;

/**
 * Entrypoint for the video code
 */
public class Entrypoint  extends Application {



    private Region rootLayout;

    private VideoView vidPanelView;


    public Entrypoint() {
        vidPanelView = new  VideoView();
    }


    @Override
    public void init() throws Exception {

    }

    @Override
    public void start(Stage primaryStage) throws Exception {
        // later other services will probably need to be initialised before we bootstrap the gui

        initRootLayout(primaryStage);
    }

    /**
     * Initializes the root layout. Use this with views
     */
    public void initRootLayout(Stage primaryStageJFX ) {
        rootLayout = vidPanelView.getView();
        primaryStageJFX.setScene(new Scene(rootLayout, 1280, 500));
        primaryStageJFX.show();
        // do this for a painless properties flow
    }

    public static void main(String[] args) {
        String libpath = null;
        NativeLibrary.addSearchPath(RuntimeUtil.getLibVlcLibraryName(),
                "c:/Program Files/VideoLAN/VLC/");
        Native.loadLibrary(RuntimeUtil.getLibVlcLibraryName(), LibVlc.class);


        System.out.println("testing");
        launch(args);
    }




}
