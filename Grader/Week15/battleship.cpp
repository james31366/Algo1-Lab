#include <iostream>

using namespace std;

char field[101][101];
int N;

void dfs(int i, int j)
{
    if (i < 0 || j < 0 || i >= N || j >= N || field[i][j] == '.')
    {
        return;
    }
    field[i][j] = '.';
    dfs(i, j + 1);
    dfs(i, j - 1);
    dfs(i + 1, j);
    dfs(i - 1, j);
}

int main()
{
    int T;
    cin >> T;
    int count_ship[T] = {};
    for (int t = 0; t < T; t++)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> field[i][j];
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (field[i][j] == 'x')
                {
                    dfs(i, j);
                    count_ship[t]++;
                }
            }
        }
    }

    for (int t = 0; t < T; t++)
    {
        cout << "Case " << t + 1 << ": " << count_ship[t] << endl;
    }
}