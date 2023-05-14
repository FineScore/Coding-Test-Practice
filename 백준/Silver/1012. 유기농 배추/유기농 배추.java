import java.util.*;
import java.io.*;

class Main {
	public static int t, m, n, k;
	public static ArrayList<ArrayList<Integer>> testCaseArr;
	public static ArrayList<int[][]> graphArr;
	public static int[][] graph;
	public static int count = 0;
	
	public static boolean dfs(int i, int x, int y) {
		if(x < 0 || x >= m || y < 0 || y >= n) return false;
		
		if(graphArr.get(i)[x][y] == 1) {
			graphArr.get(i)[x][y] = 0;
			
			dfs(i, x - 1, y);
			dfs(i, x, y - 1);
			dfs(i, x + 1, y);
			dfs(i, x, y + 1);
			return true;
		}
		
		return false;
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		t = Integer.parseInt(br.readLine());
		testCaseArr = new ArrayList<>();
		graphArr = new ArrayList<>();
		
		for(int i = 0; i < t; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine(), " ");
			m = Integer.parseInt(st.nextToken());
			n = Integer.parseInt(st.nextToken());
			k = Integer.parseInt(st.nextToken());
			testCaseArr.add(new ArrayList<>(Arrays.asList(m, n, k)));
			graph = new int[50][50];
			
			for(int j = 0; j < testCaseArr.get(i).get(2); j++) {
				StringTokenizer stn = new StringTokenizer(br.readLine(), " ");
			
				int kx = Integer.parseInt(stn.nextToken());
				int ky = Integer.parseInt(stn.nextToken());
				
				graph[kx][ky] = 1;
			}
			
			graphArr.add(graph);
		}
		
		for(int i = 0; i < t; i++) {
			for(int j = 0; j < testCaseArr.get(i).get(0); j++) {
				for(int l = 0; l < testCaseArr.get(i).get(1); l++) {
					if(dfs(i, j, l)) count++;
				}
			}
			
			bw.write(count + "");
			bw.newLine();
			count = 0;
		}
		
		bw.flush();
		bw.close();
	}
}