#include <iostream>
using namespace std;
int main() {
    int n,row, col;
    cin>>n;

    /*4.for n = 3 
		 	* * *
			* *
			*      */
	row = 1;
	while (row <= n)
	{
		col = n-row+1;
		while (col >= 1){
			cout<<"*";
			col--;
		}
		cout<<endl;
		row++;
	}


return 0;
}