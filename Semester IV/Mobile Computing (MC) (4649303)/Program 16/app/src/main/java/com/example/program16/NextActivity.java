package com.example.program16;


import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class NextActivity extends AppCompatActivity {
TextView output;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_next);

        output = findViewById(R.id.output);

        Bundle extra = getIntent().getExtras();
        if (extra != null){
            String s = extra.getString("username");

                if (s.equalsIgnoreCase("error")){
                    output.setText("Validation " + s + "!");
                }else{
                    output.setText("Welcome " + s);
                }
        }
    }
}
