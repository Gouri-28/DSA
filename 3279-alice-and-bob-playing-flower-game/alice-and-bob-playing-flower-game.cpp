class Solution {
public:
    long long flowerGame(int n, int m) {
        long long oddRows = (n + 1) / 2;
        long long evenRows = n / 2;
        long long oddCols = (m + 1) / 2;
        long long evenCols = m / 2;

        return oddRows * evenCols + evenRows * oddCols;
    }
};
