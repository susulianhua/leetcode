#include <iostream>
#include<vector>
using namespace std;

vector<int> PlusOne(vector<int>& digits){
    int a, c = 1;
    int n = digits.size();
    for(int i = n-1; i >= 0; i--){
        a = digits[i] + c;
        digits[i] = a % 10;
        c = a / 10;
    }
    if(c == 1) digits.insert(digits.begin(),1);
    return digits;

}
int main()
{
    vector<int> res,tt;
    int n,b;
    cin>>n;
    for(int i = 0;i < n; i++){
        cin>>b;
        res.push_back(b);
    }
    tt = PlusOne(res);
    int m = tt.size();
    for(int j = 0; j < m;j++){
        cout<<tt[j];
    }
    return 0;
}
