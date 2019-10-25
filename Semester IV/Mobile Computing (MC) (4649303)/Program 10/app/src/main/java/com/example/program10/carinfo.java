package com.example.program10;

import android.os.Bundle;
import android.support.v4.app.Fragment;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import android.widget.TextView;


/**
 * A simple {@link Fragment} subclass.
 */
public class carinfo extends Fragment {

    String name;

    TextView t1,t2,t3,t4;

    ImageView img;


    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        View v =  inflater.inflate(R.layout.fragment_carinfo, container, false);

        t1=v.findViewById(R.id.name);
        t2=v.findViewById(R.id.date);
        t3=v.findViewById(R.id.com_name);
        t4=v.findViewById(R.id.color);
        img=v.findViewById(R.id.imgview);


        Bundle b = getArguments();
        if(b!=null){
            name=b.getString("orignal1");
        }


        if (name.startsWith("Sedan")){
            t1.setText("Car Name :- Sedan");
            t2.setText("Date :- 25th July,2005");
            t3.setText("Company Name :- Hyundai");
            t4.setText("Color Available :- White,Black");
            img.setImageResource(R.drawable.image1);
        }
        else if (name.startsWith("Hatchback")){
            t1.setText("Car Name :- Swift");
            t2.setText("Date :- 23th July,2005");
            t3.setText("Company Name :- Marti Suzuki");
            t4.setText("Color Available :- White,Red");
            img.setImageResource(R.drawable.image2);
        }
        else if (name.startsWith("MPV/minivan")){
            t1.setText("Car Name :- Scenic");
            t2.setText("Date :- 23th March,2008");
            t3.setText("Company Name :- Renault");
            t4.setText("Color Available :- White,Blue");
            img.setImageResource(R.drawable.image3);
        }
        else if (name.startsWith("SUV/4X4")){
            t1.setText("Car Name :- Scorpio");
            t2.setText("Date :- 10th February,2008");
            t3.setText("Company Name :- Mahindra");
            t4.setText("Color Available :- White,Black");
            img.setImageResource(R.drawable.image4);
        }
        else if (name.startsWith("CUV/Crossover")){
            t1.setText("Car Name :- Nissan Kicks");
            t2.setText("Date :- 10th December,2010");
            t3.setText("Company Name :- Nissan");
            t4.setText("Color Available :- Oranges");
            img.setImageResource(R.drawable.image5);
        }
        else if (name.startsWith("Pickup")){
            t1.setText("Car Name :-Kargo");
            t2.setText("Date :- 12th October,2012");
            t3.setText("Company Name :- Force");
            t4.setText("Color Available :- White");
            img.setImageResource(R.drawable.image6);
        }
        else if (name.startsWith("Coupe")){
            t1.setText("Car Name :-Civic");
            t2.setText("Date :- 12th October,2015");
            t3.setText("Company Name :- Honda");
            t4.setText("Color Available :- White");
            img.setImageResource(R.drawable.image7
            );
        }
        else if (name.startsWith("Convertible/spyder/cabriolet")){
            t1.setText("Car Name :-Spider");
            t2.setText("Date :- 30th October,2015");
            t3.setText("Company Name :- Ferrari");
            t4.setText("Color Available :- Red");
            img.setImageResource(R.drawable.image8
            );
        }
        else if (name.startsWith("Station wagon/estate")){
            t1.setText("Car Name :-V60");
            t2.setText("Date :- 30th October,2017");
            t3.setText("Company Name :- Volvo");
            t4.setText("Color Available :- Silver");
            img.setImageResource(R.drawable.image9
            );
        }
        else if (name.startsWith("Micro")){
            t1.setText("Car Name :-Nano");
            t2.setText("Date :- 30th October,2014");
            t3.setText("Company Name :- Tata");
            t4.setText("Color Available :- White,Yellow,Red,Black");
            img.setImageResource(R.drawable.image10
            );
        }
        return v;
    }

}
