package com.example.program42;

import android.Manifest;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.Build;
import android.os.Environment;
import android.support.annotation.RequiresApi;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Display_n_Delete extends AppCompatActivity {
    String transfer = "";
    String foldername="Program_42_File_List";
    EditText display;

    Button update,delete;

    @RequiresApi(api = Build.VERSION_CODES.M)
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display_n__delete);

        display = findViewById(R.id.display);

        update = findViewById(R.id.update);

        delete = findViewById(R.id.delete);

        //get transfer value
        Bundle extra = getIntent().getExtras();
        if (extra != null) {
            transfer = extra.getString("transfer");
        }

        //check permission granted or not
        if(checkSelfPermission(Manifest.permission.WRITE_EXTERNAL_STORAGE)!= PackageManager.PERMISSION_GRANTED){
            //permission
            requestPermissions(new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE},10);

            //permission granted message
            Toast.makeText(getApplicationContext(),"Now, Permission granted create file again...",Toast.LENGTH_LONG).show();
        }else {
            //get storage path
            File fe = Environment.getExternalStorageDirectory();

            //if doesn't exits a folder then new folder create
            File fileDir = new File(fe.getAbsolutePath(), foldername);

            File files = new File(fileDir, transfer);

            try {
                BufferedReader br = null;

                br = new BufferedReader(new FileReader(files));
                String line;

                while ((line = br.readLine()) != null) {
                    display.append(line);
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
        }


        //update button click event
        update.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //check permission granted or not
                if(checkSelfPermission(Manifest.permission.WRITE_EXTERNAL_STORAGE)!= PackageManager.PERMISSION_GRANTED){
                    //permission
                    requestPermissions(new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE},10);

                    //permission granted message
                    Toast.makeText(getApplicationContext(),"Now, Permission granted create file again...",Toast.LENGTH_LONG).show();
                }else {
                    //get storage path
                    File fe = Environment.getExternalStorageDirectory();

                    //if doesn't exits a folder then new folder create
                    File fileDir = new File(fe.getAbsolutePath(), foldername);

                    //file create
                    File fil = new File(fileDir, transfer);

                    try {
                        FileWriter fileWriter = new FileWriter(fil);
                        BufferedWriter out = new BufferedWriter(fileWriter);
                        out.write(display.getText().toString());
                        out.close();

                    } catch (IOException e) {
                        e.printStackTrace();
                    }

                    //replace activity
                    Intent i = new Intent(getApplicationContext(), MainActivity.class);
                    startActivity(i);

                    //list refresh
                    MainActivity mt = new MainActivity();
                    mt.forrefresh();

                    //message
                    Toast.makeText(getApplicationContext(), "Update File Successfully...", Toast.LENGTH_SHORT).show();
                }
            }
        });

        //delete  button click event
        delete.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                //check permission granted or not
                if(checkSelfPermission(Manifest.permission.WRITE_EXTERNAL_STORAGE)!= PackageManager.PERMISSION_GRANTED){
                    //permission
                    requestPermissions(new String[]{Manifest.permission.WRITE_EXTERNAL_STORAGE},10);

                    //permission granted message
                    Toast.makeText(getApplicationContext(),"Now, Permission granted create file again...",Toast.LENGTH_LONG).show();
                }else {
                    //get storage path
                    File fe = Environment.getExternalStorageDirectory();

                    //if doesn't exits a folder then new folder create
                    File fileDir = new File(fe.getAbsolutePath(), foldername);

                    //file create
                    File file = new File(fileDir, transfer);
                    file.delete();


                    //replace activity
                    Intent i = new Intent(getApplicationContext(), MainActivity.class);
                    startActivity(i);

                    //list refresh
                    MainActivity mt = new MainActivity();
                    mt.forrefresh();

                    //message
                    Toast.makeText(getApplicationContext(), "File successfully delete...", Toast.LENGTH_SHORT).show();
                }
            }
        });
    }
}