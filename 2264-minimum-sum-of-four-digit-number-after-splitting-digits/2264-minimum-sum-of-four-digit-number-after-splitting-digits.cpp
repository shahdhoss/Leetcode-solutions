class Solution {
public:
    int minimumSum(int num) {
        int keyone = 0, keytwo = 0;
        string key1 = "", key2 = "", number;
        number = to_string(num);
        sort(number.begin(), number.end());
        for (int i = 0; i < number.length(); i++) {
            if (i % 2 == 0) {
                key1 = key1 + number[i];
            } else {
                key2 = key2 + number[i];
            }
        }
        keyone = stoi(key1);
        keytwo = stoi(key2);
        return keyone + keytwo;
    }
};