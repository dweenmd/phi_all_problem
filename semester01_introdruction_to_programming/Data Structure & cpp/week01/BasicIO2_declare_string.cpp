#include<iostream>
using namespace std;
int main()
{
    //string declare
    string a;
    //full string input with space
    getline(cin , a);
    cout << a<<"\n";

    string s= "My name is Dween Mohammad";
    string s2= " And What is your name?";
    s= s+s2;
    cout <<s << "\n";


    return 0;
}
