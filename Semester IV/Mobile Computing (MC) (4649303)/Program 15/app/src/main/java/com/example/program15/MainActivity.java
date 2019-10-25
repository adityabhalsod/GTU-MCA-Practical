package com.example.program15;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.AutoCompleteTextView;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    Button btn;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        String[] color = new String[] {
                "Amaranth",
                "Amber",
                "Amethyst",
                "Apricot",
                "Aquamarine",
                "Azure",
                "Baby blue",
                "Beige",
                "Black",
                "Blue",
                "Blue-green",
                "Blue-violet",
                "Blush",
                "Bronze",
                "Brown",
                "Burgundy",
                "Byzantium",
                "Carmine",
                "Cerise",
                "Cerulean",
                "Champagne",
                "Chartreuse green",
                "Chocolate",
                "Cobalt blue",
                "Coffee",
                "Copper",
                "Coral",
                "Crimson",
                "Cyan",
                "Desert sand",
                "Electric blue",
                "Emerald",
                "Erin",
                "Gold",
                "Gray",
                "Green",
                "Harlequin",
                "Indigo",
                "Ivory",
                "Jade",
                "Jungle green",
                "Lavender",
                "Lemon",
                "Lilac",
                "Lime",
                "Magenta",
                "Magenta rose",
                "Maroon",
                "Mauve",
                "Navy blue",
                "Ocher",
                "Olive",
                "Orange",
                "Orange-red",
                "Orchid",
                "Peach",
                "Pear",
                "Periwinkle",
                "Persian blue",
                "Pink",
                "Plum",
                "Prussian blue",
                "Puce",
                "Purple",
                "Raspberry",
                "Red",
                "Red-violet",
                "Rose",
                "Ruby",
                "Salmon",
                "Sangria",
                "Sapphire",
                "Scarlet",
                "Silver",
                "Slate gray",
                "Spring bud",
                "Spring green",
                "Tan",
                "Taupe",
                "Teal",
                "Turquoise",
                "Ultramarine",
                "Violet",
                "Viridian",
                "White",
                "Yellow"
        };

        //Creating the instance of ArrayAdapter containing list of fruit names
        ArrayAdapter<String> adapter = new ArrayAdapter<>(this, android.R.layout.select_dialog_item, color);
        final AutoCompleteTextView txt1 = findViewById(R.id.txt1);
        final AutoCompleteTextView txt2 = findViewById(R.id.txt2);
        txt1.setThreshold(1);
        txt1.setAdapter(adapter);
        txt2.setThreshold(2);
        txt2.setAdapter(adapter);

        btn=findViewById(R.id.btn);

        btn.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent i =new Intent(getApplicationContext(),NextActivity.class);
                if ( !txt1.getText().toString().equals("") && !txt2.getText().toString().equals("")){
                    i.putExtra("background",txt1.getText().toString());
                    i.putExtra("foreground",txt2.getText().toString());
                }
                startActivity(i);
            }
        });


    }
}
