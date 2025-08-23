class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>freq(26,0);
        int c=0;
        for(char c:s) freq[c-'a']++;
        for(char c:t)freq[c-'a']--;

        for(auto i=0;i<26;i++){
            if(freq[i]>0) c=c+freq[i];
        }
        return c;
    }
};