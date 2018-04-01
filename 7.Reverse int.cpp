#include <iostream>

using namespace std;

 int reverse(int x) {
        long c = 0;
        if(!x) return 0;
        else{
            while(x!=0){
                c = c*10+x%10;
                x = x/10;
            }
        }
        if(c>INT_MAX||c<-INT_MAX) return 0;
        else return c;

    }

int main()
{
    int m,d;
    cin>>m;
    d = reverse(m);
    cout<<d<<endl;
    return 0;
}
