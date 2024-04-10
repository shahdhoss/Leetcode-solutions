class Solution {
public:
   vector<int> countBits(int n) {
    int num = 2,count=0,index=0;
    vector<int> temp(n + 1);
    vector<int> numbers;
    temp[0] = 0;
    if (temp.size() >1) {
        temp[1] = 1;
        if (temp.size() > 2) {
            for (int i = 2; i < temp.size(); i++) {
                count = 0;
                if (i == num) {
                    temp[i] = 1;
                    num = num * 2;
                    numbers.push_back(num);
                }
                if (i % 4 == 0) {
                    for (int j = 0; j < numbers.size() - 1; j++) {
                        if (i % numbers[j] == 0) {
                            count = count + 1;
                            index = j + 1;
                        }
                    }
                    temp[i] = temp[i - 1] - count;
                }
                else if(i % 2 != 0){
                    temp[i] = temp[i - 1] + 1;
                }
                else if (i % 2 == 0) {
                    temp[i] = temp[i - 1];
                }
            } 
        }
    }
    return temp;
}
};