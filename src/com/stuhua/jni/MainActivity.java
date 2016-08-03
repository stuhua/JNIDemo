package com.stuhua.jni;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;

public class MainActivity extends Activity {
	static {
		System.loadLibrary("JNIDemo");
	}

	public native String helloFromJNI();

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		System.out.println(helloFromJNI());
	}

}
