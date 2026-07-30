Brute Force

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] < 0)
                    count++;
            }
        }

        return count;
    }
};


Binary Search

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i < rows; i++) {
            int low = 0, high = cols - 1;
            int firstNegative = cols;

            while (low <= high) {
                int mid = low + (high - low) / 2;

                if (grid[i][mid] < 0) {
                    firstNegative = mid;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }

            count += (cols - firstNegative);
        }

        return count;
    }
};


Two Pointers

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        int row = 0;
        int col = cols - 1;
        int count = 0;

        while (row < rows && col >= 0) {
            if (grid[row][col] < 0) {
                count += (rows - row);
                col--;
            } else {
                row++;
            }
        }

        return count;
    }
};