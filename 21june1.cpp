#include <bits/stdc++.h>
using namespace std;
// #include <stack>

bool balanced(string prob)
{
    stack<char>s;
    for (int i = 0; i < prob.length(); i++)
    {
        if (s.empty())
        {
            s.push(prob[i]);
        }
        else if ((s.top() == '(' && prob[i] == ')') || (s.top() == '{' && prob[i] == '}') || (s.top() == '[' && prob[i] == ']'))
        {
            s.pop();
        }
        else
        {
            s.push(prob[i]);
        }
    }
     return s.empty();
}
int main()
{
    string prob;
    cin>>prob;
    if (balanced(prob))
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}