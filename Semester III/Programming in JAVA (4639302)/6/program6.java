class program6{

      static int getLargest(int a,int b,int c){
        int largeest = (a>b?(a>c?a:c):(b>c?b:c));
        return largeest;
    }

    public static void main(String[] args) {
    	int n1,n2,n3;

    	n1=Integer.parseInt(args[0]);
    	n2=Integer.parseInt(args[1]);
    	n3=Integer.parseInt(args[2]);

    	System.out.println("Maximum Number Of "+n1+" "+n2+" "+n3+" is : "+getLargest(n1,n2,n3));
    }
  }
