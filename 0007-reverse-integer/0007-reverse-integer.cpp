class Solution {
public:
    int reverse(int x) {
        if (x < INT32_MIN || x > INT32_MAX) {
            return 0;
        }
        int copyx = x;
        int temp;
        vector<int> array;
        while (x != 0) {
            temp = abs(x) % 10;
            x = abs(x) / 10;
            array.push_back(temp);
        }
        temp = 0;
        for (int i = 0; i < array.size(); i++) {
            if (temp > (INT_MAX - array[i]) / 10) {
                return 0;
            }
            temp = temp * 10 + array[i];
        }
        if (copyx < 0) {
            return -temp;
        }
        return temp;
    }
};