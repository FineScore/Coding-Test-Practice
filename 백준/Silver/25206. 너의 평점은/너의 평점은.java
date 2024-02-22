import java.io.*;

class Main {
    public static double changeScore(String grade) {
        switch (grade) {
            case "A+":
                return 4.5;
            case "A0":
                return 4.0;
            case "B+":
                return 3.5;
            case "B0":
                return 3.0;
            case "C+":
                return 2.5;
            case "C0":
                return 2.0;
            case "D+":
                return 1.5;
            case "D0":
                return 1.0;
            default:
                return 0.0;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        double allP = 0.0; // 학점 * 과목평점 합
        double allH = 0.0; // 학점 합

        for (int i = 0; i < 20; i++) {
            String[] s = br.readLine().split(" ");
            if (s[2].equals("P")) continue;
            double inH = Double.parseDouble(s[1]);
            double inG = changeScore(s[2]);
            allH += inH;
            allP += inH * inG;
        }

        bw.write(String.format("%.6f",allP / allH));
        bw.flush();
        bw.close();
    }
}
	