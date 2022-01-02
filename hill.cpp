#include<iostream>
using namespace std;

int main() {
	int n ;
	cin>>n;
    int arr[n];
    for(int i =0 ;i<n ;i++){
        cin>>arr[i];
    }
   bool is_dec =true;
   for(int i =0;i<n;i++){
       if(arr[i]==arr[i+1]){
           cout<<"//"<<endl;
           cout<< "false";
           break;
       }
       else if(arr[i]>arr[i+1]){
           cout<< arr[i]<< " "<< arr[i+1] <<"//"<<endl;
           cout<< is_dec <<endl;
           if(is_dec==false){
               cout<<"=="<<endl;
               cout<< "false";
               break;
           }
           is_dec = true;

       }
       else if(arr[i]<arr[i+1]){
           cout<<arr[i]<< " "<<arr[i+1]<< ";;"<<endl;
           is_dec = false;
       }
   }
   if( is_dec == true){
       cout<<"true";
   }
   else if(is_dec == false){
       cout<< "false";
   }
    
}
