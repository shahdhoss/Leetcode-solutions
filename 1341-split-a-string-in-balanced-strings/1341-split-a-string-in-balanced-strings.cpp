class Solution {
public:
    int balancedStringSplit(string s) {
        int counterR = 0, counterL = 0, counter = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                counterR++;
            }
            if (s[i] == 'L') {
                counterL++;
            }
            if (counterR == counterL) {
                counter++;
            }
        }
        return counter;
    }
};