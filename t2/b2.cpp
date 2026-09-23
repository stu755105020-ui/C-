#include <bits/stdc++.h>
using namespace std;
bool chua6(int n)
{
    while (n > 0)
    {
        if (n % 10 == 6)
            return true;
        else
            return false;
        n /= 10;
    }
}

bool tongchan(int n)
{
    int tong = 0;
    while (n > 0)
    {
        /* code */
        tong += n % 10;
        n /= 10;
    }
    return tong % 2 == 0;
}
bool chanle(int n)
{
    int c = 0, l = 0;
    while (n > 0)
    {
        if (n % 2 == 0)
            c++;
        else
            l++;
        return l > c;
    }
}
int mani()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (chua6(i) && tongchan(i) && chanle(i))
        {
            cout << i << " ";
        }
    }
}