package com.example.program9;

import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentTransaction;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        FragmentManager manager =getSupportFragmentManager();
        FragmentTransaction t = manager.beginTransaction();

       county_list c1 =new county_list();
       t.add(R.id.fragment1,c1);
       t.commit();



    }

    public void f1(String s) {
        FragmentManager  manager1=getSupportFragmentManager();
        FragmentTransaction t=manager1.beginTransaction();

        county_info c2 = new county_info();
        Bundle b2 = new Bundle();

        b2.putString("s",s);
        c2.setArguments(b2);
        t.replace(R.id.fragment1,c2);
        t.commit();
    }

    @Override
    public void onBackPressed() {
        finish();
    }
}
