#include <iostream>
#include<string>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        //needle��haystack���ʱ��needleΪ��ʱ
        if(needle == haystack || needle == "") {
                return 0;}

        //needle���ȱ�haystack��ʱ
        if( needle.size() > haystack.size()){
            return -1;
        }

        //haystack���ȴ��ڵ���needle
        else{
                int s = 0, cnt = 0,t = 0;
                for(int i = 0; i < needle.size(); i++){
                    if( haystack[s] == needle[i]){
                        s++;
                        cnt++;
                        if(cnt == needle.size()){
                            return s - cnt;
                        }
                        if(s == haystack.size()){
                            return -1;
                        }
                    }
                    else{
                        t++;
                        i = -1;
                        cnt = 0;
                        s = t;
                       if(s == haystack.size()){
                            return -1;
                        }

                    }
                }
                return -1;


            }
        }

};

int main()
{
    string a,b;
    cin>>a>>b;
    Solution sol;
    cout << sol.strStr(a,b) << endl;
    return 0;
}
