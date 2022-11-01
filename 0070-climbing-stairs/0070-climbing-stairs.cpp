class Solution {
public:
    int climbStairs(int n) {
        int ans=0,a=0,b=1;
        if(n==0) return 0;
        if(n==1) return 1;
       for(int i=2;i<=n;i++){
           ans= a + b;
           a = b;
           b = ans;
       } 
        return a + b;
    }
};

// 4
// 1111
// 22
// 211
// 121
// 112
// 5
// 11111
// 1112
// 122
// 2111
// 212
// 221
// 1121
// 6
// 111111
// 11112
// 1122
// 1212
// 1221
// 2121
// 222
// 2211
// 21111