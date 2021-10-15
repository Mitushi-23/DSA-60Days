#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    long long arr[t];
    for (long long i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + t);
    long long score[t];
    for (long long i = 0; i < t; i++)
    {
        score[i] = (arr[i]) * (t - i);
    }
    sort(score, score + t);
    cout << score[t - 1] << endl;
    return 0;
}
