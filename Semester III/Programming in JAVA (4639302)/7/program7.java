import java.util.Scanner;
class program7{
public static void getMaxMin(int a, int b, int c){
        int max=a;
        int min=a;
        if(b>max){
            max=b;
        }
        if(c>max){
            max=c;
        }
        if(b<min){
            min=b;
        }
        if(c<min){
            min=c;
        }
        System.out.println("min="+min);
        System.out.println("max="+max);
    }
    public static void main(String[] args) {
        
        int [] numbers=new int[3];
        int n1,n2,n3;

          // create Scanner object
            Scanner input = new Scanner(System.in);

            // prompt user 
            System.out.print("Please enter 3 numbers: \n");
            // use for loop to obtain user input
            for (int i= 0; i < numbers.length; i++) {
                numbers[i] = input.nextInt();
            } // end obtaining input
            n1=numbers[0];
            n2=numbers[1];
            n3=numbers[2];
            getMaxMin(n1,n2,n3);

    }
}
