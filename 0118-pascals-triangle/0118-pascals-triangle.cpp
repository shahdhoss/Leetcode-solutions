class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> array(numRows);
    array[0] = { 1 };
    if (numRows >= 2) {
        array[1] = { 1,1 };
        /*  for (int i = 0; i < array.size(); i++) {
              for (int j = 0; j < array[i].size(); j++) {
                  cout << array[i][j] << " ";
              }
              cout << endl;
          }*/
        int iterator = 1;
        int iterator2 = 2;
        for (int i = 2; i < numRows; i++) {
            array[i].resize(i + 1);
            array[i][0] = 1;
            array[i][i] = 1;
            for (int j = 1; j < i; j++) {
                array[i][j] = array[i - 1][j] + array[i - 1][j - 1];
            }
        }
    }
    return array;
}
};