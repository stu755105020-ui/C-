#include <bits/stdc++.h>
using namespace std;

#define maxSize 100

void nhapMang(int A[], int &n)
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

bool soNguyenTo(int n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int X[maxSize];
    int spt;

    nhapMang(X, spt);

    int count = 0;

    for (int i = 0; i < spt; i++)
    {
        if (soNguyenTo(X[i]))
            count++;
    }

    cout << count;

    return 0;
}