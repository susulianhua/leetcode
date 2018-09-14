#include <iostream>
#include<stack>
#include<string>

using namespace std;

    bool isValid(string s) {
        if(!s.size()) return true;
        stack<char> stk;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '{') stk.push('}');
            else if(s[i] == '(') stk.push(')');
            else if(s[i] == '[') stk.push(']');
            else{
                if(stk.empty() || s[i] != stk.top()) return false;
                else stk.pop();
            }
        }
        return stk.empty();
    }
int main()
{
   		string s;
   		cin>>s;
        cout<<isValid(s)<<endl;
        return 0;
	}

