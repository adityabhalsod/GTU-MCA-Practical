class program2
{  
	static void checkPrime(int n)
	{   
	//find prime number   
		int k,m=0,flag=0;         
		
		m=n/2;         

		if(n==0||n==1){     
			System.out.println(n+" is not prime number");         
		}else{     
			for(k=2;k<=m;k++){         
				if(n%k==0){         
					System.out.println(n+" is not prime number");         
					flag=1;         
					break;         
				}        
			}         
			if(flag==0)  
			{ 
				System.out.println(n+" is prime number"); 
			}     
		}//end of else    

	}      
		public static void main(String[] args){      
			int t1=0,t2,l,s,e;         
			s=Integer.parseInt(args[0]);         
			e=Integer.parseInt(args[1]);         
			t2=s;         
			
			System.out.println("starting limit is : "+s);        
			System.out.println("ending limit is : "+e); 

			for (int i=s; i <=e; ++i)//this for print fibonacci series         
			{             
				System.out.print(t1 + " + ");             
				int sum = t1 + t2;             
				t1 = t2;            
				t2 = sum;         
			}         
			System.out.println("\n");         

				for(l=s;l<=e;l++)         
				{       
					checkPrime(l);             
				} 
		}     

}    
 