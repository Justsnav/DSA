class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length()) return false;

        vector<int> freq1(26, 0), freq2(26, 0);
        int n1 = s1.length(), n2 = s2.length();
        for (int i = 0; i < n1; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        if (freq1 == freq2) return true;

        for (int i = n1; i < n2; i++) {
            freq2[s2[i] - 'a']++;       
            freq2[s2[i - n1] - 'a']--;  

            if (freq1 == freq2) return true;
        }

        return false;
    }
};
