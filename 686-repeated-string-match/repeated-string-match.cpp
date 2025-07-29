class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string repeated = a;
        int count = 1;

        // Repeat a until repeated length >= b length
        while (repeated.length() < b.length()) {
            repeated += a;
            count++;
        }

        // Check if b is a substring
        if (repeated.find(b) != string::npos) return count;

        // Try one more repetition to account for overlap
        repeated += a;
        count++;

        if (repeated.find(b) != string::npos) return count;

        // If still not found
        return -1;
    }
};
