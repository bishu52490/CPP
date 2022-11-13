#include<iostream>
using namespace std;
int main(){
    //counts and prints the number of digits of the input number.
    int num, count;
    cout<<"Enter a Number: ";
    cin>>num;
    for (count=0;num>0;){
        num= num/10;
        count++;
    }
    cout<<"No of Digits = "<<count<<endl;

    return 0;
}