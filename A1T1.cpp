#include <iostream>
using namespace std;
int main(){
int num;
    cout << "PLEASE ENTER THE NUMBER ";
    cin>>num;
    cout<<"The Factors of the number  "<<num<<" are "<<endl;
    for (int i = 1; i <= num; i++) {
        if (num%i==0) {
            cout<<i<<"\n";
         }
         
    }return 0;
}

