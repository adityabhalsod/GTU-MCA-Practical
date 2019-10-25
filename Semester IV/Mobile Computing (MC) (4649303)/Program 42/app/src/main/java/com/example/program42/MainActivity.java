package com.example.program42;

import android.content.Intent;
import android.os.Environment;
import android.support.design.widget.FloatingActionButton;
import android.support.v4.widget.SwipeRefreshLayout;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

import java.io.File;
import java.util.ArrayList;


public class MainActivity extends AppCompatActivity {
FloatingActionButton fb;
ListView lv;
ArrayList<String> a1;
ArrayAdapter<String> aa;

String foldername="Program_42_File_List";

   @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        fb=findViewById(R.id.fab);



        // floating button click event
        fb.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i =new Intent(getApplicationContext(),CreateFile.class);
                startActivity(i);
            }
        });

        //list find view by id
        lv=findViewById(R.id.list);
        a1= new ArrayList<>();
        aa= new ArrayAdapter<>(getApplicationContext(), android.R.layout.simple_list_item_activated_1, a1);
        lv.setAdapter(aa);
        //on create call method
        forrefresh();



        //list each item click event
        lv.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                String s = parent.getItemAtPosition(position).toString();
                Intent i = new Intent(getApplicationContext(),Display_n_Delete.class);
                i.putExtra("transfer",s);
                startActivity(i);
            }
        });
    }

        public void forrefresh() {
            //get storage path
            File fe = Environment.getExternalStorageDirectory();

            //if doesn't exits a folder then new folder create
            File fileDir = new File(fe.getAbsolutePath(),foldername);
            fileDir.mkdirs();

            File[] files = fileDir.listFiles();

            a1.clear();

            for (int x=0; x<files.length; x++){
                a1.add(files[x].getName());
            }
        }
}
