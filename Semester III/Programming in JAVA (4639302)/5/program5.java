class program5{  
      public static void main(String[] args)  {  
        int c=0,a,temp;  
        int n=Integer.parseInt(args[0]);  
        temp=n;  
        while(n>0)  
        {  
        a=n%10;  
        n=n/10;  
        c=c+(a*a*a);  
        }  
        if(temp==c)  
        System.out.println(temp+" is armstrong number");   
        else  
            System.out.println(temp+" is Not armstrong number");   
       }  
}  
