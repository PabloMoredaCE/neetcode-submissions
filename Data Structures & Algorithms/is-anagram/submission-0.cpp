class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) { return false; }
        for(int i = 0; i < s.size(); i++) {
            auto f = t.find(s[i]);
            if(f == std::string::npos) { return false; }
            t.erase(f, 1);
        }
        
        if(t.empty()) { return true; }
        return false;
    }
};
