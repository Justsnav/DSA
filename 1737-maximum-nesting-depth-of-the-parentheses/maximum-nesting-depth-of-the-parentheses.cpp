class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxcount = 0;
        for(char ch : s){
            if(ch == '('){
                count++;
                maxcount = max(maxcount,count);
            }else if(ch == ')'){
                count--;
            }
            
            
        }
        return maxcount;
    }
};