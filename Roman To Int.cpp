#include <iostream>
#include<string>

using namespace std;

        int roma(char c) {
            switch(c) {
                case 'I': return 1;
                case 'V': return 5;
                case 'X': return 10;
                case 'L': return 50;
                case 'C': return 100;
                case 'D': return 500;
                case 'M': return 1000;
            }
            return 0;
        }

    int romanToInt(string s) {
        int res = 0;
        int n = s.size();
        for(int i = 0; i < n; i++) {
            if(roma(s[i]) > roma(s[i - 1])) {
                res += roma(s[i]) - 2*roma(s[i - 1]);
            }
            else res += roma(s[i]);
        }
        return res;
    }


int main()
{
    string s;
    cin>>s;
    int c = romanToInt(s);
    cout<<c<<endl;
    return 0;
}
