#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, n, s;
    cin >> t;
    while (t--)
    {
        int count = 0, prev = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (i == 0)
            {
                count++;
                prev = s;
            }
            else
            {
                if (s <= prev)
                {
                    count++;
                    prev = s;
                }
            }
        }
        cout << count << endl;
    }
}
