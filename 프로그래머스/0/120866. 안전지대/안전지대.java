import java.util.*;

class Solution {
    public int solution(int[][] board) {
        int[] dx = {-1, 1, 0, 0, -1, 1, -1, 1};
        int[] dy = {0, 0, -1, 1, -1, -1, 1, 1};
        
        int answer = 0;
        
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if (board[i][j] == 1) {
                    for (int k = 0; k < 8; k++) {
                        if (i + dx[k] < 0 || i + dx[k] > board.length - 1 || j + dy[k] < 0 || j + dy[k] > board[i].length - 1) {
                            continue;
                        }
                        if (board[i + dx[k]][j + dy[k]] == 1) {
                            continue;
                        }
                        board[i + dx[k]][j + dy[k]] = -1;
                    }
                }
            }
        }
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if (board[i][j] == 0) answer++;
            }
        }
        return answer;
    }
}