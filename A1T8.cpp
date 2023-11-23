#include <iostream>
using namespace std;
int main(){
    int x,new_array[5+x], array[5] = {1,2,3,4,5} ;
    cout<<"ARRAY {";
    for (int i = 0; i<5; i++) {
        cout<<array[i];
        cout<<" , ";
    }
    
	
	cout<<"}"<<endl;
cout<<"Enter the number of elements you want to add to the array:"<<endl;
cin>>x;
    for (int i = 0;i<5;i++) {
        new_array[i] = array[i];
    }
    cout<<"Enter the " << x << " new integers to be added to the array "<<endl;
    for (int i =5;i<5+x;i++)
        cin>>new_array[i];
    cout<<"New array after adding the additional new element is given by"<<endl;
    cout<<"NEW ARRAY = {";
    for (int i = 0; i<5+x; i++) {
        cout<<new_array[i]<<" ";
        cout<<" , ";
    }
    cout<<"}"<<endl;
    return 0;
}

