class Solution {
public:
    int MOD = 1000000007;
    int countPermutations(vector<int>& complexity) {
        long long ans  = 1;
        int n = complexity.size();
        if(n == 0) return 0;
        if(n == 1)return 1;
        for(int i=1;i<n;i++){
            if(complexity[i]<=complexity[0])
                return 0;
        }
        for(int i=1;i<n;i++){
            ans = (ans*i) % MOD;
        }
        return (int)ans;
    }
};