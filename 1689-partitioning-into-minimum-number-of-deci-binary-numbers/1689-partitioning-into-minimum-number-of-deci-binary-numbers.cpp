class Solution {
public:
    int minPartitions(string n) {
        long long int number, max = 0, temp;
        for(int i=0;i<n.length();i++){
            if(n[i]>max){
                max=n[i];
            }
        }
        return max-48;
    }
};