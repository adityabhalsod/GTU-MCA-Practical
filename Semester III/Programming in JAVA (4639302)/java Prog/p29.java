public class p29 {
	public static void main(String[] args) {
		String targetString = "Java is fun to learn";
		String s1= "JAVA";
		String s2= "Java";
		String s3 = "  Hello Java  ";
		
		System.out.println("Char at index 2(third position): " + targetString.charAt(2));
		System.out.println("After Concat: "+ targetString.concat("welcome to java World"));
		
		System.out.println("Checking equals ignoring case: " +s2.equalsIgnoreCase(s1));
		System.out.println("Checking equals with case: " +s2.equals(s1));
		
		System.out.println("Checking Length: "+ targetString.length());
		
		System.out.println("Replace function: "+ targetString.replace("fun", "easy"));
		
		System.out.println("SubString of targetString: "+ targetString.substring(8));
		System.out.println("SubString of targetString: "+ targetString.substring(8, 12));
		
		System.out.println("Converting to lower case: "+ targetString.toLowerCase());
		System.out.println("Converting to upper case: "+ targetString.toUpperCase());
		
		System.out.println("Triming string: " + s3.trim());
		
		System.out.println("searching s1 in targetString: " + targetString.contains(s1));
		System.out.println("searching s2 in targetString: " + targetString.contains(s2));

		char [] charArray = s2.toCharArray();
		System.out.println("Size of char array: " + charArray.length);
		System.out.println("Printing last element of array: " + charArray[3]);

	}

}
