// memeoization
#include <bits/stdc++.h>
int mod = 1e9 + 7;

int f(int i, int j, vector<vector<int>> &mat, vector<vector<int>> &dp)
{

    // base cases
    if (i > 0 && j > 0 && mat[i][j] == -1)
        return 0;
    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    int up = f(i - 1, j, mat, dp);
    int left = f(i, j - 1, mat, dp);

    return dp[i][j] = (up + left) % mod;
}

int mazeObstacles(int n, int m, vector<vector<int>> &mat)
{

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return f(n - 1, m - 1, mat, dp);
}

// tabulation

int mazeObstaclesUtil(int n, int m, vector<vector<int>> &mat, vector<vector<int>> &dp)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // base conditions
            if (i > 0 && j > 0 && mat[i][j] == -1)
            {
                dp[i][j] = 0;
                continue;
            }
            if (i == 0 && j == 0)
            {
                dp[i][j] = 1;
                continue;
            }

            int up = 0;
            int left = 0;

            if (i > 0)
                up = dp[i - 1][j];
            if (j > 0)
                left = dp[i][j - 1];

            dp[i][j] = up + left;
        }
    }

    return dp[n - 1][m - 1];
}