//Patter:15--->
//Example:
// A
// B B 
// C C C
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int row = 1;
    char ch='A';
    while (row <=n ) {
        int col = 1;
        while(col<=row) {
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
        ch++;
    }
}
