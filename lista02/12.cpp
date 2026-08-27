#include <iostream>
#include "lista02.h"
 
using namespace std;
 
int main (){
     
    int inArray[50];
    filArray(10, inArray, 50);
    
    int outArray[50];

    crescentOrder(inArray, 50, outArray);
     
}
 
void crescentOrder(int *in, size_t size, int *out){
     
    for (int i = 0; i < size; i++){
        for (int j = 1; j < = size; j++){
        out[i] = out[j];

         
    }
     
     
     
}
