class Solution {
public:
    double helper(double x, int n){
        if(n == 0) return 1;
        double ans = helper(x,n/2);
        if(n%2 == 0){
            return ans*ans;
        }else{
            return ans*ans*x;
        }
    }
    double myPow(double x, int n) {
        long long num = n;
        if(num < 0){
            x = 1/x;
            num = -num;
        }
        return helper(x,n);
    }
};