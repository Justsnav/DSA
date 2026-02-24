class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length() ) return false;
        unordered_map<char,char> maps;
        unordered_map<char,char> mapt;
        for(int i=0;i<s.length();i++){
            char c1 = s[i];
            char c2 = t[i];
            if(maps.count(c1)) {
                if(maps[c1] != c2)
                    return false;
            } else {
                maps[c1] = c2;
            }
            if(mapt.count(c2)) {
                if(mapt[c2] != c1)
                    return false;
            } else {
                mapt[c2] = c1;
            }
        }
        return true;
    }
};