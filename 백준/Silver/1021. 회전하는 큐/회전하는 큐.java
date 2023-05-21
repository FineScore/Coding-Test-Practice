import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[] index = new int[m];

        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < m; i++) {
            index[i] = Integer.parseInt(st.nextToken());
        }

        ArrayList<Integer> dq = new ArrayList<>();
        for (int i = 1; i <= n; i++) {
            dq.add(i);
        }

        int min = 0;

        for (int i = 0; i < m; i++) {
            int peek = dq.indexOf(index[i]);
            while (dq.get(0) != index[i]) {
                if (peek <= dq.size() / 2) { // 뽑으려는 인덱스가 맨 앞 인덱스 숫자보다 클 경우
                    dq.add(dq.size(), dq.get(0)); // 오른쪽 이동
                    dq.remove(0);
                } else {
                    dq.add(0, dq.get(dq.size() - 1)); // 왼쪽 이동
                    dq.remove(dq.size() - 1);
                }
                min += 1;

            }
            dq.remove(0);
        }

        System.out.println(min);
    }
}