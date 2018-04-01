#include <iostream>
#include<vector>
using namespace std;

    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int index = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
int main()
{
    vector<int> nums;
    int n,d;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>d;
        nums.push_back(d);
    }
    d = removeDuplicates(nums);
    cout << d << endl;
    return 0;
}
