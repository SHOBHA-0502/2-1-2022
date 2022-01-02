#include<iostream>
using namespace std;

int main() {
	int n ;
    cin>>n ;
    
    int x =0;
    while(n/10 !=0){
        
        x = x*10 + n%10;
        n = n/10;
        if(n/10==0){
        x =x*10 + n%10;
        }
        
    }
    cout<<x<<endl;
    
	
}
