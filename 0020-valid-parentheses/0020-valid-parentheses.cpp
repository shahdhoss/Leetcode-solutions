class Solution {
public:
    bool isValid(string s) {
        stack<char> my_stack;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i] =='{' ||s[i]=='[' ){
                my_stack.push(s[i]);
            }
            else{
                if(my_stack.empty()){
                    return false;
                }
                else{
                int front=my_stack.top();
                my_stack.pop();
                if((front=='(' && s[i] !=')') || front=='[' && s[i] !=']'|| front=='{' && s[i] !='}'){
                    return false;
                }
            }
            }
        }
        if(my_stack.empty()){
            return true;
        }
        return false;
    }
};