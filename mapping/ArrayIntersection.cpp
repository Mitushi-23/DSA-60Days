#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unordered_map<int, int> map1;
        int n1;
        cin >> n1;
        int a1[n1];
        for (int i = 0; i < n1; i++)
        {
            cin >> a1[i];
            map1[a1[i]]++;
        }
        int n2;
        cin >> n2;
        int a2[n2];
        for (int i = 0; i < n2; i++)
        {
            cin >> a2[i];
            map1[a2[i]]++;
        }
        for (int i = 0; i < n1; i++)
        {

            map1[a1[i]] = map1[a1[i]] / 2;
            int d = map1[a1[i]];
            if (d > 0)
                cout << a1[i] << " ";
        }
        cout << endl;
    }
}