class Solution {
public:
    int numSquares(int n) {
        vector<int> temp;
        for (int i = 1; i < n; i++) {
            if (i * i <= n) {
                temp.push_back(i * i);
            } else if (i * i > n) {
                break;
            }
        }
        vector<int> array(n + 1);
        array[0] = 0;
        array[1] = 1;
        int remainder = INT_MAX;
        int minimium = INT_MAX;
        for (int i = 2; i < array.size(); i++) {
            for (int j = 0; j < temp.size(); j++) {
                if (temp[j] <= i) {
                    remainder = i - temp[j];
                    if (array[remainder] + 1 < minimium) {
                        minimium = array[remainder] + 1;
                    }
                }
            }
            array[i] = minimium;
            minimium = INT16_MAX;
        }
        return array[n];
    }
};