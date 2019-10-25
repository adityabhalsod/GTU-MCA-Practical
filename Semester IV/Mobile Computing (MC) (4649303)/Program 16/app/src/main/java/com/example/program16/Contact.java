package com.example.program16;

public class Contact {
    int _id;
    String _username;
    String _password;
    public Contact(){   }
    public Contact(int id, String username, String password){
        this._id = id;
        this._username = username;
        this._password = password;
    }

    public Contact(String username, String password){
        this._username = username;
        this._password = password;
    }
    public int getID(){
        return this._id;
    }

    public void setID(int id){
        this._id = id;
    }

    public String getUsername(){
        return this._username;
    }

    public void setUsername(String username){
        this._username = username;
    }

    public String getPassword(){
        return this._password;
    }

    public void setPassword(String password){
        this._password = password;
    }
}