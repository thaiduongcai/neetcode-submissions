class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> countS;
        map<char, int> countT;
        if (s.size() != t.size()) return false;
        for (int i = 0; i < s.size(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (countS[s[i]] != countT[s[i]]) return false;
        }
        return true;
    }
};
