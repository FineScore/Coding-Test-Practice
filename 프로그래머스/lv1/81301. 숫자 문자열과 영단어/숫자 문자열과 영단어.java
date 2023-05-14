class Solution {
    public int solution(String s) {
        StringBuilder sb = new StringBuilder();
        boolean isT = false;
        boolean isF = false;
        boolean isS = false;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isDigit(c)) {
                sb.append(c);
                continue;
            }
            
            if (isT == true) {
                if (c == 'w') {
                    sb.append('2');
                    i += 1;
                } else {
                    sb.append('3');
                    i += 3;
                }
                
                isT = false;
                continue;
            }
            
            if (isF == true) {
                if (c == 'o') {
                    sb.append('4');
                    i += 2;
                } else {
                    sb.append('5');
                    i += 2;
                }
                
                isF = false;
                continue;
            }
            
            if (isS == true) {
                if (c == 'i') {
                    sb.append('6');
                    i += 1;
                } else {
                    sb.append('7');
                    i += 3;
                }
                
                isS = false;
                continue;
            }
            
            if (c == 'o') {
                sb.append('1');
                i += 2;
            } else if (c == 't') {
                isT = true;
            } else if (c == 'f') {
                isF = true;
            } else if (c == 's') {
                isS = true;
            } else if (c == 'e') {
                sb.append('8');
                i += 4;
            } else if (c == 'n') {
                sb.append('9');
                i += 3;
            } else if (c == 'z') {
                sb.append('0');
                i += 3;
            }
            
        }
        
        
                
        return Integer.parseInt(sb.toString());
    }
}