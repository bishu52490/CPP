#include<iostream>
using namespace std;
int main(){
    //prints the factorial of number from 1 to n
    int num, factorial, i;
    cout<<"Enter a Number: ";
    cin>>num;
    for (i=factorial=1;i<=num;i++){
        factorial *= i;
        cout<<"factorial of "<<i<<" = "<<factorial<<endl;
    }

    return 0;
}