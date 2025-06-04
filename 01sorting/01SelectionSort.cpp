// selction sort is the basic approach of sorting with TC O(n^2)
// select any element and compare it with all element, if element is lesser then first, swap each other.
#include<iostream>
using namespace std;

int SS(int arr[] , int n ){
        for (int i =0 ; i < n-1 ; i++){
            int min=i;
            for (int j = i+1 ; j < n ;j++){
                if (arr[j]<arr[min]){
                    min = j;
                }
            }
            swap(arr[min], arr[i]);
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