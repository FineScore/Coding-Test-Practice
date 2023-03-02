import java.io.*;
import java.util.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int n = Integer.parseInt(br.readLine());
        ArrayDeque<Integer> q = new ArrayDeque<>();

        for (int i = 0; i < n; i++) {
            String operation = br.readLine();
            if (operation.contains("push")) {
                int pushNum = Integer.parseInt(operation.split(" ")[1]);

                q.add(pushNum);
                continue;
            }

            if (operation.equals("pop")) {
                if (q.isEmpty()) {
                    bw.write(-1 + "\n");
                } else {
                    bw.write(q.poll() + "\n");
                }
                continue;
            }

            if (operation.equals("size")) {
                bw.write(q.size() + "\n");
                continue;
            }

            if (operation.equals("empty")) {
                if (q.isEmpty()) {
                    bw.write(1 + "\n");
                } else {
                    bw.write(0 + "\n");
                }
                continue;
            }

            if (operation.equals("front")) {
                if (q.isEmpty()) {
                    bw.write(-1 + "\n");
                } else {
                    bw.write(q.peek() + "\n");
                }
                continue;
            }

            if (operation.equals("back")) {
                if (q.isEmpty()) {
                    bw.write(-1 + "\n");
                } else {
                    bw.write(q.getLast() + "\n");
                }
            }
        }

        bw.flush();
        bw.close();
    }
}