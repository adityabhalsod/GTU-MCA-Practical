package com.example.program15;


import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;

public class NextActivity extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_next);


        Bundle extra = getIntent().getExtras();
        if (extra != null){
            try {
                String back = extra.getString("background");
                String fore = extra.getString("foreground");

                String set1 = setcolor(back);
                String set2 = setcolor(fore);


                RelativeLayout currentLayout = findViewById(R.id.background);
                currentLayout.setBackgroundColor(Color.parseColor(set1));
                TextView t = findViewById(R.id.txt);
                t.setTextColor(Color.parseColor(set2));
            }catch (Exception ex) {
                RelativeLayout currentLayout = findViewById(R.id.background);
                currentLayout.setBackgroundColor(Color.parseColor("#000000"));
                TextView t = findViewById(R.id.txt);
                t.setTextColor(Color.parseColor("#FFFFFF"));
                Toast.makeText(this, "Color not found...", Toast.LENGTH_SHORT).show();
            }
        }
    }

    public String setcolor(String s) {
        String[] color = new String[] {
                "Amaranth,#E52B50",
                "Amber,#FFBF00",
                "Amethyst,#9966CC",
                "Apricot,#FBCEB1",
                "Aquamarine,#7FFFD4",
                "Azure,#007FFF",
                "Baby blue,#89CFF0",
                "Beige,#F5F5DC",
                "Black,#000000",
                "Blue,#0000FF",
                "Blue-green,#0095B6",
                "Blue-violet,#8A2BE2",
                "Blush,#DE5D83",
                "Bronze,#CD7F32",
                "Brown,#964B00",
                "Burgundy,#800020",
                "Byzantium,#702963",
                "Carmine,#960018",
                "Cerise,#DE3163",
                "Cerulean,#007BA7",
                "Champagne,#F7E7CE",
                "Chartreuse green,#7FFF00",
                "Chocolate,#7B3F00",
                "Cobalt blue,#0047AB",
                "Coffee,#6F4E37",
                "Copper,#B87333",
                "Coral,#F88379",
                "Crimson,#DC143C",
                "Cyan,#00FFFF",
                "Desert sand,#EDC9Af",
                "Electric blue,#7DF9FF",
                "Emerald,#50C878",
                "Erin,#00FF3F",
                "Gold,#FFD700",
                "Gray,#808080",
                "Green,#008000",
                "Harlequin,#3FFF00",
                "Indigo,#4B0082",
                "Ivory,#FFFFF0",
                "Jade,#00A86B",
                "Jungle green,#29AB87",
                "Lavender,#B57EDC",
                "Lemon,#FFF700",
                "Lilac,#C8A2C8",
                "Lime,#BFFF00",
                "Magenta,#FF00FF",
                "Magenta rose,#FF00AF",
                "Maroon,#800000",
                "Mauve,#E0B0FF",
                "Navy blue,#000080",
                "Ocher,#CC7722",
                "Olive,#808000",
                "Orange,#FF6600",
                "Orange-red,#FF4500",
                "Orchid,#DA70D6",
                "Peach,#FFE5B4",
                "Pear,#D1E231",
                "Periwinkle,#CCCCFF",
                "Persian blue,#1C39BB",
                "Pink,#FD6C9E",
                "Plum,#8E4585",
                "Prussian blue,#003153",
                "Puce,#CC8899",
                "Purple,#800080",
                "Raspberry,#E30B5C",
                "Red,#FF0000",
                "Red-violet,#C71585",
                "Rose,#FF007F",
                "Ruby,#E0115F",
                "Salmon,#FA8072",
                "Sangria,#92000A",
                "Sapphire,#0F52BA",
                "Scarlet,#FF2400",
                "Silver,#C0C0C0",
                "Slate gray,#708090",
                "Spring bud,#A7FC00",
                "Spring green,#00FF7F",
                "Tan,#D2B48C",
                "Taupe,#483C32",
                "Teal,#008080",
                "Turquoise,#40E0D0",
                "Ultramarine,#3F00FF",
                "Violet,#8F00FF",
                "Viridian,#40826D",
                "White,#FFFFFF",
                "Yellow,#FFFF00"
        };
        String result = null;
        for (int i=0; i<color.length; i++){
            String[] match = color[i].split(",");
           if (s.equalsIgnoreCase(match[0])){
               result=match[1];
           }
        }
        return result;
    }
}
