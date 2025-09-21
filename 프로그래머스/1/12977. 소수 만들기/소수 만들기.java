class Solution {
    public int solution(int[] nums) {
        int count = 0;
        
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                for (int k = j + 1; k < nums.length; k++) {
                    if (isSosu(nums[i] + nums[j] + nums[k])) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
    
    public boolean isSosu(int num) {
        if (num == 1 || num == 2) {
            return true;
        } else if (num % 2 == 0) {
            return false;
        } else {
            for (int i = 3; i <= Math.sqrt(num); i += 2) {
                if (num % i == 0) {
                    return false;
                }
            }
            return true;
        }
    }
}