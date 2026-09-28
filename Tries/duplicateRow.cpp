class Solution {
public:
    vector<int> repeatedRows(vector<vector<int>> &matrix) {

        set<string> seen;
        vector<int> ans;

        for (int i = 0; i < matrix.size(); i++) {

            string row = "";

            for (int j = 0; j < matrix[i].size(); j++) {
                row += to_string(matrix[i][j]);
            }

            if (seen.count(row)) {
                ans.push_back(i);
            }
            else {
                seen.insert(row);
            }
        }

        return ans;
    }
};