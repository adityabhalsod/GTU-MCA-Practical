package com.example.program17;

public class Contact {
    int _id;
    String _name;
    String _short_name;
    public Contact(){   }
    public Contact(int id, String name, String short_name){
        this._id = id;
        this._name = name;
        this._short_name = short_name;
    }

    public Contact(String name, String short_name){
        this._name = name;
        this._short_name = short_name;
    }
    public int getID(){
        return this._id;
    }

    public void setID(int id){
        this._id = id;
    }

    public String getName(){
        return this._name;
    }

    public void setName(String name){
        this._name = name;
    }

    public String getShortname(){
        return this._short_name;
    }

    public void setShortname(String shortname){
        this._short_name = shortname;
    }
}