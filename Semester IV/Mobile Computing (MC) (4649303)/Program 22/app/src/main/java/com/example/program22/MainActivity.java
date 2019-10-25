package com.example.program22;

import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AnimationUtils;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ImageView;

import java.util.ArrayList;
import java.util.List;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = MainActivity.class.getSimpleName();

    android.widget.Spinner spinner;
    List<String> list;
    ArrayAdapter<String> SpinnerAdapter;

    private ImageView mImageView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        spinner = findViewById(R.id.spinner);
        list = new ArrayList<>(); // List of Items

        list.add("Blink");
        list.add("Fade");
        list.add("Move");
        list.add("Slide Down");
        list.add("Slide Up");
        list.add("Zoom In");

        mImageView = findViewById(R.id.imageView);
        mImageView.setImageResource(R.drawable.ic_thumb_up_black_24dp);
        SpinnerAdapter = new ArrayAdapter<String>(this, android.R.layout.simple_spinner_item, list){
            public View getView(int position, View convertView, ViewGroup parent) {
                View v = super.getView(position, convertView, parent);
                ((android.widget.TextView) v).setTextColor(Color.parseColor("#000000"));
                return v;
            }
            public View getDropDownView(int position, View convertView,ViewGroup parent) {
                View v = super.getDropDownView(position, convertView,parent);
                v.setBackgroundColor(Color.parseColor("#ffffff"));
                ((android.widget.TextView) v).setTextColor(Color.parseColor("#000000"));
                return v;
            }
        };
        SpinnerAdapter.setDropDownViewResource(android.R.layout.simple_spinner_dropdown_item);
        spinner.setAdapter(SpinnerAdapter);  // Set Adapter in the spinner
        spinner.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
            @Override
            public void onItemSelected(AdapterView<?> parentView, View selectedItemView, int position, long id) {
                String state = parentView.getItemAtPosition(position).toString(); // selected item in the list
                change(state);
            }



            private void change(String state) {

                switch (state){
                    case "Zoom In":
                        android.view.animation.Animation animation1 = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.zoom_in);
                        mImageView.startAnimation(animation1);
                        break;
                    case "Move":
                        android.view.animation.Animation animation2 = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.move);
                        mImageView.startAnimation(animation2);
                        break;
                    case "Blink":
                        android.view.animation.Animation animation3 = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.blink);
                        mImageView.startAnimation(animation3);
                        break;
                    case "Slide Up":
                        android.view.animation.Animation animation4 = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.slide_up);
                        mImageView.startAnimation(animation4);
                        break;
                    case "Fade":
                        android.view.animation.Animation animation5 = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.fade);
                        mImageView.startAnimation(animation5);
                        break;
                    case "Slide Down":
                        android.view.animation.Animation animation6 = AnimationUtils.loadAnimation(getApplicationContext(), R.anim.slide_down);
                        mImageView.startAnimation(animation6);
                        break;
                }
            }

            @Override
            public void onNothingSelected(AdapterView<?> parentView) {

            }
        });
    }
 }
