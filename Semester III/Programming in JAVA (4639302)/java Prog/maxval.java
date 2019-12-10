public class maxval
{
	public static void main(String args[])
	{
	int[] numbers=new int[]{1,2,3,4,5,6};
 	int maxValue = numbers[0];
  	for(int i=1;i < numbers.length;i++)
	{
    		if(numbers[i] > maxValue)
		{
	  	maxValue = numbers[i];
		}
	}
	System.out.println("max number is"+maxValue);
	}
}