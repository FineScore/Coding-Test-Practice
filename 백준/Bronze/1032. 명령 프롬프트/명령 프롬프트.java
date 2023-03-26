import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        String[] list = new String[n];
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < n; i++) {
            list[i] = br.readLine();
        }

        int len = list[0].length();

        for (int i = 0; i < len; i++) {
            boolean flag = true;
            char ch = list[0].charAt(i);

            for (int j = 1; j < n; j++) {
                if (list[j].charAt(i) != ch) {
                    flag = false;
                    break;
                }
            }

            if (!flag) {
                sb.append("?");
            } else {
                sb.append(ch);
            }
        }

        System.out.println(sb);
    }
}
