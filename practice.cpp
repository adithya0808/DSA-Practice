#include<bits/stdc++.h>
using namespace std;
int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}
int main(){
    int num1,num2,result;
    cin>>num1>>num2;
    result=sum(num1,num2);
    cout<<result;
    return 0;
}