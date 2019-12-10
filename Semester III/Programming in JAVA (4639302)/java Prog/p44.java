//our prog use
import java.util.Arrays;

//not use
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;


public class p44 {	
	public static void main(String...args)
	{
		test();
	}
	
	private static void test() 
	{
	  String [] a = {"Hello", "Goodbye"};
	  swap(a, 0, 1);
	  System.out.println("a:"+Arrays.toString(a));
	  
	  //List Swap (Not in Our Program)
	  /*List<String> l = new ArrayList<String>(Arrays.asList(a));
	  swap(l, 0, 1);
	  System.out.println("l:"+l);*/
	}
	
	//Array Swap
	public static final <T> void swap (T[] a, int i, int j) 
	{
	  T t = a[i];
	  a[i] = a[j];
	  a[j] = t;
	}

	//List Swap
	/*public static final <T> void swap (List<T> l, int i, int j) 
	{
	  Collections.<T>swap(l, i, j);
	}*/

	
}