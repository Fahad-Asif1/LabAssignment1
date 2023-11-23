#include <iostream>
using namespace std;
int main() {
    int n,  i, factor, j  ;
    cout<<"Please enter any number ";
    cin>>n;
    i = n;
    while (i >= 2) {
        factor = 0;
        j = 1;
        while (j <= i) {
            if (i%j==0) {
                factor++;       }
            j++; }
        if (factor==2) {
            cout<<"The highest prime number just below the given number "<<n<<" is "<<i;
            break;   }
        i--;   }
    return 0;
}

