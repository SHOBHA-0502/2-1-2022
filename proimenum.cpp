#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n ;
    int d =2 ;
    bool divided = false;
    for(int i =d ; i<=n ; i++){
        if(n%d==0){
            divided = true;
            break;

        }

    }
    if(divided){
        cout<< "not prime "<<endl;
    }
    else{
        cout<< "prime"<<endl ;
    }

}