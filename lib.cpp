
#include "lib.h"
bool conversione (char* i){
    if((*i>='a')&&(*i<='z')){
        *i=(*i)-32;
        return true;
    }else if((*i>='A')&&(*i<='Z')){
        *i=(*i)+32;
        return true;
    }else{
        return false;
    }

}

