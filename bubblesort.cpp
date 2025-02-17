//using loops

#include <iostream>
using namespace std;
void bubblesort(int arr[],int n)
{ // rounds
    for(int i = 1;i<n;i++) {
        for(int j = 0;j<n-i;j++) {

            if(arr[j] <arr[j+1]) {
                return ;
            }
            else {
                swap(arr[j],arr[j+1]);
                
            }

        }
    }
}
int main() {
    int arr[5] = {3,2,6,8,9};
    bubblesort(arr,5);
     for(int i = 0;i<5;i++) {
    cout << arr[i] << " ";
     }


}
/*
// using recursion 
#include <iostream>
using namespace std;
void sort(int * arr,int n) {
    // base case (if already sorted)
    if(n == 0 || n == 1) {
        return;
    }
    // 1 case sole kare liye hamene - largest element ko end main rakh diye
    for(int i = 0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i],arr[i+1]);
        }
      sort(arr,n-1);
    }

}
int main () {
 int arr[5] =  {2,5,1,6,9};
 sort(arr,5);
 for(int i = 0;i<5;i++) {
    cout << arr[i] << " ";
 }
 }
 */