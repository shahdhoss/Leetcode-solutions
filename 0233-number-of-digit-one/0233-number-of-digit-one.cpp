
class Solution {
public:
    int countDigitOne(int n) {
    int count = 0;
    for (long long m = 1; m <= n; m *= 10) {
        int a = n / m, b = n % m;
        count += (a + 8) / 10 * m + (a % 10 == 1) * (b + 1);
    }
    return count;
}
};