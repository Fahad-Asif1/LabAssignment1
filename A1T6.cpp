#include <iostream>
using namespace std;
int main() {
    int dividend, divisor, remainder, quotient;

    cout<<"Enter your dividend kindly! "<<endl;
    cin>>dividend;
    cout<<"Enter your Divisor please  "<<endl;
    cin>>divisor;
    if (dividend < divisor) {
        cout<<"Enter values again and make sure that dividend is greater than divisor"; }
    remainder = dividend;
    for (int i = 1; i <= dividend; i++) {
        remainder -= divisor;
        if (remainder < divisor) {
            quotient = i;
            break;   }
    }
    cout<< dividend <<"/"<<divisor<<"="<<quotient<<endl;
    return 0;
}

