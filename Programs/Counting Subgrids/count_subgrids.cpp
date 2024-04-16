#include <bits/stdc++.h> 
using namespace std;

int N = 32;

vector<vector<unsigned int>> preprocess_grid(vector<vector<int>>& grid, int n)
{
    vector<vector<unsigned int>> processed_grid(n, vector<unsigned int>((n / N) + 1, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                processed_grid[i][j / N] |= (1 << (j % N));
            }
        }
    }
    return processed_grid;
}

int count_subgrid(const vector<vector<unsigned int>>& processed_grid, int n)
{
    int subgrids = 0;
    for (int a = 0; a < n; a++)
    {
        for (int b = a + 1; b < n; b++)
        {
            int count = 0;
            for (int k = 0; k < (n / N) + 1; k++)
            {
                count += __builtin_popcount(processed_grid[a][k] & processed_grid[b][k]);
            }
            subgrids += ((count - 1) * count)/2;
        }
    }
    return subgrids;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n,vector<int>(n,0));



    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            int a;
            cin >>a;
            grid[i][j] = a;
        }
    }

    vector<vector<unsigned int>>  val =  preprocess_grid(grid,n);
    cout << count_subgrid(val,n);


}