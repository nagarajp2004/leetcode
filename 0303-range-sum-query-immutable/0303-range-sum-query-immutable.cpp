class NumArray {
public:
    vector<int>pre;
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int i : nums){
            sum+=i;
            pre.push_back(sum);
        }

    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return pre[right];
        }
        else {
            return pre[right]-pre[left-1];
        }
        return -1;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */