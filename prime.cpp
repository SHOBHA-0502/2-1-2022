#include <iostream>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    int d =2 ; 
    bool  divided = false;
    for(int d =2 ; d<= n ; d++){
        //cout<<d << " "<<" ??"<<endl;
        for(int j = 2 ; j<d ; j++){
            //cout<< j << "[["<< d <<endl;
            //cout<< ";;"<<endl ;
            if(d%j==0){
                //cout<<"//"<<endl ;
                //cout<< d << " " << j << " true "<<endl ;
                divided = true;
               // cout<< d << " "<< j << "diided"<<endl ;
                //cout<< d <<endl;
                break;
            }
            //cout<< d << " $$" << divided<< endl;
            
        }
        if(!divided){
            cout<<  d << endl ;
        }
        divided = false ;
       
    }
}

