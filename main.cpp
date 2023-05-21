#include <iostream>

#include "lib.h"
int main(){
 char i;
    cin>>i;
    bool a;
    a= conversione(&i);
    if (a){
        cout<<i<<endl;
    }
    else{
        cout<<"errore"<<endl;
    } 
  
  
  return 0;
}
