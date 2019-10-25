package com.example.program7;


import android.net.Uri;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.content.Intent;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;


public class MainActivity extends AppCompatActivity {
    Button button;
    EditText username,password;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        button=findViewById(R.id.submit);

        username=findViewById(R.id.username);
        password=findViewById(R.id.password);

        button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (getResources().getString(R.string.user).equalsIgnoreCase(username.getText().toString()) && getResources().getString(R.string.pwd).equalsIgnoreCase(password.getText().toString())){
                    Intent browser= new Intent(Intent.ACTION_VIEW, Uri.parse("http://www.google.com"));
                    startActivity(browser);
                }else if(username.getText().toString().equalsIgnoreCase("") || password.getText().toString().equalsIgnoreCase("")){
                    Toast.makeText(getApplicationContext(),"Username or password are empty...", Toast.LENGTH_LONG).show();
                }else{
                    Toast.makeText(getApplicationContext(),"Username or password are not match...", Toast.LENGTH_LONG).show();
                }
            }
        });

    }
}
