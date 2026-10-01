// nhập xuất mảnh 2 chiều
#include <bits/stdc++.h>
using namespace std;
#define maxSize 100
main()
{
    int a[maxSize][maxSize]; // khởi tạo mảng 2 chiều
    int n, m;
    cout << "cho biết số dòng , số cột ";
    cin >> n >> m;
    cout << " cho biết các phần tử : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "]" << "[" << j << "]=";
            cin >> a[i][j];
        }
    }
    // xuất ra màn hình
    cout << "Mang hai chiêu da nhap: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "  ";
        }
        cout << "\n";
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
    cout << " giá tri lớn nhất trên mang  là : " << max;
}