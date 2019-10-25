package com.example.program42;

import android.Manifest;
import android.content.Context;
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

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;

public class CreateFile extends AppCompatActivity {
    Button btn;
    EditText ed1;
    EditText ed2;
    String foldername="Program_42_File_List";
    @Override
    public void onBackPressed() {
        super.onBackPressed();
        //replace activity
        Intent i =new Intent(getApplicationContext(),MainActivity.class);
        startActivity(i);

        //list refresh
        MainActivity mt = new MainActivity();
        mt.forrefresh();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_create_file);

        btn=findViewById(R.id.filecreate);
        ed1=findViewById(R.id.ed1);
        ed2=findViewById(R.id.ed2);

        btn.setOnClickListener(new View.OnClickListener() {
            @RequiresApi(api = Build.VERSION_CODES.M)
            @Override
            public void onClick(View v) {
                try {
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
                        File fileDir = new File(fe.getAbsolutePath(),foldername);
                        fileDir.mkdirs();

                        //file create
                        File file = new File(fileDir,ed1.getText().toString()+".txt");
                        FileWriter fileWriter = new FileWriter(file);
                        BufferedWriter out = new BufferedWriter(fileWriter);
                        out.write(ed2.getText().toString());
                        out.close();

                        //message
                        Toast.makeText(getApplicationContext(),"Write File Successfully...",Toast.LENGTH_SHORT).show();

                        //all text box clear
                        ed1.setText("");
                        ed2.setText("");
                    }
                }catch (Exception ex){
                    //if error message
                    Toast.makeText(getApplicationContext(),ex.toString(),Toast.LENGTH_LONG).show();
                }
            }
        });

    }
}
