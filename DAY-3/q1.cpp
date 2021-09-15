#include <bits/stdc++.h>

using namespace std;

void fun(int a[])
{
    cout << a[0] << " ";
}

int main()
{
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0] << endl;

    char s[] = "hello";
    char *p = s;
    cout << s[0] << " " << p[0] << endl;

    int a1[6] = {1, 2, 3};
    cout << (a1 + 2) << endl;
}