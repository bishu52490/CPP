#include <iostream>
using namespace std;
int main() {
    int n,row, col;
    cin>>n;

    /*4.for n = 3 
		 	*
			* *
			* * *      */
	row = 1;
	while (row <= n)
	{
		col = 1;
		while (col <= row){
			cout<<"*";
			col++;
		}
		cout<<endl;
		row++;
	}


return 0;
}