class RandomizedSet {
public:
  vector<int>v;
  map<int,int>mpp;
    RandomizedSet() {
        
    }

    bool search(int val){
        if(mpp.find(val)!=mpp.end()){
            return true;
        }
        return false;
    }
    
    bool insert(int val) {
        if(search(val)){
            return false;
        }

        v.push_back(val);
        mpp[val]=v.size()-1;
        return true;

    }
    
    bool remove(int val) {
        if(search(val)){

          auto it=mpp[val];
          v[it]=v.back();
          mpp[v.back()]=it;
          v.pop_back();
          mpp.erase(val);
          
            return true; 
        }
        return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */