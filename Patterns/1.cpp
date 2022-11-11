#include <iostream>
using namespace std;
int main() {
    int n,row, col;
    cin>>n;
    
    row = 1; 

    /* 1.for n = 3 
			1 2 3
    		1 2 3
    		1 2 3 */
	while (row <= n){
		col = 1;
		while (col <= n){
			cout<<col<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}	
	

return 0;
}
