import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] input = sc.nextLine().split(" ");
        int N = Integer.parseInt(input[0]);
        int X = Integer.parseInt(input[1]);
        String[] arr = sc.nextLine().split(" ");
        ArrayList<Integer> resultArr = new ArrayList<>();
        for (int i = 0; i < arr.length; i++) {
            int num = Integer.parseInt(arr[i]);
            if (num < X)
                resultArr.add(num);
        }
        String result = "";
        for (int i = 0; i < resultArr.size(); i++) {
            result += resultArr.get(i) + " ";
        }
        System.out.println(result);
        sc.close();
    }
}