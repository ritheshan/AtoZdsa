#include<vector>
using namespace std;
class Solution {
public:
  void transpose(vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = i + 1; j < matrix.size(); j++) {  // Start from i + 1 to avoid redundant swaps
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

    void reverse(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix.size() / 2; j++) {  // Corrected this line
                swap(matrix[i][j], matrix[i][matrix.size() - j - 1]);  // Corrected indexing
            }
        }
    }

    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);  // Transpose the matrix
        reverse(matrix);    // Reverse each row
    }
};
