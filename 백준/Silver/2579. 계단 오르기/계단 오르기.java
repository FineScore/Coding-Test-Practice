import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int[] stairs = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            stairs[i] = Integer.parseInt(br.readLine());
        }

        int[] c = new int[n + 1];

        c[1] = stairs[1];

        if (n >= 2) {
            c[2] = stairs[1] + stairs[2];
        }

        for (int i = 3; i <= n; i++) {
            c[i] = Math.max(c[i - 2], c[i - 3] + stairs[i - 1]) + stairs[i];
        }

        System.out.println(c[n]);

    }
}
