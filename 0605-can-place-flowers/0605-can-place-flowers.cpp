class Solution {
public:
    bool canPlaceFlowers(vector<int>& fl, int n) {
    
        for(int i=0;i<fl.size();i++){
            bool left = i==0 || fl[i-1]==0;
            bool right= i==fl.size()-1 || fl[i+1]==0;

            if(left && right && fl[i]==0){
               fl[i]=1;
                n--;
            }
        }
        if(n<=0){
            return true;
        }

        return false;
    }
};