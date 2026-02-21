class Solution {
public:
    int hammingWeight(int n) {
        int set_bits = __builtin_popcount(n);
        return set_bits;
    }
};