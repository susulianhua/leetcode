#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

class Solution{

public:
    string AddBinary(string a,string b){

       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       bool flag = false;  // true表示进一位
       string res = "";
       int i = 0;
       while(i < a.length() && i < b.length()){
        if(a[i] == '1' && b[i] == '1'){
            if(flag)
            {
                res += "1";
            }
            else{
                res += "0";
                flag = 1;
            }
        }
        else if((a[i] == '1' && b[i] =='0') || (a[i] == '0' && b[i] == '1')){
            if(flag){
                res += "0";
                flag =1;
            }
            else{
                res += "1";
            }
        }
        else if(a[i] == '0' && b[i] == '0'){
            if(flag){
                res += "1";
                flag = 0;
            }
            else{
                res += "0";
            }
        }
        i++;
       }
       if(a.size() > b.size()){
          while(i < a.size()){
                if(a[i] == '1'){
                    if(flag){
                        res += "0";
                        flag = 1;
                    }
                    else{
                        res += "1";
                        flag = 0;
                    }
                }
                else{
                    if(flag){
                        res += "1";
                        flag = 0;
                    }
                    else{
                        res += "0";
                    }
                }
                i++;

          }
       }
       else if(a.size() < b.size()){
         while(i < b.size()){
                if(b[i] == '1'){
                    if(flag){
                        res += "0";
                        flag = 1;
                    }
                    else{
                        res += "1";
                        flag = 0;
                    }
                }
                else{
                    if(flag){
                        res += "1";
                        flag = 0;
                    }
                    else{
                        res += "0";
                    }
                }
                i++;

          }
       }
       if(flag) {
        res += "1";
       }
       reverse(res.begin(),res.end());
       return res;

    }
};
int main()
{
    Solution sol;
    string a1,a2;
    cin>>a1;
    cin>>a2;
    cout<<sol.AddBinary(a1,a2)<<endl;
    return 0;
}
