package com.example.program17;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class UpdateAndDelete extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_update_and_delete);


        final EditText tx1,tx2;
        Button btn1,btn2;


        tx1=findViewById(R.id.db_county_name);
        tx2=findViewById(R.id.db_county_short_name);
        btn1=findViewById(R.id.Update);
        btn2=findViewById(R.id.Delete);


        Bundle extra = getIntent().getExtras();




        if (extra != null){
            tx1.setText(extra.getString("country_name"));
            tx2.setText(extra.getString("country_short_name"));
        }



        btn1.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DBHelper db =new DBHelper(getApplicationContext());
                Contact cn =new Contact();

                        Bundle extra = getIntent().getExtras();
                        if (extra != null){
                            cn.setID(Integer.parseInt(extra.getString("id")));
                        }

                cn.setName(tx1.getText().toString());
                cn.setShortname(tx2.getText().toString());
                db.updateContact(cn);

                Toast.makeText(getApplicationContext(),"Data successfully update...",Toast.LENGTH_LONG).show();
                Intent i =new Intent(getApplicationContext(),MainActivity.class);
                startActivity(i);
            }
        });

        btn2.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                DBHelper db = new DBHelper(getApplicationContext());

                Bundle extra = getIntent().getExtras();
                if (extra != null){
                    db.deleteContact(extra.getString("id"));
                }

                Toast.makeText(getApplicationContext(),"Data successfully delete...",Toast.LENGTH_LONG).show();
                Intent i =new Intent(getApplicationContext(),MainActivity.class);
                startActivity(i);
            }
        });
    }
}
