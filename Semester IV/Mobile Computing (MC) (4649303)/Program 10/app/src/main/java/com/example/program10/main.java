package com.example.program10;


import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentManager;
import android.support.v4.app.FragmentTransaction;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.SimpleAdapter;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;


/**
 * A simple {@link Fragment} subclass.
 */
public class main extends Fragment {
    public main() {

    }


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        View v =  inflater.inflate(R.layout.fragment_main, container, false);
        final ListView listView;
        String[] type = new String[] {
                "Sedan",
                "Hatchback",
                "MPV/minivan",
                "SUV/4X4",
                "CUV/Crossover",
                "Pickup",
                "Coupe",
                "Convertible/spyder/cabriolet",
                "Station wagon/estate",
                "Micro"
        };

        int[] img = new int[]{
                R.drawable.image1,
                R.drawable.image2,
                R.drawable.image3,
                R.drawable.image4,
                R.drawable.image5,
                R.drawable.image6,
                R.drawable.image7,
                R.drawable.image8,
                R.drawable.image9,
                R.drawable.image10,
        };



        List<HashMap<String,String>> aList = new ArrayList<>();

        for(int i=0;i<10;i++){
            HashMap<String, String> hm = new HashMap<>();
            hm.put("txt",  type[i]);
            hm.put("img", Integer.toString(img[i]) );
            aList.add(hm);
        }


        String[] from = { "img","txt"};


        int[] to = { R.id.img,R.id.txt};


        final SimpleAdapter adapter = new SimpleAdapter(getContext(), aList, R.layout.listview_activity, from, to);


        listView = v.findViewById(R.id.listview);

        listView.setAdapter(adapter);

        listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position,long id) {
                String s = parent.getItemAtPosition(position).toString();
                String[] st = s.split(",");
                String st1 = st[0];
                String orignal = st1.replace("{txt=","");
                FragmentManager fm = getFragmentManager();
                FragmentTransaction ft= fm.beginTransaction();

                carinfo carsname =  new carinfo();

                Bundle bd = new Bundle();
                bd.putString("orignal1",orignal);
                carsname.setArguments(bd);
                ft.replace(R.id.fragment1,carsname);
                ft.commit();
            }
        });

        return v;
    }

}
