#include <iostream>
using namespace std;
int main() {
    int n,row, col;
    cin>>n;

	/*3.for n = 3 
			1 2 3
			4 5 6
			7 8 9 */
	row = 1;
	int count = 1;
	while (row <= n){
		col = 1;
		while (col <= n){
			cout<<count<<" ";
			col++;
			count++;
		}
		cout<<endl;
		row++;
	}
    

return 0;
}