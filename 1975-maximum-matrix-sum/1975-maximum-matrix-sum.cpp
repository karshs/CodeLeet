class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int cnt = 0;
        long long sum = 0;
        int minv = INT_MAX;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int val = abs(matrix[i][j]);

                sum += val;
                minv = min(minv, val);

                if(matrix[i][j] < 0)
                    cnt++;
            }
        }

        if(cnt % 2 == 0)
            return sum;
        else
            return sum - 2LL * minv;
    }
};
