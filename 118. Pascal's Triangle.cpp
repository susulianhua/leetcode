#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> res;
    for(int i = 0; i < numRows; i++)
    {
        vector<int> row(i+1);
        row[0] = 1;
        row[i] = 1;
        for(int j = 1; j < i; j++)
        {
            row[j] = res[i-1][j-1] + res[i-1][j];
        }
        res.push_back(row);
    }
    return res;
}
int main()
{
    int n,b;
    cin>>n;
    vector<vector<int>> res;
    res = generate(n);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            b = res[i][j];
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}
