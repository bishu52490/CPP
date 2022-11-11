#include <iostream>
using namespace std;
int main() {
    int n,row, col;
    cin>>n;

    /* 8. for n = 4
               *
              ***
             *****
            *******   */
    
    for (row = 1;row<=n;row++){
        for(col = n-row;col>=1;col--){
            cout<<' ';
        }
        for(col = 2*row-1;col>=1;col--){
            cout<<'*';
        }
        cout<<endl;
    }

    

return 0;
}