import java.io.*;
import java.util.*;

class Test {
	int d(int a) {
		String eachNum = Integer.toString(a);
		String[] eachNumArr = eachNum.split("");
		int ans = a;
		for (int i = 0; i < eachNumArr.length; i++) {
			ans += Integer.parseInt(eachNumArr[i]);
		}
		return ans;
	}
}

class Main {
	public static void main(String[] args) throws IOException {
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		Test t = new Test();
		ArrayList<Integer> num = new ArrayList<Integer>(10000);
		for (int i = 0; i < 10000; i++) {
			num.add(i + 1);

		}

		int index = 0;

		for (int i = 0; i < 10000; i++) {
			if (num.contains(t.d(i)) == true) {
				index = num.indexOf(t.d(i));
				num.remove(index);
			}
		}

		for (int i = 0; i < num.size(); i++) {
			bw.write(num.get(i) + "");
			bw.newLine();
		}

		bw.flush();
		bw.close();
	}
}