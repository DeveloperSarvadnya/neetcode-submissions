class Solution {
public:
    void bfs(int i, int j, vector<vector<char>>& grid,
             vector<vector<bool>>& visited, int n, int m) {
        
        queue<pair<int, int>> q;
        q.push({i, j});
        visited[i][j] = true;

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr < 0 || nc < 0 || nr >= n || nc >= m ||
                    visited[nr][nc] || grid[nr][nc] != '1') {
                    continue;
                }

                visited[nr][nc] = true;
                q.push({nr, nc});
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));
        int numberOfIslands = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (grid[i][j] == '1' && !visited[i][j]) {
                    bfs(i, j, grid, visited, n, m);
                    numberOfIslands++;
                }
            }
        }

        return numberOfIslands;
    }
};