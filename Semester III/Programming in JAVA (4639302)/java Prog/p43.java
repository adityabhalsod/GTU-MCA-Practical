import java.util.*;
class p43
{
    public static void main(String[] args) 
	{
        Collection<Integer> ci = Arrays.asList(2,3,5,7,19,11);
        int count = Algorithm.countIf(ci, new OddPredicate());
		int count1 = Algorithm.countIf(ci, new PrimeNumber());
		int count2 = Algorithm.countIf(ci, new Palindromes());
        System.out.println("Number of odd integers = " + count);
		System.out.println("Number of Prime integers = " + count1);
		System.out.println("Number of Palindromes integers = " + count2);
    }
}
final class Algorithm
{
    public static <T> int countIf(Collection<T> c, UnaryPredicate<T> p) 
	{

        int count = 0;
        for (T elem : c)
		{
            if (p.test(elem))
			{
                ++count;
			}
		}
        return count;
    }
}

interface UnaryPredicate<T> 
{
    public boolean test(T obj);
}

class OddPredicate implements UnaryPredicate<Integer>
{
    public boolean test(Integer i) 
	{
		return i % 2 != 0; 
	}
}

class PrimeNumber implements UnaryPredicate<Integer>
{
    public boolean test(Integer no) 
	{ 
		boolean value=false;
		int flag=0;
		int m=no/2;    
		for(int i=2;i<=m;i++)    
		{    
			if(no%i==0)    
			{        
				flag=1;    
				break;    
			} 
		}  
		if(flag==0)
		{
			value=true;  
		}
		return value;
	}
}

class Palindromes implements UnaryPredicate<Integer>
{
    public boolean test(Integer no) 
	{ 
		boolean value=false;
		int m = no;
		int x,a=0;
        while(no > 0)
        {
            x = no % 10;
            a = a * 10 + x;
            no = no / 10;
        }
        if(a == m)
        {
            value=true;
        }	
		return value;
	}
}

