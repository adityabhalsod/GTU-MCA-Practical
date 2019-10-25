package com.example.program16;

import android.content.Intent;
import android.database.Cursor;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;

import java.util.List;


public class MainActivity extends AppCompatActivity {
    private DBHelper mydb ;
    EditText username,password;
    Button submit;
    String username_db;
    String password_db;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        username=findViewById(R.id.username);
        password=findViewById(R.id.password);
        submit=findViewById(R.id.submit);
        try {
            //insert data
            DBHelper db = new DBHelper(this);
            db.addContact(new Contact("Aditya", "password"));

            // Reading all contacts

            List<Contact> contacts = db.getAllContacts();

            for (Contact cn : contacts) {
               if (cn.getUsername().equalsIgnoreCase("Aditya") && cn.getPassword().equalsIgnoreCase("password")){
                    username_db=cn.getUsername();
                    password_db=cn.getPassword();
               }

            }

        }catch (Exception ex){
            Toast.makeText(this,"database:"+ex.toString(),Toast.LENGTH_LONG).show();
        }

        try {
            submit.setOnClickListener(  new View.OnClickListener() {
                @Override
                public void onClick(View v) {
                    if (username.getText().toString().equalsIgnoreCase(username_db) && password.getText().toString().equalsIgnoreCase(password_db)){
                        Intent i =new Intent(getApplicationContext(),NextActivity.class);
                        i.putExtra("username",username.getText().toString());
                        startActivity(i);
                        Toast.makeText(getApplicationContext(),"Login is successfully...", Toast.LENGTH_LONG).show();
                    }else if(username.getText().toString().equalsIgnoreCase("") || password.getText().toString().equalsIgnoreCase("")){
                        Toast.makeText(getApplicationContext(),"Username or password are empty...", Toast.LENGTH_LONG).show();
                    }else{
                        Intent i =new Intent(getApplicationContext(),NextActivity.class);
                        i.putExtra("username","error");
                        startActivity(i);
                        Toast.makeText(getApplicationContext(),"Username or password are not match...", Toast.LENGTH_LONG).show();
                    }
                }
            });
        }catch (Exception ex){
            Toast.makeText(this,"submit:"+ex.toString(),Toast.LENGTH_LONG).show();
        }



    }

 }

