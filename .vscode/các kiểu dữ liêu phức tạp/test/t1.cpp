// đô phức tạp  các  gán  cộng  , chừ nhân , chia được coi là o(1) nó rất là nhỏ

// ví dụ
#include <bits/stdc++.h>
using namespace std;

// 0(logn)
bool nguyenTo(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}
int main()
{

    int n;
    cin >> n;
    int a[100];

    // 0(n)
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // o(n)

    // tìm số có tổng  lớn nhất
    int val = -1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; i < n; ị++)

        {
            if (a[i] + a[j] > val)
            {
                val = a[i] + a[j] // ---> o(n^2)
            }
        }
    }
}

// 2 vòng lặp lồng nhau thi độ phức tạp 0(n*m)===> o(n^2)

// trong1  chương trình thì nó sẽ lấy cái vòng lặp cpos độ phưc tap lơn nhất
// vd
//   o(n ^ 2) < -- -vòng lặp 1
//   0(n)<--- vòng lặp 2 ----> thì độ phức tạp của cả chương trình
//   là o(n^2)

// 10^6--->chay 1 s
