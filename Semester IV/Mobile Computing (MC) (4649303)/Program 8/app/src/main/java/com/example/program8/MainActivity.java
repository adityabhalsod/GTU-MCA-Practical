package com.example.program8;

import android.Manifest;
import android.app.Activity;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.net.Uri;
import android.support.v4.app.ActivityCompat;
import android.support.v4.content.ContextCompat;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button btn;
    EditText dial;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        btn=findViewById(R.id.btn);
        dial=findViewById(R.id.dial);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (! dial.getText().toString().equals("")){
                    Intent num = new Intent(Intent.ACTION_CALL);
                    num.setData(Uri.parse("tel:"+dial.getText().toString()));
                    if (ActivityCompat.checkSelfPermission(MainActivity.this, Manifest.permission.CALL_PHONE)!= PackageManager.PERMISSION_GRANTED){
                        ActivityCompat.requestPermissions(MainActivity.this,new String[]{Manifest.permission.CALL_PHONE},CONTEXT_INCLUDE_CODE);
                        Toast.makeText(getApplicationContext(),"Phone call permission granted...", Toast.LENGTH_LONG).show();
                    }else{
                        Toast.makeText(getApplicationContext(),"Phone call already permission granted...", Toast.LENGTH_LONG).show();
                        startActivity(num);
                    }
                }else {
                    Toast.makeText(getApplicationContext(),"Please enter number...", Toast.LENGTH_LONG).show();
                }
            }
        });
    }
}
