package com.example.program56;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

import java.io.InputStream;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;

public class DisplayDetail extends AppCompatActivity {
TextView txt1,txt2,txt3;
String transfer = "";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_display_detail);

        //find id by game-id text view
        txt1=findViewById(R.id.idd);

        //find id by game-name text view
        txt2=findViewById(R.id.name);

        //find id by game-price text view
        txt3=findViewById(R.id.price);

        //get transfer value
        Bundle extra = getIntent().getExtras();
        if (extra != null) {
            transfer = extra.getString("transfer_txt");
        }


        try {
            InputStream is = getAssets().open("file.xml");

            DocumentBuilderFactory dbFactory = DocumentBuilderFactory.newInstance();
            DocumentBuilder dBuilder = dbFactory.newDocumentBuilder();
            Document doc = dBuilder.parse(is);

            Element element=doc.getDocumentElement();
            element.normalize();

            NodeList nList = doc.getElementsByTagName("Game");

            for (int i=0; i<nList.getLength(); i++) {
                Node node = nList.item(i);
                if (node.getNodeType() == Node.ELEMENT_NODE) {
                    Element element2 = (Element) node;
                    //print in list from xml
                    if (transfer.equalsIgnoreCase(getValue("Game-name", element2))){
                        txt1.setText(txt1.getText().toString()+" "+getValue("Game-id",element2));
                        txt2.setText(txt2.getText().toString()+" "+getValue("Game-name",element2));
                        txt3.setText(txt3.getText().toString()+" "+getValue("Game-price",element2));
                    }

                }
            }
        } catch (Exception e) {e.printStackTrace();}

    }
    private static String getValue(String tag, Element element) {
        NodeList nodeList = element.getElementsByTagName(tag).item(0).getChildNodes();
        Node node = nodeList.item(0);
        return node.getNodeValue();
    }



 }

