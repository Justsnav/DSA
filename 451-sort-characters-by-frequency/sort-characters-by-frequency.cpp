class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>maps;
        for(char ch : s){
            maps[ch]++;
        }
        vector<pair<char,int>> vec(maps.begin(),maps.end());
        sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        string result = "";
        for(auto &it : vec){
            result.append(it.second,it.first);
        }
        return result;
    }
};