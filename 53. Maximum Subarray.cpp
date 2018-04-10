#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int maxSubArray(vector<int>& nums){
    vector<int> res;
    res.push_back(nums[0]);
    int maxx = 0;
    for(int i = 1; i < nums.size(); i++){
        res.push_back(max(nums[i],res[i-1]+nums[i]));
        if(res[i] > maxx) maxx = res[i];
    }

    return maxx;
}
int main()
{
    int n,b;
    vector<int> res;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>b;
        res.push_back(b);
    }
    b = maxSubArray(res);
    cout<<b<<endl;
    return 0;
}
