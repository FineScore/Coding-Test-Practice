import java.util.*;

class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int first;
        int second;

            while(sc.hasNextInt()){
	        first = sc.nextInt();
	        second = sc.nextInt();
	        System.out.println(first + second);
            }
        sc.close();
    }
}