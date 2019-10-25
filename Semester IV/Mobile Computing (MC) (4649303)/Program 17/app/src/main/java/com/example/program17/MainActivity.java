package com.example.program17;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.support.design.widget.FloatingActionButton;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.EditText;
import android.widget.LinearLayout;
import android.widget.ListView;
import android.widget.PopupMenu;
import android.widget.SimpleAdapter;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        refersh_list();
        final EditText input1 = new EditText(MainActivity.this);
        final EditText input2 = new EditText(MainActivity.this);

        FloatingActionButton fab=findViewById(R.id.fab);
        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                AlertDialog.Builder builder = new AlertDialog.Builder(MainActivity.this);
                builder.setTitle("Add Country Name :");

                final EditText input1 = new EditText(MainActivity.this);
                LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                        LinearLayout.LayoutParams.MATCH_PARENT,
                        LinearLayout.LayoutParams.MATCH_PARENT);

                input1.setLayoutParams(lp);
                builder.setView(input1);
                builder.setPositiveButton("Next", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialogInterface, int i) {
                        AlertDialog.Builder builder = new AlertDialog.Builder(MainActivity.this);
                        builder.setTitle("Add Country Short Name :");

                        final EditText input2 = new EditText(MainActivity.this);
                        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                                LinearLayout.LayoutParams.MATCH_PARENT,
                                LinearLayout.LayoutParams.MATCH_PARENT);

                        input2.setLayoutParams(lp);
                        builder.setView(input2);
                        builder.setPositiveButton("Add", new DialogInterface.OnClickListener() {
                            @Override
                            public void onClick(DialogInterface dialogInterface, int i) {
                                //insert data
                                DBHelper db = new DBHelper(getApplicationContext());
                                Contact cn =  new Contact();
                                cn.setName(input1.getText().toString());
                                cn.setShortname(input2.getText().toString());
                                db.addContact(cn);
                                refersh_list();
                            }
                        });
                        builder.setCancelable(false);
                        builder.show();
                    }
                });
                builder.setCancelable(false);
                builder.show();
            }
        });

    }

    private void refersh_list() {
        // Reading all contacts
        DBHelper db = new DBHelper(this);

        List<Contact> contacts = db.getAllContacts();

        List<HashMap<String,String>> aList = new ArrayList<>();


        for (Contact cn : contacts) {
            HashMap<String, String> hm = new HashMap<>();
            hm.put("id",String.valueOf(cn.getID()));
            hm.put("txt1",cn.getName() );
            hm.put("txt2",cn.getShortname() );
            aList.add(hm);
        }

        String[] from = { "id","txt1","txt2"};


        int[] to = { R.id.id,R.id.txt1,R.id.txt2};


        final SimpleAdapter adapter = new SimpleAdapter(this, aList, R.layout.listview_activity, from, to);

        final ListView listView ;


        listView = findViewById(R.id.list);

        listView.setAdapter(adapter);

        try{
            listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
                @Override
                public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                    String s = parent.getItemAtPosition(position).toString();
                    String[] st = s.split(",");
                    String st1 = st[0]; //id
                    String st2 = st[2]; //txt1
                    String st3 = st[1]; //txt2


                    String t1 = st1.replace("{id=","");


                    String t2 = st2.replace("txt1=","");
                    String tt2=t2.substring(1);
                    String orignal2 = tt2.substring(0, tt2.length() - 1);


                    String t3 = st3.replace("txt2=","");
                    String orignal3=t3.substring(1);



                    Intent i =new Intent(getApplicationContext(),UpdateAndDelete.class);
                    i.putExtra("id",t1);
                    i.putExtra("country_name",orignal2);
                    i.putExtra("country_short_name",orignal3);

                    startActivity(i);

                }
            });

        }catch (Exception ex){
            Toast.makeText(getApplicationContext(),ex.toString(),Toast.LENGTH_LONG).show();
        }

    }
}
