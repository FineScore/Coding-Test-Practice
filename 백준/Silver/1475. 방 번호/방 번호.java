import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.OptionalInt;
import java.util.Stack;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String n = br.readLine();
        int[] arr = new int[10];

        for (int i = 0; i < n.length(); i++) {
            if (n.charAt(i) == '6') {
                if (arr[6] > arr[9]) {
                    arr[9]++;
                } else {
                    arr[6]++;
                }
            } else if (n.charAt(i) == '9') {
                if (arr[6] < arr[9]) {
                    arr[6]++;
                } else {
                    arr[9]++;
                }
            } else {
                arr[Integer.parseInt(String.valueOf(n.charAt(i)))]++;
            }
        }
        
        OptionalInt max = Arrays.stream(arr).max();
        System.out.println(max.getAsInt());
    }
}
