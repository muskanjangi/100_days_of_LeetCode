#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;
    for (int i = 1; i <= numRows; i++) {
        long long val = 1;
        vector<int> row;
        row.push_back(1); 
        for (int col = 1; col < i; col++) {
            val = val * (i - col);
            val = val / col;
            row.push_back(val);
        }
        triangle.push_back(row);
    }
    return triangle;
}

int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    vector<vector<int>> result = generate(numRows);

    cout << "\nPascal's Triangle:\n";
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}