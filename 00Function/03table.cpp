#include<iostream>
using namespace std;

int table (int num){
    for(int i =1; i<=10 ;i++ ){
        cout<<i*num<<endl;
    }
    return 0;
}
int main (){
    int num;
    cout<<"enter the number";
    cin>>num;
    table(num);
}