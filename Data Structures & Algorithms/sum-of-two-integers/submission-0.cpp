class Solution {
public:
    int getSum(int a, int b) {
        int x=0, y=0;
        while(a&b){
            x=a^b;  y=(a&b)<<1;
            a=x; 
            b=y;
        }
        return a^b;
    }
};
