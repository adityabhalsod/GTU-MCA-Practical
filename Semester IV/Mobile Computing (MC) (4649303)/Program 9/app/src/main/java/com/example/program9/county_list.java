package com.example.program9;


import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.support.v4.app.FragmentTransaction;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import java.util.ArrayList;

public class county_list extends Fragment {
    ListView lv;
    ArrayList<String> a1;
    ArrayAdapter<String> aa;

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,Bundle savedInstanceState) {
        View v=inflater.inflate(R.layout.fragment_county_list, container, false);
        lv=v.findViewById(R.id.list);
        a1= new ArrayList<>();
        aa= new ArrayAdapter<>(getActivity(), android.R.layout.simple_list_item_activated_1, a1);
        lv.setAdapter(aa);
        a1.add("India");
        a1.add("Pakistan");
        a1.add("United Kingdom");
        a1.add("United State Of America");
        a1.add("Japan");

        lv.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                String s=a1.get(position);
                MainActivity my= (MainActivity) getActivity();
                my.f1(s);
            }
        });
        return v;
    }

}
