#include<iostream>
using namespace std;

int main(){
char c;
    c=cin.get();
    //getline(cin,str);
    //cout<< str<<"/////"<< endl ;
    int count =0 ;
    int spaces =0 ;
    int ch =0;
    //cout<< str.length()<<endl;
    while(c!='$'){
        
        //cout<<str[i]<<endl;
        if(c >='0'&& c<='9'){
            count ++;
           // cout<<"//"<<endl;
        }
        else if(c ==' '|| c =='\n'|| c =='\t'){
            spaces++;
            //abc def4 5$abc def4 5$cout<<"pp"<<endl;
        }
        
        else if (c >='a'&& c<='z'){
         ch++;
         //cout<<str[i]<<";;"<<endl ;
        }
        c =cin.get();
        
    
    }
    cout<< ch <<" "<< count<<" "<<spaces << endl;
    
    
    
   
}