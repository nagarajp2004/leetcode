class Solution {
public:
    bool canConstruct(string ra, string ma) {
        
        unordered_map<char,int> mc;
        for( auto& i:ma){
            mc[i]++;
        }

        for(auto&i :ra){
            if(mc.find(i)!=mc.end()){
                  if(mc[i]<=0){
                    return false;
                  }
                  else{
                    mc[i]--;
                  }
            }else{
                return false;
            }
        }
        return true;
    }
};