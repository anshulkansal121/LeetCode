class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart,
                                        int cStart) {
        vector<pair<int, int>> direction = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir = 0;
        int step = 0;
        vector<vector<int>> result;
        result.push_back({rStart, cStart});
        while (result.size() < (rows * cols)) {
            if (dir == 0 || dir == 2)
                step++;
            for (int i = 0; i < step; i++) {
                rStart += direction[dir].first;
                cStart += direction[dir].second;
                if (rStart < rows && cStart < cols && rStart >= 0 &&
                    cStart >= 0)
                    result.push_back({rStart, cStart});
            }
            dir = (dir + 1) % 4;
        }
        return result;
    }
};

auto init = [] {
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();