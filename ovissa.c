#include <stdio.h>
#include <string.h>

#define maxlen 100000

int main(){

    int lenst = 0;
    int i = 0;
    char userinp[maxlen];

    
    fgets(userinp, maxlen, stdin);


    for(i=0; i < strlen(userinp); i++){
        while (userinp[i] == 'u')
        {
            lenst+=1;
            i++;
        }
        
    }
    
    printf("%d",lenst);

    
    return 0;
}