class Solution {
public:
    void reversing(vector<char>& s, int left,int right){
        if(left >= right) return;
        swap(s[left],s[right]);
        reversing(s, left+1,right-1);
    }
    void reverseString(vector<char>& s) {
        reversing(s,0,s.size()-1);
    }
};