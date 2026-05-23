class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a=0, b=0;
        for (auto i:nums){
            a^=i;
        }
        for (int i=0; i<=nums.size(); i++){
            b^=i;
        }
        return b^a;
    }
};
