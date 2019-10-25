package com.example.program18;


import android.Manifest;
import android.content.ContentResolver;
import android.content.pm.PackageManager;
import android.database.Cursor;
import android.provider.ContactsContract;
import android.support.v4.app.ActivityCompat;
import android.support.v4.widget.SwipeRefreshLayout;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.SimpleAdapter;
import android.widget.Toast;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class MainActivity extends AppCompatActivity {

    ListView listView;
    SwipeRefreshLayout refresh;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        refresh = findViewById(R.id.refresh);

        refresh.setOnRefreshListener(new SwipeRefreshLayout.OnRefreshListener() {
            @Override
            public void onRefresh() {
                if (ActivityCompat.checkSelfPermission(MainActivity.this, Manifest.permission.READ_CONTACTS)!= PackageManager.PERMISSION_GRANTED){
                    ActivityCompat.requestPermissions(MainActivity.this,new String[]{Manifest.permission.READ_CONTACTS},1);
                    Toast.makeText(getApplicationContext(),"Phone book permission granted please swipe down to refresh list...", Toast.LENGTH_LONG).show();
                }else {
                    getphonebooklist();
                }
            }
        });

        if (ActivityCompat.checkSelfPermission(MainActivity.this, Manifest.permission.READ_CONTACTS)!= PackageManager.PERMISSION_GRANTED){
            ActivityCompat.requestPermissions(MainActivity.this,new String[]{Manifest.permission.READ_CONTACTS},1);
            Toast.makeText(getApplicationContext(),"Phone book permission granted please swipe down to refresh list...", Toast.LENGTH_LONG).show();
        }else {
            getphonebooklist();
        }

    }

    private void getphonebooklist() {
        List<HashMap<String,String>> aList = new ArrayList<>();

        ContentResolver cr = getContentResolver();
        Cursor phones = cr.query(ContactsContract.Contacts.CONTENT_URI,null, null, null, null);
        while (phones.moveToNext())
        {
            HashMap<String, String> hm = new HashMap<>();

            String id = phones.getString(phones.getColumnIndex(ContactsContract.Contacts._ID));
            String name = phones.getString(phones.getColumnIndex(ContactsContract.Contacts.DISPLAY_NAME));

            if (phones.getInt(phones.getColumnIndex(
                    ContactsContract.Contacts.HAS_PHONE_NUMBER)) > 0) {
                Cursor pCur = getContentResolver().query(ContactsContract.CommonDataKinds.Phone.CONTENT_URI,null,ContactsContract.CommonDataKinds.Phone.CONTACT_ID + " = ?",new String[]{id}, null);
                while (pCur.moveToNext()) {
                    String phoneNo = pCur.getString(pCur.getColumnIndex(ContactsContract.CommonDataKinds.Phone.NUMBER));
                    hm.put("txt1",name);
                    hm.put("txt2", phoneNo);
                    aList.add(hm);
                }
                pCur.close();
            }

            String[] from = { "txt1","txt2"};


            int[] to = { R.id.txt1,R.id.txt2};


            final SimpleAdapter adapter = new SimpleAdapter(this, aList, R.layout.listview_activity, from, to);


            listView = findViewById(R.id.list);

            listView.setAdapter(adapter);

            listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
                @Override
                public void onItemClick(AdapterView<?> parent, View view, int position, long id) {

                    Toast.makeText(getApplicationContext(),parent.getItemAtPosition(position).toString(),Toast.LENGTH_LONG).show();
                }
            });
            refresh.setRefreshing(false);
        }
    }
}

