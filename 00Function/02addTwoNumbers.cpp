#include<iostream>
using namespace std;

int add (int num1, int num2){
        int sum ;
        sum = num1+num2;

        return sum;
}

int main (){
    int num1;
    cout<<"enter num1 -:";
    cin>>num1;
    cout<<endl;
    int num2;
    cout<<"enter num2 -:";
    cin>>num2;
   cout<<"sum of two number is ";
    cout<<add(num1, num2)<<endl;
    cout<<add(36, 45);
}