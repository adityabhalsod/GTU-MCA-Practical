package com.example.program11;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

import com.fathzer.soft.javaluator.DoubleEvaluator;

public class MainActivity extends AppCompatActivity {
    EditText before,after,exp;
    private String text="";
    private int count=0;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        before=findViewById(R.id.editBefore);
        after=findViewById(R.id.editAfter);
        exp=findViewById(R.id.expression);
        before.setText("0");
    }
    public void onClick(View v)
    {
        switch(v.getId())
        {
            //clear
            case R.id.clear:
                after.setText("");
                before.setText("");
                exp.setText("");
                count=0;
                break;
             //backspace
            case R.id.backspace:
                text=before.getText().toString();
                if(text.length()>0)
                {
                    if(text.endsWith("."))
                    {
                        count=0;
                    }
                    String newText=text.substring(0,text.length()-1);
                    //to delete the data contained in the brackets at once
                    if(text.endsWith(")"))
                    {
                        char []a=text.toCharArray();
                        int pos=a.length-2;
                        int counter=1;
                        //to find the opening bracket position
                        for(int i=a.length-2;i>=0;i--)
                        {
                            if(a[i]=='.')
                            {
                                count=0;
                            }
                            //if opening bracket pair for the last bracket is found
                            if(counter==0)
                            {
                                pos=i;
                                break;
                            }
                        }
                        newText=text.substring(0,pos);
                    }
                    //if e2 edit text contains only - sign or sqrt at last then clear the edit text e2
                    if(newText.equals("-")||newText.endsWith("sqrt"))
                    {
                        newText="";
                    }
                    //if pow sign is left at the last
                    else if(newText.endsWith("^"))
                        newText=newText.substring(0,newText.length()-1);

                    before.setText(newText);
                }
                break;
            //dot
            case R.id.dot:
                if(count==0 && before.length()!=0)
                {
                    if (before.getText().toString().equals("0")){
                        before.setText(before.getText()+".");
                        count++;
                    }else {
                        before.setText(before.getText()+".");
                        count++;
                    }
                }
                break;

            //all opertion
            case R.id.sum:
                if (after.getText().toString().equals("")){
                    operationClicked("+");
                    count=0;
                }else {
                    after.setText(equal(before.getText().toString(),after.getText().toString(),exp.getText().toString()));
                    exp.setText("+");
                    before.setText("0");
                    count=0;
                }
                break;
            case R.id.min:
                if (after.getText().toString().equals("")){
                    operationClicked("-");
                    count=0;
                }else {
                    after.setText(equal(before.getText().toString(),after.getText().toString(),exp.getText().toString()));
                    exp.setText("-");
                    before.setText("0");
                    count=0;
                }
                break;
            case R.id.div:
                if (after.getText().toString().equals("")){
                    operationClicked("÷");
                    count=0;
                }else {
                    after.setText(equal(before.getText().toString(),after.getText().toString(),exp.getText().toString()));
                    exp.setText("÷");
                    before.setText("0");
                    count=0;
                }
                break;
            case R.id.mul:
                if (after.getText().toString().equals("")){
                    operationClicked("x");
                    count=0;
                }else {
                    after.setText(equal(before.getText().toString(),after.getText().toString(),exp.getText().toString()));
                    exp.setText("x");
                    before.setText("0");
                    count=0;
                }
                break;

            //all number
            case R.id.one:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"1");
                }else{
                    before.setText(before.getText()+"1");
                }
                break;
            case R.id.two:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"2");
                }else{
                    before.setText(before.getText()+"2");
                }
                break;
            case R.id.three:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"3");
                }else{
                    before.setText(before.getText()+"3");
                }
                break;
            case R.id.four:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"4");
                }else{
                    before.setText(before.getText()+"4");
                }
                break;
            case R.id.five:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"5");
                }else{
                    before.setText(before.getText()+"5");
                }
                break;
            case R.id.six:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"6");
                }else{
                    before.setText(before.getText()+"6");
                }
                break;
            case R.id.seven:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"7");
                }else{
                    before.setText(before.getText()+"7");
                }
                break;
            case R.id.eight:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"8");
                }else{
                    before.setText(before.getText()+"8");
                }
                break;
            case R.id.nine:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"9");
                }else{
                    before.setText(before.getText()+"9");
                }
                break;
            case R.id.zero:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"0");
                }else{
                    before.setText(before.getText()+"0");
                }
                break;
            case R.id.twozero:
                if (before.getText().toString().equals("0")){
                    before.setText("");
                    before.setText(before.getText()+"0");
                }else{
                    before.setText(before.getText()+"00");
                }
                break;
            case R.id.equl:
                try{
                    if(after.length()!=0)
                    {
                        String ans1 = equal(before.getText().toString(),after.getText().toString(),exp.getText().toString());
                        String ans;

                        if (Double.parseDouble(ans1) % 1==0){
                            ans=ans1.substring(0, ans1.length() - 2);
                        }else{
                            ans=ans1;
                        }

                        before.setText(ans);
                    }
                    after.setText("");
                    exp.setText("");
                }catch (Exception ex){
                    Toast.makeText(getApplicationContext(),ex.toString(),Toast.LENGTH_SHORT).show();
                }
                break;
        }
    }
    //all operation method
    private void operationClicked(String op)
    {
        if(before.length()!=0)
        {
            String text=before.getText().toString();
            after.setText(text);
            exp.setText(op);
            before.setText("0");
        }
        else
        {
            String text=after.getText().toString();
            if(text.length()>0)
            {
                String newText=text.substring(0,text.length()-1);
                after.setText(newText);
            }
        }
    }
    public String equal(String before,String after,String exp) {
        String ans = "";

        if (Double.parseDouble(before)==Math.round(Double.parseDouble(before))||(Double.parseDouble(after)==Math.round(Double.parseDouble(after)))){
            try{
                if (exp.equals("+")){
                    ans=(String.valueOf(Double.parseDouble(after)+Double.parseDouble(before)));
                }else if (exp.equals("-")){
                    ans=(String.valueOf(Double.parseDouble(after)-Double.parseDouble(before)));
                }else if (exp.equals("x")){
                    ans=(String.valueOf(Double.parseDouble(after)*Double.parseDouble(before)));
                }else if (exp.equals("÷")){
                    ans=(String.valueOf(Double.parseDouble(after)/Double.parseDouble(before)));
                }
            }catch (Exception ex){
                Toast.makeText(getApplicationContext(),"Out of memory......",Toast.LENGTH_SHORT).show();
            }
        }else {
            try{
                if (exp.equals("+")){
                    ans=(String.valueOf(Double.parseDouble(after)+Double.parseDouble(before)));
                }else if (exp.equals("-")){
                    ans=(String.valueOf(Double.parseDouble(after)-Double.parseDouble(before)));
                }else if (exp.equals("x")){
                    ans=(String.valueOf(Double.parseDouble(after)*Double.parseDouble(before)));
                }else if (exp.equals("÷")){
                    ans=(String.valueOf(Double.parseDouble(after)/Double.parseDouble(before)));
                }
            }catch (Exception ex){
                Toast.makeText(getApplicationContext(),"Out of memory......",Toast.LENGTH_SHORT).show();
            }
        }
         return ans;
    }
}
