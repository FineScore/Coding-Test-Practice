import java.util.*;

class Solution {
    public int solution(int[] d, int budget) {
        int answer = 0;
        Arrays.sort(d);
        for (int e : d) {
            if (budget - e < 0) {
                break;
            }
            budget -= e;
            answer++;
            
        }
        return answer;
    }
}