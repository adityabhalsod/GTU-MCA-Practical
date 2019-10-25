package com.example.program10;

import android.os.Bundle;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentTransaction;
import android.support.v7.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        FragmentManager manager = getSupportFragmentManager();
        FragmentTransaction t1 = manager.beginTransaction();

        main c1 = new main();
        t1.add(R.id.fragment1,c1);
        t1.commit();
    }

    @Override
    public void onBackPressed() {
        finish();
    }
}
