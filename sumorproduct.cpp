#include<iostream>
using namespace std;

int main() {
	int n ;
    cin>>n ;
    int p ;
    cin>>p ;
    int x =0;
    int z=1;
    
    if(p==1){
        for(int i =1 ; i<=n ; i++){
            x+=i;
            
        }
        cout<<x<<endl;
    }
    else if(p==2){
        for(int i =1 ; i<=n ; i++){
            z *= i;
        }
        cout<<z<<endl;
    }
    else{
        cout<<-1<<endl;
    }
	
}