package com.example.program9;


import android.graphics.drawable.Drawable;
import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentTransaction;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;


public class county_info extends Fragment {
    TextView t;

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,Bundle savedInstanceState) {
        View v =inflater.inflate(R.layout.fragment_county_info, container, false);
        t=v.findViewById(R.id.txt);

        Bundle b = getArguments();
        if(b!=null){
            String s=b.getString("s");
            ImageView img = v.findViewById(R.id.imgview);

            switch (s){
                case "India":
                    img.setImageResource(R.drawable.india);
                    break;
                case "Pakistan":
                    img.setImageResource(R.drawable.pakistan);
                    break;
                case "United Kingdom":
                    img.setImageResource(R.drawable.uk);
                    break;
                case "United State Of America":
                    img.setImageResource(R.drawable.usa);
                    break;
                case "Japan":
                    img.setImageResource(R.drawable.japan);
                    break;
            }
            t.setText("County name :- "+s);
        }

        Button button = v.findViewById(R.id.back_btn);
        button.setOnClickListener(new View.OnClickListener()
        {
            @Override
            public void onClick(View v)
            {
                onButtonClicked();
            }
        });

        return v;
    }

    public void onButtonClicked()
    {
        final FragmentTransaction ft = getFragmentManager().beginTransaction();
        ft.replace(R.id.fragment1, new county_list(), "NewFragmentTag");
        ft.commit();
        ft.addToBackStack(null);
    }



}
