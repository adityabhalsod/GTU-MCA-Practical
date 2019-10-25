package com.example.program12;

import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ImageView;

import java.util.ArrayList;
import java.util.List;

import static com.example.program12.R.drawable.india;

public class MainActivity extends AppCompatActivity {

    android.widget.Spinner spinner;
    List<String> list;
    ArrayAdapter<String> SpinnerAdapter;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        spinner = findViewById(R.id.spinner);
        list = new ArrayList<>(); // List of Items

        for (int i=0;i<6;i++){
            list.add(getResources().getStringArray(R.array.county)[i]);
        }


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
                ImageView iv=findViewById(R.id.img);
                switch (state){
                    case "India":
                        iv.setImageResource(R.drawable.india);
                        break;
                    case "Japan":
                        iv.setImageResource(R.drawable.japan);
                        break;
                    case "Pakistan":
                        iv.setImageResource(R.drawable.pakistan);
                        break;
                    case "United Kingdom":
                        iv.setImageResource(R.drawable.uk);
                        break;
                    case "United State Of America":
                        iv.setImageResource(R.drawable.usa);
                        break;
                }
            }

            @Override
            public void onNothingSelected(AdapterView<?> parentView) {

            }
        });
    }
}
