//Program for Finding summation of 1 to input(n) --->
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i=1;
    int sum=0;
    
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"Summation is: "<<sum;
}
