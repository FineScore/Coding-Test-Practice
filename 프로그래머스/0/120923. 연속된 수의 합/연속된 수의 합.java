class Solution {
    public int[] solution(int num, int total) {
        int[] answer = new int[num];
        answer[num % 2 == 0 ? (num / 2) - 1 : num / 2] = total / num;
        
        for (int i = num % 2 == 0 ? (num / 2) - 2 : (num / 2) - 1; i >= 0; i--) {
            answer[i] = answer[i + 1] - 1;
        }
        
        for (int i = num % 2 == 0 ? (num / 2) : (num / 2) + 1; i < num; i++) {
            answer[i] = answer[i - 1] + 1;
        }
        
        return answer;
    }
}