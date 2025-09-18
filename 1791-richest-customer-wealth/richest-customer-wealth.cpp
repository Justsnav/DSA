class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=0;
        for(auto& customer : accounts ){
            int wealth =0;
            for(int money : customer){
                wealth +=money;
            }
            maxwealth = max(maxwealth,wealth);
        }
        return maxwealth;
    }
};