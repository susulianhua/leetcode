#include <iostream>

using namespace std;
#define N 10

int main()
{
    int A[N],i,j,t;
    for(i = 0; i < 10; i++) cin>>A[i];
    for(j = 0; j < N-1; j++)
    {
        for(i = 0; i < N-1-j; i++)
        {
            if(A[i+1]<A[i])
            {
                t = A[i];
                A[i] = A[i+1];
                A[i+1] = t;
            }
        }
    }

    for(i = 0; i < N; i++) cout<<A[i]<<" ";
    return 0;
}
