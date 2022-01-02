#include<iostream>
using namespace std;

int main() {
	int n ;
    cin>>n ;
    int base =1;
    int dec=0 ;
    int temp = n ;
    while(temp ){
        int r;
        r = temp%10;
        temp = temp /10;
        
        dec += r*base;
        base *= 2;
        //cout<< "//"<<endl;
        //cout<< dec <<endl;
    }
     cout<< dec ;

	
}