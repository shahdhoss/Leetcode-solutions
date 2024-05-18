class Solution {
public:
    bool answer(double number){
        if(number <= 0){
            return false;
        }
        if(number==1){
            return true;
        }
        return answer(number/3);
    }
    bool isPowerOfThree(int n) {
        double number=n;
        return answer(number);
    }
};