public class p45_ffinal {
    public static void main(String[] args) {
        Integer[] numbers = {1, 2, 3}; //Creates array of integers
        System.out.println(max(numbers));
        String[] words = {"red", "green", "blue"}; //Creates an array of strings
        System.out.println(max(words));
        Circle[] circles = {new Circle(3), new Circle(2.9), new Circle(5.9)}; //creates an array of circles
        System.out.println(max(circles));
    }
    static class Circle implements Comparable<Circle> { //Circle object implements Comparable to compare with Circle
        double radius;
        public Circle (double radius){
            this.radius = radius; //sets value of radius from main method for radius
            }
        @Override
        public int compareTo(Circle c) {
            if (radius < c.radius)
                return -1;
            else if (radius == c.radius)
                return 0;
            else
                return 1;
        }
        @Override
        public String toString() {
            return "Circle radius: " + radius;
        }
        }
    public static <E extends Comparable<E>> E max(E[] list) {
        E max = list[0]; //sets the first value in the array as the current maximum
        for (int i = 1; i < list.length; i++) {
            if (list[i].compareTo(max) > 0) {
                max = list[i];
            }
        }
        return max;
    }
}