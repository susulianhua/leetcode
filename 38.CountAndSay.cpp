#include <iostream>

using namespace std;
string CountAndSay(int n){
    if(!n) return "";
    string s = "1";
    for(int i = 1; i < n; i++){
            string temp = "";
        for(int j = 0; j < s.size(); j++){
            int count = 1;
            while(s[j] == s[j+1] && j < s.size()-1){
                count++;
                j++;
            }
            temp = temp + to_string(count) + s[j];

        }
        s = temp;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;
    string t = CountAndSay(n);
    cout<<t<<endl;
    return 0;
}
