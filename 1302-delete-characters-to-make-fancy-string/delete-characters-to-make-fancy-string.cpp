class Solution {
public:
    string makeFancyString(string s) {
        string result;
        int count = 1;

        result += s[0];

        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                count = 1; // Reset count if character changes
            }

            if (count < 3) {
                result += s[i]; // Add only if less than 3 consecutive
            }
        }

        return result;
    }
};
