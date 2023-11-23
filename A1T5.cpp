#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, rotated;
    rotated= "";
    cout<<"ENTER YOUR FIRST STRING "<<endl;
    cin>>s1;
    cout<<"ENTER YOUR SECOND STRING: "<<endl;
    cin>>s2;
    if (s1==s2) {
        for (int i=0; i < s1.length(); i++) {
            rotated = s1[i] + rotated;
        }
        cout<<"Both inputed strings are equal , rotated string is given as "<<endl;
        cout<<rotated;
    }
    else {
        cout<<"Both the strings are unequal";
    }
    return 0;}

