package com.example.program25;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.widget.Toast;

public class LocalBroadcastReceiverOne extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();
        if(MainActivity.LOCAL_BROADCAST_ACTION.equals(action)) {
            String fromActivity = intent.getStringExtra(MainActivity.LOCAL_BROADCAST_SOURCE);
            Toast.makeText(context, "Receiver one receive broadcast from " + fromActivity, Toast.LENGTH_LONG).show();
        }
    }
}