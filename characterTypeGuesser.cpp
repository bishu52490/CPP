#include <iostream>
using namespace std;
int main() {
    //prints the type of character we input
    char ch;
    ch = cin.get(); //this would give us the decimal no according to the ascii table

    if ( ch >= 48 && ch <= 57 ) {
        cout<< "It is a Numeric Value."<<endl;
    }
    else if (ch >= 65 && ch <= 90 ) {
        cout<< " It is Capital Letter"<< endl;
    }
    else if (ch >= 97 && ch <= 122 ) {
        cout<< "Its a Lowercase Letter."<<endl;
    }
    else {
        cout<<"some other letter"<<endl;
    }
    

    
return 0;
}
