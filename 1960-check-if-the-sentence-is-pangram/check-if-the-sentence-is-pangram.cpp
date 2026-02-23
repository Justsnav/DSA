class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);
        int count = 0;
        for(int i=0;i<sentence.size();i++){
            int index = sentence[i]-'a';
            if(arr[index] == 0){
                arr[index]++;
                count++;
            }
        }
        if(count == 26){
            return true;
        }
        return false;
    }
};