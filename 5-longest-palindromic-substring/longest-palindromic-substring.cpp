class Solution {
public:
bool checkPal(string &s, int low, int high) {
    while (low < high) {
        if (s[low] != s[high])
            return false;
        low++;
        high--;
    }
    return true;
}
    string longestPalindrome(string s) {
        int start = 0;
        int maxlen = 1;
        int n = s.length();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(checkPal(s,i,j) && (j-i+1) > maxlen){
                    start = i;
                    maxlen = j-i+1;
                }
            }
        }
        return s.substr(start,maxlen);
    }
};