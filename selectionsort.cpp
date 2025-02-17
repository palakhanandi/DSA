// using loops
/*
#include  <iostream>
using namespace std;
void sort (int * arr ,int n) {
    for(int i =0;i<n;i++) {
        int minIndex = i;
        for(int j=i+1;j<n-i-1;j++) {
        if(arr[minIndex] > arr[j]) {
            minIndex = j;
        }
        
        }
        swap(arr[minIndex],arr[i]);
    }
}
int  main() {
    int arr[5] = {3,2,6,8,9};
    sort(arr,5);
     for(int i = 0;i<5;i++) {
    cout << arr[i] << " ";
     }

}
*/

//using recursion

        
#include<iostream>
using namespace std;

void sort (int * arr ,int n) {
   // base case 
   if (n == 0|| n==1) {
    return;
   }
    
        int min = __INT16_MAX__;
           int  temp = 0;
        for(int j=0;j<n;j++) {
        
     
        if(min > arr[j]) {
            min = arr[j];
            temp = j;
        }
        }
        swap(arr[0],arr[temp]);
        sort(arr+1,n-1);
    
        
        
        
}
int  main() {
    int arr[5] = {3,2,6,8,9};
    sort(arr,5);
     for(int i = 0;i<5;i++) {
    cout << arr[i] << " ";
     }

}