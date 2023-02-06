import java.util.*;
import java.io.*;

class Main {
	public static int avg(int[] arr) {
		int sum = 0;
		
		for(int n : arr) {
			sum += n;
		}
		
		return (int) Math.round((double)sum / arr.length);
	}
	
	
	public static int median(int[] arr) {
		Arrays.sort(arr);
		
		return arr[arr.length / 2];
	}
	
	public static int mode(int[] arr) {
		Arrays.sort(arr);
		Map<Integer, Integer> map = new HashMap<>();
		
		for(int n : arr) {
			map.put(n, map.getOrDefault(n, 0) + 1);
		}
		
		int max = 0;
		List<Integer> maxNum = new ArrayList<>();
		
		for(int n : map.keySet()) {
			max = Math.max(max, map.get(n));
		}
		
		for(int n : map.keySet()) {
			if(map.get(n) == max) {
				maxNum.add(n);
			}
		}
		
		Collections.sort(maxNum);
		
		if(maxNum.size() > 1) {
			return maxNum.get(1);
		} else {
			return maxNum.get(0);
		}
	}
	
	public static int range(int[] arr) {
		Arrays.sort(arr);
		
		return arr[arr.length - 1] - arr[0];
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int n = Integer.parseInt(br.readLine());
		int[] arr = new int[n];
		
		for(int i = 0; i < n; i++) {
			arr[i] = Integer.parseInt(br.readLine());
		}
		
		bw.write(avg(arr) + "");
		bw.newLine();
		bw.write(median(arr) + "");
		bw.newLine();
		bw.write(mode(arr) + "");
		bw.newLine();
		bw.write(range(arr) + "");
		
		bw.flush();
		bw.close();
	}
}