import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] rope = new int[n];

        for (int i = 0; i < n; i++) {
            rope[i] = Integer.parseInt(br.readLine());
        }

        Arrays.sort(rope);
        int temp = rope[0];
        int max = rope[0] * n;

        for (int i = 0; i < n; i++) {
            if (temp != rope[i]) {
                temp = rope[i];
                max = Math.max(max, temp * (n - i));
            }
        }

        System.out.println(max + "");
    }
}