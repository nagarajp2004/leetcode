class Solution {
    public int minBitFlips(int s, int g) {
        int val=s^g;
        int count=0;
        while(val!=0){
            if((val & 1)==1){
               count++;
            }
            val=val>>1;
        }
        return count;
    }
}