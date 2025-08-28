class Solution {
public:
    // Check if x is prime
    bool isPrime(int x) {
        static unordered_set<int> primes = {2,3,5,7,11,13,17,19,23,29,31};
        return primes.count(x) > 0;
    }

    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int bits = __builtin_popcount(i); // in-built function for bit count
            if (isPrime(bits)) ans++;
        }
        return ans;
    }
};
