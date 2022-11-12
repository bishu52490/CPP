#include<iostream>
using namespace std;
int main(){
    int num, count;
    cout<<"Enter a Number: ";
    cin>>num;
    for (count=0;num>0;){
        num= num/10;
        count++;
    }
    cout<<"No of Digits = "<<count<<endl;

}