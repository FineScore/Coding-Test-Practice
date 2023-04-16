import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		int n = Integer.parseInt(br.readLine());
		Set<String> set = new HashSet<String>();
		for (int i = 0; i < n; i++) {
			set.add(br.readLine());
		}

		Iterator<String> it = set.iterator();
		String[][] arr = new String[set.size()][2];

		for (int i = 0; i < set.size(); i++) {
			if (it.hasNext()) {
				arr[i][0] = it.next();
			}
			arr[i][1] = Integer.toString(arr[i][0].length());
		}

		Arrays.sort(arr, new Comparator<String[]>() {

			@Override
			public int compare(String[] p1, String[] p2) {
				if (p1[1].equals(p2[1])) {
					return p1[0].compareTo(p2[0]);
				} else {
					return p1[0].length() - p2[0].length();
				}
			}
		});

		for (int i = 0; i < set.size(); i++) {
			bw.write(arr[i][0]);
			bw.newLine();
		}
		

		bw.flush();
		bw.close();
	}
}