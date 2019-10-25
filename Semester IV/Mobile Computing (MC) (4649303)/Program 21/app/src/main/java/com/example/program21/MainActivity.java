package com.example.program21;

import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.RelativeLayout;
import android.widget.Toast;


public class MainActivity extends AppCompatActivity {
    RelativeLayout currentLayout;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu){
        getMenuInflater().inflate(R.menu.optionmenu,menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item){
        currentLayout = findViewById(R.id.menu1);
            Toast.makeText(this,"Selected Color : "+item.getTitle(),Toast.LENGTH_SHORT).show();
             if(item.getItemId()==R.id.Black){
                 currentLayout.setBackgroundColor(Color.BLACK);
             }else if(item.getItemId()==R.id.Blue){
                 currentLayout.setBackgroundColor(Color.BLUE);
             }
             else if(item.getItemId()== R.id.Green){
                 currentLayout.setBackgroundColor(Color.GREEN);
             }
             else if(item.getItemId()== R.id.White){
                 currentLayout.setBackgroundColor(Color.WHITE);
             }
             else if(item.getItemId()== R.id.Yellow){
                 currentLayout.setBackgroundColor(Color.YELLOW);
             }
             else if(item.getItemId()== R.id.Red){
                 currentLayout.setBackgroundColor(Color.RED);
             }
        return super.onOptionsItemSelected(item);
    }
}
