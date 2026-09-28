class Solution {
public:
    vector<vector<int>> uniqueRow(vector<vector<int>>& A) {

        set<vector<int>> seen;
        vector<vector<int>> ans;

        for (int i = 0; i < A.size(); i++) {

            if (seen.insert(A[i]).second) {
                ans.push_back(A[i]);
            }
        }

        return ans;
    }
};