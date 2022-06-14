import java.io.IOException;

Runtime rt;

void setup () {

    try {
        rt = Runtime.getRuntime ();
        rt.exec ("test.bat");
    } catch (IOException ex) {
        ex.printStackTrace ();
    }

}

void draw () {

}
