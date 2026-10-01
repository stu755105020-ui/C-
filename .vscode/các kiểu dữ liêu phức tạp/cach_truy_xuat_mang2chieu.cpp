// Nhập xuất mảng 2 chiều
#include <bits/stdc++.h>
using namespace std;

#define maxSize 100

// Khai báo hàm
void nhapMang(int A[][maxSize], int &n, int &m);
void inMang(int A[][maxSize], int n, int m);
int Max(int A[][maxSize], int n, int m);

int main()
{
    int A[maxSize][maxSize];
    int n, m;

    nhapMang(A, n, m);
    inMang(A, n, m);

    cout << "\nPhan tu lon nhat: " << Max(A, n, m);

    return 0;
}

// Nhập mảng
void nhapMang(int A[][maxSize], int &n, int &m)
{
    cout << "Cho biet so dong, so cot: ";
    cin >> n >> m;

    cout << "Cho biet cac phan tu:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> A[i][j];
        }
    }
}

// In mảng
void inMang(int A[][maxSize], int n, int m)
{
    cout << "\nMang hai chieu da nhap:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << "  ";
        }

        cout << "\n";
    }
}

// Tìm phần tử lớn nhất
int Max(int A[][maxSize], int n, int m)
{
    int max = A[0][0];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < A[i][j])
            {
                max = A[i][j];
            }
        }
    }

    return max;
}