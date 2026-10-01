// nhập xuất mảnh 2 chiều
#include <bits/stdc++.h>
using namespace std;
#define maxSize 100
main()
{
    int a[maxSize][maxSize];
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> a[i][j];
        }
    }

    int max;
    max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
    }
    int min;

    min = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min > a[i][j])
                min = a[i][j];
        }
    }
    cout << min << " " << max;
}