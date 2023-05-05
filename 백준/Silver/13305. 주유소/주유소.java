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

        lowcost += length[0] * price[0];
        int minPrice = price[1];

        if (price.length > 2) {
            for (int i = 2; i < price.length - 1; i++) {
                minPrice = Math.min(minPrice, price[i]);
            }
        }

        for (int i = 1; i < price.length - 1; i++) {
            if (price[i] != minPrice){
                lowcost += length[i] * price[i];
            } else {
                int rest = 0;

                for (int j = i; j < length.length; j++) {
                    rest += length[j];
                }

                lowcost += price[i] * rest;

                break;
            }
        }

        bw.write(lowcost + "");
        bw.close();
    }
}