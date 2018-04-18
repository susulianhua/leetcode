#include <iostream>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
    int findLUSlength(string a, string b) {
        int n = max(a.size(),b.size());
        int maxx = 0, cnt = 0;
        if(a == b) {
            return -1;
        }
        if(a.size() != b.size() ){
            return n;
        }
        else{
                for(int i = 0; i < b.size(); i++){
                    if(a[i] != b[i]){
                            cnt++;
                            return n;

                    }
                    else {
                        maxx = max(cnt,maxx);
                    }
                }

                if(cnt > maxx){maxx = cnt;}
                return maxx;
            }


        }

};
int main()
{
    string a,b;
    Solution sol;
    cin>>a>>b;
    cout <<sol.findLUSlength(a,b) << endl;
    return 0;
}
