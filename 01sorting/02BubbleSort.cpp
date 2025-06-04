// simplest sorting approach, first element is compare with next element, is first is greater than second , swap each other.
#include<iostream>
using namespace std;

int SS(int arr[] , int n ){
        for (int i = 0 ; i < n ; i++){
            for (int j = i ; j < n ; j++){
                if (arr[i]>arr[j]){
                    swap(arr[i], arr[j]);
                }
            }
        }
        for (int i = 0 ; i < n ; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}

int main (){
    int arr[] = {3,5,8,1,2};
    int n = sizeof arr / sizeof arr[0];
    SS(arr ,  n );
}
