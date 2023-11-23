#include <iostream>
#include <string>
using namespace std;
int main() {
    string s, result;
    bool found;
    cout<<"Enter String: ";
    cin>>s;
    result = "";
    for (int i = 0; i < s.length(); i++) {
        found = false;
        for (int j = 0; j < result.length(); j++) {
            if ( s[i] == result[j] ) {
                found = true; }
}
        if (found == false) {
            result += s[i];
        }
    }
    cout<<"RESULT "<<result;
    return 0;
}

