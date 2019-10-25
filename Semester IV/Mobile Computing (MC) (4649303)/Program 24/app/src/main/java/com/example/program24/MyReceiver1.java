package com.example.program24;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.widget.Toast;
 
public class MyReceiver1 extends BroadcastReceiver{
 
    @Override
    public void onReceive(Context context, Intent intent) {
     Toast.makeText(context, "MyReceiver1 provoked", Toast.LENGTH_LONG).show();
    }
 
}