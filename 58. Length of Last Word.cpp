#include <iostream>

using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0, maxx = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                  maxx = ++cnt;
            }
            else{
                cnt = 0;
            }

        }
        return maxx;
    }
};

int main()
{
    string s;
    cin>>s;
    Solution sol;
    cout <<sol.lengthOfLastWord(s)<< endl;
    return 0;
}
