#include <iostream>

using namespace std;
#define N 10

void SelectSort(int a[],int n)
{
    int k,t;
    for(int i = 0; i < n-1; i++)
    {
        k = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[k]) k = j;
            if(k != i)
            {
                t = a[i],a[i] = a[k], a[k] = t;
            }

        }
    }
}
int main()
{
    int a[N];
    for(int i = 0; i < N; i++) cin>>a[i];
    SelectSort(a,N);
    for(int i = 0; i < 10; i++) cout<<a[i]<<" ";
    return 0;
}
