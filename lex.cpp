#include<iostream>
using namespace std;
string Lexi(string str)
{
     string mx = "";
    for(int i=0;i<str.length();++i)
        mx=max(mx,str.substr(i));
    return mx;
}

int main()
{
    string str;
    cin>>str;
    cout << Lexi(str);
    return 0;
}
