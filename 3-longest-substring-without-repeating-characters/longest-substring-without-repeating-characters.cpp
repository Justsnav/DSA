class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256,-1);
        int left=0,maxlen=0;
        for(int right=0;right<s.size();right++){
            char currentchar = s[right];
    
            if(lastIndex[currentchar]>=left){
              left= lastIndex[currentchar]+1;
            }
            lastIndex[currentchar]=right;
            maxlen = max(maxlen,right-left+1);
        }
        return maxlen;
    }
};