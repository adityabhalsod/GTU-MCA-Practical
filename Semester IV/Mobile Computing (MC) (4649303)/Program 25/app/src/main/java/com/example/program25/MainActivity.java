package com.example.program25;

import android.content.Intent;
import android.content.IntentFilter;
import android.net.Uri;
import android.support.v4.content.LocalBroadcastManager;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    Button b1;

    public static final String LOCAL_BROADCAST_ACTION = "com.example.program25.LOCAL_BROADCAST";

    public static final String LOCAL_BROADCAST_SOURCE = "LOCAL_BROADCAST_SOURCE";

    private LocalBroadcastManager localBroadcastManager = null;

    private LocalBroadcastReceiverOne receiverOne = null;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
            super.onCreate(savedInstanceState);
            setContentView(R.layout.activity_main);
            b1 = findViewById(R.id.button1);
            b1.setOnClickListener(new View.OnClickListener() {

                @Override
                public void onClick(View v) {
                    Intent i = new Intent(android.content.Intent.ACTION_VIEW,Uri.parse("http://www.google.com"));
                    startActivity(i);
                }
            });

        // Get local broadcast manager object.
        localBroadcastManager = LocalBroadcastManager.getInstance(this);

        // Create local broadcast receiver one.
        receiverOne = new LocalBroadcastReceiverOne();

        // Create intent filter, add filter action.
        IntentFilter intentFilter = new IntentFilter();
        intentFilter.addAction(LOCAL_BROADCAST_ACTION);

        // Register receiver one to local broadcast manager.
        localBroadcastManager.registerReceiver(receiverOne, intentFilter);
        //registerReceiver(receiverOne, intentFilter);

        Button sendBroadcastOneButton = findViewById(R.id.button2);
        sendBroadcastOneButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                // When being clicked, it will send a local broadcast with the sender info.
                Intent intent = new Intent(LOCAL_BROADCAST_ACTION);
                intent.putExtra(LOCAL_BROADCAST_SOURCE, "Main Activity");
                localBroadcastManager.sendBroadcast(intent);
                //sendBroadcast(intent);
            }
        });
    }

    @Override
    protected void onResume() {
        super.onResume();
        //Start Monitoring Device State Changes Using Broadcast Intents
        PowerConnectionNotify receiver = new PowerConnectionNotify();
        IntentFilter ik = new IntentFilter();
        ik.addAction(Intent.ACTION_POWER_CONNECTED);
        ik.addAction(Intent.ACTION_POWER_DISCONNECTED);
        registerReceiver(receiver, ik);
    }

    @Override
    protected void onPause() {
        super.onPause();
        // Stop Monitoring Device State Changes Using Broadcast Intents
        PowerConnectionNotify receiver = new PowerConnectionNotify();
        unregisterReceiver(receiver);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if(localBroadcastManager!=null)
        {
            // Do not forget unregister the local broadcast receiver in onDestroy method.
            localBroadcastManager.unregisterReceiver(receiverOne);
            //unregisterReceiver(receiverOne);
        }
    }

}
