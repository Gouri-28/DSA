class Solution {
public:
    int distinctEchoSubstrings(string_view text) {
        int n = text.size();

        unordered_set<string_view> Set;
        
        for(int len=1;len<=n/2;len++) {
            for(int i=len;i+len-1 < n;i++) {
                if(text.substr(i, len) == text.substr(i-len, len)) {
                    Set.insert(text.substr(i, len));
                }
            }
        }

        return Set.size();
    }
};