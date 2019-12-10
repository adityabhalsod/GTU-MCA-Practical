import java.util.Scanner;

public class program11{
	public static void main(String[] args) {
			String test = "hi,this is Aditya.";
			count(test);
	}
	
	public static void count(String x){
		char[] ch = x.toCharArray();
		int letter = 0;
		int digit = 0;
		int other = 0;
		for(int i = 0; i < x.length(); i++){
			if(Character.isLetter(ch[i])){
				letter ++ ;
			}
			else if(Character.isDigit(ch[i])){
				digit ++ ;
			}
			else{
				other ++;
			}
		}

		System.out.println("String To Test :\n"+x);
		System.out.println("letter: " + letter);
		System.out.println("number: " + digit);
		System.out.println("other: " + other);
	}
}


