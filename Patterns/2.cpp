#include <iostream>
using namespace std;
int main() {
    int n,row, col;
    cin>>n;

    /*2.for n = 3 
			3 2 1
			3 2 1
			3 2 1*/
	row = 1;
	while (row <= n){
		col = 1;
		while (col <= n){
			cout<<(n-col)+1<<" ";
			col++;
		}
		cout<<endl;
		row++;
	}
    

return 0;
}