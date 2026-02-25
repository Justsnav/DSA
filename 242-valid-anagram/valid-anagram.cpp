class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> maps;
        for(char ch : s) maps[ch]++;
        for(char ch : t) maps[ch]--;

        for(auto it : maps){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};