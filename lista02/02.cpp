#include <iostream>
#include "menu.hpp"

using namespace std;
 
int main (){
     
    char options[] = {'a','h','p'}, chosen; 
     
    do{
        printf("Do you want to A, H or P? ");
        chosen = menu(options, sizeof(options)/sizeof(char));
    }while (chosen == '\0');
     
}
 
