#include <iostream>
#include<vector>

using namespace std;

    string longestCommonPrefix(vector<string>& strs) {
        int n,len;
        n = strs.size();
        if(n <= 0) return "";
        len = strs[0].length();
        for(int i = 0; i < len; i++){
            for(int j = 1; j < n; j++){
                if(i >= strs[j].length() || strs[0][i]!=strs[j][i])
                    strs[0]=strs[0].substr(0,i);
            }

        }
        return strs[0];
    }
int main()
{
    vector<string> strs;
    string res,str;
    int c,n;
    cin>>n;
    for(int i = 0; i < n;i++){
       cin>>str;
        strs.push_back(str);


    }
    res = longestCommonPrefix(strs);
    cout << res<< endl;
    return 0;
}
