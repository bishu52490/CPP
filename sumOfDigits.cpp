#include<iostream>
using namespace std;
int main(){
    //prints the sum of digits of the input number.
    int num,sum;
    cout<<"Enter a Number: ";
    cin>>num;
    for (sum=0;num>0;){
        sum=sum + (num%10);
        num= num/10;
    }
    cout<<"Sum of Digits = "<<sum<<endl;
    
return 0;
}