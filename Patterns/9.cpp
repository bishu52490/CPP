#include <iostream>
using namespace std;
int main() {
    int n, m,row, col;
    cin>>n;

    /* 8. for n = 4
            *******
             *****
              ***
               *   */
    
    for (row = 1;row<=n;row++){
        for(col = 1;col<row;col++){
            cout<<' ';
        }
        m = n -row+1;
        for(col = 1;col<=(2*m-1);col++){
            cout<<'*';
        }
        cout<<endl;
    }

    

    return 0;
}