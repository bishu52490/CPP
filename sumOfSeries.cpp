#include<iostream>
using namespace std;
int main(){
    /* sum = 1-2+3-4+5-6+7-8....+n*/
    
    int num, sum, i;
    sum = 0;
    cout<<"Enter a Number: ";
    cin>>num;
    for (i=1;i<=num;i++){
        if (i % 2 == 0){
            sum -= i;
        }
        else{
            sum += i;
        }
    }
    cout<<sum<<endl;
    
    return 0;
}