// đôi với mảng 1 chiều
// ---> void nhập mang(int A[], int n);

// đối với mang 2 chieu
//--> void nhap mang(int A[][maxSize], int n, int m)

// trien khia các chương trình con
#include <bits/stdc++.h>
using namespace std;
#define maxSize 100
void nhapMang(int A[], int &n)
{
    cout << "cho biết số lượng phần tử\n";
    cin >> n;
    cout << "nhập số lượng mảng \n";
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]=";

        cin >> A[i];
    }
}

void inMang(int A[], int n)
{
    cout << " các phần tử  của mảnh là: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
double trungBinh(int A[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += A[i];
    }
    return s / double(n);
}

main()
{
    int X[maxSize];
    int spt;
    nhapMang(X, spt);
    inMang(X, spt);
    cout << "Giá trị trung bình của các phần tử la: " << trungBinh(X, spt);
}
