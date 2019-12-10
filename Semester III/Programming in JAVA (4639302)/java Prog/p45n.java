import java.lang.Comparable;

class p45_new
{
	public static void main(String[] args) 
	{
		Integer a[]={32,56,89,3,456,45};
		System.out.println("Integer Max: " + max(a));
       
		Double b[]={5.6,7.8,2.9,18.6,10.25,18.6001};
		System.out.println("Double Max: " + max(b));
        
		String str[]={"Strawberry", "Mango", "Apple", "Pomegranate", "Guava", "Blackberry", "Cherry", "Orange", "Date"};
		System.out.println("String Max: " + max(str));
		
        //System.out.println("Boolean Max: " + max(Boolean.TRUE, Boolean.FALSE));
        //System.out.println("Byte Max: " + max(Byte.MIN_VALUE, Byte.MAX_VALUE));
	
	}
	
   public static <T extends Comparable> T max(T t1[])
   {
		T m=t1[0];
		for (T element : t1)
		{
			if (element.compareTo(m) > 0)
			{
				m = element;
			}
		}
		return m;
	}
}