import java.util.*;

public final class p45_final {
	public static void main(String args[])
	{
		int [] a = {10,25,98,35,75,95,30,38,90,37,99,100,105,2,17};
		
		List<Integer> l=new ArrayList<Integer>(Arrays.asList(a));
		
		System.out.println("List : - " + l);
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the Beginning Value");
		int beg=sc.nextInt();
		
		System.out.println("Enter the End Value");
		int end=sc.nextInt();
		
		System.out.println("Maximum Element is : " + max(l,beg,end));
	}

	public static <T extends Object & Comparable<? super T>>
		T max(List<? extends T> list, int begin, int end) {

		T maxElem = list.get(begin);

		for (++begin; begin < end; ++begin)
			if (maxElem.compareTo(list.get(begin)) < 0)
				maxElem = list.get(begin);
		return maxElem;
	}
}