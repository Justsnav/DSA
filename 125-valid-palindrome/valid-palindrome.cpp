class Solution {
public:
    int isalphanumeric(char ch){
        return (ch >= '0' && ch <= '9'||
                ch >= 'a' && ch <= 'z'||
                ch >='A' && ch <= 'Z');
    }
    bool isPalindrome(string s) {
        
        int left = 0;
        int right = s.length()-1;
        while(left < right){
            while( left < right &&  !isalphanumeric(s[left])){
                left++;
            }
            while( left < right &&  !isalphanumeric(s[right])){
                right--;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};