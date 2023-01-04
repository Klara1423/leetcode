#include <iostream>
#include <string>
using namespace std;
int scoreOfParentheses(string s) {
    int pos = 0, res = 0;
    for (int i = 0; i < s.size( ); i++)
    {
        pos += (s[i] == '(' ? 1 : -1);
        if (s[i] == ')' && s[i - 1]== '(')
            res += 1 << pos;
    }
    return res;
}
int main()
{
    string s;
    getline(cin, s);
    cout << scoreOfParentheses(s);
    return 0;
}