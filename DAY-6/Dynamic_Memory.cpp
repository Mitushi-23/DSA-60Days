/* 
Stack-> In this the memory is allocated during compile time i.e int a[10]; In stack there is static memory allocation. We cannot allocate memory in stack during run time i.e a[n]; as the size of n is unknown and if the user gives large size then the error may occur. In this the memory is automatically released within the scope of variables.

Heap-> In heap there is Dynamic Memory Allocation i.e we can allocate the memory during runtime. For allocating memory in heap 'new' keyword is used and the address of the allocated memory is stored in the pointer. e.g. int *p = new int [n]; To release the memory manual release is required.To delete manually 'delete' keyword is required. e.g. delete p; delete []p;-> to delete an array. In this the pointer is not being deleted but the memory which it is allocating is being deleted.
*/

//dynamic memory allocation
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;
    double *pd = new double;
    *pd = 2.4;
    cout << *pd << endl;
    char *c = new char;
    *c = 'a';
    cout << *c << endl;
    int *pa = new int[50]; // *pa-> stores 8byte in the stack and int[50]-> stores 200 in the heap
    int n;
    cin >> n;
    int *pa2 = new int[n];
    pa2[0] = 10; // *(pa2 + 0)
    delete[] pa2;

    //Dynamic allocation in 2d array
    int m, n1;
    cin >> m >> n1;
    int **p1 = new int *[m];
    for (int i = 0; i < m; i++)
    {
        p1[i] = new int[i + 1];
        for (int j = 0; j < n1; j++)
        {
            cin >> p1[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        delete[] p1[i];
    }
    delete[] p1;

   /* while(true)
    {
        int s[10];
    }
    while(true)
    {
        int *t= new int [10];
    }*/
}
