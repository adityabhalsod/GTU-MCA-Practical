import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
 
public class p45 {
 
    public static void main(String a[]){
        List<Integer> li = new ArrayList<Integer>();
		//Integer d[]=new Integer[10];
		//Integer[] li; //Creates array of integers
        
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Number of Elements");
		int n=sc.nextInt();
		
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter " + (i+1) + " Element");
			int no=sc.nextInt();
			li.add(no);
			//d[i]=no;
		}
		
		//System.out.println("Maximum element from the list: " + max(d));
        System.out.println("Maximum element from the list: " + Collections.max(li));
    }
}