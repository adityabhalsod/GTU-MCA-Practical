class program4{        
	public static void main(String args[]){         
		int i,fact=1;         
		int number=Integer.parseInt(args[0]);           

		for(i=1;i<=number;i++){               
			fact=fact*i;           
		}           

		System.out.println("Factorial of "+number+" is: "+fact);          
	}       
}   