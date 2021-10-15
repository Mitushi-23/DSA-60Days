#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = n / 5;
        long long sum = ans;
        long long i = 2;
        while (ans != 0)
        {
            ans = n / (pow(5, i));
            sum += ans;
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}
