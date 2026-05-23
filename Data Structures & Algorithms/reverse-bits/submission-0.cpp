class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int rev=0;
        for (int i=0; i<32; i++){
            int lastdig=n&1; rev=rev<<1;
            if (lastdig){
                rev=rev^1;
            }
            n=n>>1;   
        }
        return rev;  
    }
};
