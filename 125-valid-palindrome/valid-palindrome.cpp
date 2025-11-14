class Solution {
public:
    bool isalphanumeric(char ch){
        return (ch >= '0' && ch <= '9') ||
               (ch >= 'a' && ch <= 'z') ||
               (ch >= 'A' && ch <= 'Z');
    }
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start<end){
            while(start < end && !isalphanumeric(s[start]))
                start++;

            while(start < end && !isalphanumeric(s[end]))
                end--;

            if(tolower(s[start])!=tolower(s[end])){
                return false;
                
            }
            start++;
            end--;
            
        }
        return true;
    }
};