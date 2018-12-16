package me.renesto.fibervr;

import android.app.Activity;
import android.graphics.Point;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Display;
import android.widget.TextView;

public class MainActivity extends Activity {

    FiberVRView m_View;

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Display d = getWindowManager().getDefaultDisplay();
        Point sz = new Point();
        d.getSize(sz);

        FiberVRWrapper.InitCore(sz.x, sz.y);

        m_View = new FiberVRView(getApplication());
        setContentView(m_View);
    }
}
