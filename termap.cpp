#include<iostream>
using namespace std;

int main() {
	int x;
    cin>>x;
    int i =1 ;
    int count =0;
    while(count != x){
        
        int p = 3*i +2;
        i++;
        if(p%4 != 0){
            cout<<p<< " ";
            count +=1;
        }
       
        
    } 

	
}
