#include<iostream>
using namespace std;

// factorial is not define for negative numbers;

int fact(int num){
    int facto=1;
    for (int i = num ; i>=1 ;i--){
        facto = facto*i;
    }
    cout<< facto;

    return 0;
}

int main (){
    int num ;
    cout<<"enter the number -:";
    cin>>num;
    fact(num);
}