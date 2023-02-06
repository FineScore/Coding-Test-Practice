import java.io.*;
import java.util.*;

class Main {
    public static int gcd(int a, int b) {
			if(a % b == 0) {
				return b;
			}
			return gcd(b, a % b);
	}
    
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		String input = br.readLine();
		String[] inputArrStr = input.split(" ");
		int[] inputArr = new int[inputArrStr.length];
		for(int i = 0; i < inputArrStr.length; i++) {
			inputArr[i] = Integer.parseInt(inputArrStr[i]);
		}
        
		int a = inputArr[0];
		int b = inputArr[1];
		int ans = gcd(a, b);
		
		bw.write(ans + "");
		bw.newLine();
		bw.write((a * b) / ans + "");
		bw.flush();
		bw.close();
    }
}
		
