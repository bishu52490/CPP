#include <iostream>
using namespace std;
int main() {
    int n,m,row, col;
    cin>>n;
    cin>>m;

    /* 6.for n = 3, m= 5 
        *****
        *****
        *****   */
    for (row = 1;row <= n;row++){
        for (col = 1;col <= m; col++){
            cout<<'*';
        }
        cout<<endl;
    }
    

return 0;
}