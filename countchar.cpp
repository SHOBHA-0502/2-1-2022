// #include<iostream>
// using namespace std;

// int main(){
// string str  ;
//     str = cin.get();
//     cout<< str<<"/////"<< endl ;
//     int count =0 ;
//     int spaces =0 ;
//     int ch =0;
//     //cout<< str.length()<<endl;
//     for(int i =0 ;i< str.length();i++){
//         //cout<<str[i]<<endl;
//         if(str[i]>='0'&& str[i]<='9'){
//             count ++;
//            // cout<<"//"<<endl;
//         }
//         else if(str[i]==' '|| str[i]=='\n'|| str[i]=='\t'){
//             spaces++;
//             //abc def4 5$abc def4 5$cout<<"pp"<<endl;
//         }
        
//         else{
//          ch++;
//          //cout<<str[i]<<";;"<<endl ;
//         }
//     }
    
//     cout<< ch-1 <<" "<< count<<" "<<spaces << endl;
    
   
// }

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
        c =cin.get();
        //cout<<str[i]<<endl;
        if(c >='0'&& c<='9'){
            count ++;
           // cout<<"//"<<endl;
        }
        else if(c ==' '|| c =='\n'|| c =='\t'){
            spaces++;
            //abc def4 5$abc def4 5$cout<<"pp"<<endl;
        }
        
        else{
         ch++;
         //cout<<str[i]<<";;"<<endl ;
        }
    }
    
    
    cout<< ch <<" "<< count<<" "<<spaces << endl;
    
   
}
// ////////////////////////////
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
        
        else if(c>='a' && c<='z'){
         ch++;
         //cout<<str[i]<<";;"<<endl ;
        }
		c =cin.get();
    }
    
    
    cout<< ch <<" "<< count<<" "<<spaces << endl;
    
   
}




