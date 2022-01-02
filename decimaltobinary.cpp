#include<iostream>
using namespace std;
int main(){
   long long  int n ;
    cin>>n ;
    long long int temp ;
    long long int i =1;
    temp = n;
 long long int  ans =0;
    while(temp){
        int dec = temp%2;
        ans+= dec*i;
        i*=10;
        
        temp = temp/2;




    }
    cout<< ans ;

}