#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    printf("Digite: ");
    char leitor[100];
    fgets(leitor, 100, stdin);
    for(int i = 0; i < (int)strlen(leitor); i++){
        if(leitor[i] >= 'a' && leitor[i] <= 'z')
            leitor[i] = toupper(leitor[i]);
        else
            leitor[i] = tolower(leitor[i]);
    }
    printf("%s", leitor);
    return 0;
}