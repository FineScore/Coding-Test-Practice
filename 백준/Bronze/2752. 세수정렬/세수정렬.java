import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] input = br.readLine().split(" ");
        StringBuilder sb = new StringBuilder();
        int[] list = new int[input.length];

        for (int i = 0; i < input.length; i++) {
            list[i] = Integer.parseInt(input[i]);
        }

        Arrays.sort(list);

        for (int i = 0; i < list.length; i++) {
            sb.append(list[i]).append(" ");
        }

        bw.write(sb.toString().trim());
        bw.flush();
        bw.close();
    }
}
