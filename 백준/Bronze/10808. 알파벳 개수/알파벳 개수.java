import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String alphabet = "abcdefghijklmnopqrstuvwxyz";
        String input = sc.nextLine();
        int[] resultArr = new int[26];
        for (int i = 0; i < input.length(); i++) {
            resultArr[alphabet.indexOf(input.charAt(i))]++;
        }
        String result = "";
        for (int i = 0; i < resultArr.length; i++) {
            result += resultArr[i] + " ";
        }
        System.out.println(result);
        sc.close();
    }
}