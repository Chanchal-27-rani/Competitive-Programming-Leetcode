class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2,i,temp;
        if(n==1||n==2) return n;
        for(i=3;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
        }
        return temp;
    }
};
