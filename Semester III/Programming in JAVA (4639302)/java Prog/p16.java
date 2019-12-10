class p16
{
	public static void main(String args[])
	{
		//Converting int primitive into Integer object  
		int num=100;  
		Integer obj=Integer.valueOf(num);  
		System.out.println(num+ " "+ obj);  
		
		double num1=100.00;  
		Double obj2=Double.valueOf(num1);  
		System.out.println(num1+ " "+ obj2);
		
		float num3=10;  
		Float obj3=Float.valueOf(num3);  
		System.out.println(num3+ " "+ obj3);
		
		String str="Hello";  
		String obj7=String.valueOf(str);  
		System.out.println(str+ " "+ obj7);
		
		//2. Converting the wrapper object to primitive
		//1. Creating Wrapper class object
		Integer obj4 = new Integer(100);  //1
		int num7 = obj4.intValue();    //2
		System.out.println(num7+ " "+ obj4);  
		
		
		Double obj1 = new Double(100.00);  
		double num4 = obj1.doubleValue();
		System.out.println(num4+ " "+ obj1); 
		
		Float obj5 = new Float(100.00);  
		float num5 = obj4.floatValue();
		System.out.println(num5+ " "+ obj5); 
	}
}