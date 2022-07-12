#include <bits/stdc++.h>
using namespace std;

void kSorted(int input[], int n, int k)
{
    priority_queue<int>p;
    for(int i=0;i<k;i++)
    {
        p.push(input[i]);
    }
    int j=0;
    for(int i=k;i<n;i++)
    {
        input[j] = p.top();
        p.pop();
        p.push(input[i]);
        j++;
    }

    while(!p.empty())
    {
        input[j]= p.top();
        p.pop();
        j++;
    }
}

int main()
{
    int n;
    cin >> n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin >> input[i];
    }
    int k;
    cin >> k;
    kSorted(input , n,k);
    for(int i=0;i<n;i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
}