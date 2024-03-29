//Homework-4
//Coding ninjas problem: sort 0 1 2
/* 
Problem statement
You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

Note :
Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Constraints :
1 <= T <= 10
1 <= N <= (5 * (10 ^ 5))
0 <= ARR[i] <= 2
Where 'N' is the size of the given array/list.
And, ARR[i] denotes the i-th element in the array/list.

Time Limit: 1sec 

Sample Input 1 :
2
6
0 1 2 2 1 0
7
0 1 2 1 2 1 2
Sample Output 1 :
0 0 1 1 2 2
0 1 1 1 2 2 2
*/

#include<iostream>
using namespace std;

void sort012(int arr[], int n){
    int i = 0, j = 0, k = n-1;
    while(j <= k) {
        if(arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else if(arr[j] == 1){
            j++;
        }
        else{
            swap(arr[j], arr[k]);
            k--;
        }
    }

}
void printArray(int arr[], int n) {
    for(int i = 0; i  < n; i++) {
        cout << arr[i] << " ";
    }
}
int main() {
    int arr[6] = {0,2,2,1,0,1};
    sort012(arr,6);
    printArray(arr,6);
}