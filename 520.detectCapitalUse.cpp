#include <iostream>
#include<string>


using namespace std;

class Solution{
public:
    bool detectCapitalUse(string word) {
        int i;
        //字符串长度为一必然为真
        if(word.length() == 1) {
            return true;
        }
        //首字符为小写后出现大写则返回false
        if(islower(word[0])){
            for(i = 1; i < word.length(); i++){
                if(isupper(word[i])){
                    return false;
                }
            }
            return true;
        }
        //首字符为大写后同时出现大写小写则返回false
        else{
            bool max_word = 0;
            bool min_word = 0;
            for(i = 1; i < word.length(); i++){
                if(isupper(word[i])){
                   max_word = 1;
                   }
                   if(islower(word[i])){
                    min_word = 1;
                   }
            }
            if(max_word == 1 && min_word == 1){
                return false;
            }
            else{
                return true;
            }
        }

    }
};

int main()
{
    Solution sol;
    string word;
    cin>>word;
    cout << sol.detectCapitalUse(word)<< endl;
    return 0;
}
