import java.io.*;
import java.util.*;

class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		ArrayList<Integer> numArr = new ArrayList<Integer>(3);
		for (int i = 0; i < 3; i++) {
			numArr.add(Integer.parseInt(br.readLine()));
		}

		String multiplyNum = Integer.toString(numArr.get(0) * numArr.get(1) * numArr.get(2));
		String[] multiplyNumArr = multiplyNum.split("");
		
		int zeroCount = 0;
		int oneCount = 0;
		int twoCount = 0;
		int threeCount = 0;
		int fourCount = 0;
		int fiveCount = 0;
		int sixCount = 0;
		int sevenCount = 0;
		int eightCount = 0;
		int nineCount = 0;
		for (int i = 0; i < multiplyNumArr.length; i++) {
			
			if (Integer.parseInt(multiplyNumArr[i]) == 0) {
				zeroCount = zeroCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 1) {
				oneCount = oneCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 2) {
				twoCount = twoCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 3) {
				threeCount = threeCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 4) {
				fourCount = fourCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 5) {
				fiveCount = fiveCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 6) {
				sixCount = sixCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 7) {
				sevenCount = sevenCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 8) {
				eightCount = eightCount + 1;
			} else if (Integer.parseInt(multiplyNumArr[i]) == 9) {
				nineCount = nineCount + 1;
			}
		}

		bw.write(zeroCount + "");
		bw.newLine();
		bw.write(oneCount + "");
		bw.newLine();
		bw.write(twoCount + "");
		bw.newLine();
		bw.write(threeCount + "");
		bw.newLine();
		bw.write(fourCount + "");
		bw.newLine();
		bw.write(fiveCount + "");
		bw.newLine();
		bw.write(sixCount + "");
		bw.newLine();
		bw.write(sevenCount + "");
		bw.newLine();
		bw.write(eightCount + "");
		bw.newLine();
		bw.write(nineCount + "");
		bw.flush();
		bw.close();
	}
}