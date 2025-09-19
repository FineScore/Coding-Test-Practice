import java.util.*;

class Solution {
    public int solution(String dartResult) {
        int[] phase = new int[3];
        int answer = 0;
        int idx = -1;
        int now = 0;
        String now_s = "";
        for (char c : dartResult.toCharArray()) {
            if (Character.isDigit(c)) {
                now_s += c - '0';
            } else {
                switch (c) {
                    case 'S':
                        now = Integer.parseInt(now_s);
                        idx++;
                        phase[idx] = now;
                        break;
                    case 'D':
                        now = Integer.parseInt(now_s);
                        idx++;
                        phase[idx] = now * now;
                        break;
                    case 'T':
                        now = Integer.parseInt(now_s);
                        idx++;
                        phase[idx] = now * now * now;
                        break;
                    case '*':
                        if (idx == 0) {
                            phase[idx] *= 2;
                        }
                        else {
                            phase[idx - 1] *= 2;
                            phase[idx] *= 2;
                        }
                        break;
                    default:
                        phase[idx] *= -1;
                }   
                now_s = "";
            }
        }
        for (int score : phase) {
            answer += score;
        }
        return answer;
    }
}