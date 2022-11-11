#include <iostream>
using namespace std;
int main() {
    int n,m,row, col;
    cin>>n;
    cin>>m;
    /* 7. for n = 4, m = 5
            *****
            *   *
            *   *
            *****  */
    
    for (row = 1;row<=n;row++){
        for (col= 1;col<=m;col++){
            if(col==1||col==m||row==1||row==n){
                cout<<'*';
            }
            else
            {
                cout<<' ';
            }
            
        }
        cout<<endl;
    }

return 0;
}