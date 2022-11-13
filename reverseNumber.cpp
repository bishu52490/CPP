#include<iostream>
using namespace std;
int main(){
    //reverse the digits of the input number and prints it.
    int num,reverseNum;
    cout<<"Enter a Number: ";
    cin>>num;

    for (reverseNum=0;num>0;){
        reverseNum = (reverseNum*10) + (num%10);
        num= num/10;
    }
    
    cout<<"Reverse Number = "<<reverseNum<<endl;

    return 0;
}