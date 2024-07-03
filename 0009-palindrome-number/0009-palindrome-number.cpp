class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        string string_x_unrev=to_string(x);
        string string_x_rev=to_string(x);
        reverse(string_x_rev.begin(),string_x_rev.end());
        if(string_x_rev==string_x_unrev){
            return true;
        }   
        return false;
    }
};