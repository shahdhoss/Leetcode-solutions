class Solution {
public:
    string removeKdigits(string num, int k) {
        string numbers;
        numbers.push_back(num[0]);
        int iterator = 0;
        for (int i = 1; i < num.length(); i++) {
            iterator = numbers.size() - 1;
            while (numbers[iterator] > num[i] && iterator >= 0 && k > 0) {
                numbers.pop_back();
                k--;
                iterator--;
                if (iterator < 0) {
                    break;
                }
            }
            numbers.push_back(num[i]);
        }
        while (k > 0 && !numbers.empty()) {
            numbers.pop_back();
            k--;
        }
        string result;
        for (int i = 0; i < numbers.size(); i++) {
            if (numbers[i] == '0' && result.empty()) {
                continue;
            }
            else{
                result.push_back(numbers[i]);
            }
        }
        if (result.length() == 0)
            result = "0";
        return result;
    }
};