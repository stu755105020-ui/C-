#include <bits/stdc++.h>
using namespace std;
#define maxSize 100
main()
{
    // khởi tạo mảng
    int A[maxSize];
    int n;
    cout << "cho biết số lượng phần tử\n";
    cin >> n;
    cout << "nhập số lượng mảng \n";
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "]=";

        cin >> A[i];
    }
    // đưa phần tử ta khỏi màn hình
    cout << " các phần tử  của mảnh là: ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    // tính trung bình  cộng
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += A[i];
    }
    double tbc = s / double(n);
    cout << "trung bình cộng của cac phan tử " << tbc;
}