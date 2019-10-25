package com.example.program4;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
private EditText input;
private Button click;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        input= findViewById(R.id.txt);
        click= findViewById(R.id.button);

        click.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                if (input.getText().toString().equals("")){
                    Toast.makeText(getApplicationContext(),"Please enter value...",Toast.LENGTH_LONG).show();
                }else{
                    Toast.makeText(getApplicationContext(),input.getText().toString(),Toast.LENGTH_LONG).show();
                    input.setText("");
                }
            }
        });


    }
}
