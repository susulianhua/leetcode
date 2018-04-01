#include <iostream>

using namespace std;
    bool isPalindrome(int x) {
        if(x == 0) return 1;
        if(x < 0 || x%10 == 0) return 0;
        int m = x,i,c = 0;
        while(x){
            c = c*10 + x%10;
            x = x/10;
        }
        if(m == c) return 1;
        else return 0;
    }

int main()
{
    int x,res;
    cin>>x;
    res = isPalindrome(x);
    cout <<res << endl;
    return 0;
}
