import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        int cnt = Integer.parseInt(br.readLine());
        int[] length = new int[cnt - 1];
        int[] price = new int[cnt];
        int lowcost = 0;

        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < cnt - 1; i++) {
            length[i] = Integer.parseInt(st.nextToken());
        }

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < cnt; i++) {
            price[i] = Integer.parseInt(st.nextToken());
        }

        // 3 2 3 2 1 1
        int t = 0;
        int min = 0;
        for (int i = 0; i < price.length - 1; i++) {
            if (price[i] >= price[i + 1]) {
                if (t == 0) {
                    lowcost += price[i] * length[i];
                } else {
                    t += length[i];
                    lowcost += min * t;
                }

                t = 0;
            } else {
                min = price[i];
                t += length[i];
            }

            if (i == price.length - 2) {
                lowcost += min * t;
            }
        }

        bw.write(String.valueOf(lowcost));
        bw.close();
    }
}