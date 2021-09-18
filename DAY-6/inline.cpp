#include <bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    /* To find the maximum of two numbers we use if ekse condition, instaed of that we can use inline i.e tertiary operators. */

    int a = 12, b = 46;
    int c = (a > b) ? a : b;
    cout << c << endl;
    int x = 45;
    int y = 23;
    int z = (x > y) ? x : y;
    cout << z << endl;
    cout << max(a, b) << endl;
    cout << max(x, y) << endl;
}