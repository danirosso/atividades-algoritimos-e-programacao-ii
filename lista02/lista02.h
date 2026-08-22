char menu(char *options, int numOptions);
 
char menu(char *options, int numOptions){
     
    char choice; 
    choice = getchar();
    while (getchar() != '\n'); 
     
    if (choice == 'q' || choice == 'Q') exit(0); 
     
    for (int i = 0; i < numOptions; i++){
        if (options[i] == choice) return choice;
    }
     
    printf("Wrong Option, please choose again.\n"); 
     
    return '\0';
}
