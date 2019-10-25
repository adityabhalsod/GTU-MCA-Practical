package com.example.program6;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
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
                if (username.getText().toString().equalsIgnoreCase("Aditya") && password.getText().toString().equalsIgnoreCase("password")){
                    Intent i =new Intent(getApplicationContext(),Main2Activity.class);
                    i.putExtra("username",username.getText().toString());
                    startActivity(i);
                    Toast.makeText(getApplicationContext(),"Login is successfully...", Toast.LENGTH_LONG).show();
                }else if(username.getText().toString().equalsIgnoreCase("") || password.getText().toString().equalsIgnoreCase("")){
                    Toast.makeText(getApplicationContext(),"Username or password are empty...", Toast.LENGTH_LONG).show();
                }else{
                    Toast.makeText(getApplicationContext(),"Username or password are not match...", Toast.LENGTH_LONG).show();
                }
            }
        });

    }
}
