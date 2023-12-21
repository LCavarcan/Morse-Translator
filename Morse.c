#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void minusculo(char s1[], char s2[]){
    for(int i=0;i<strlen(s1);i++) {
        s2[i] = tolower(s1[i]);
    }

    s2[strlen(s1)] = '\0';
}

int main() {
    char morse[26][7] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "-.--", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    char morseN[10][7] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};
    char frase[1000], frase2[1000];
    int n;

    printf("Digite a frase que voce deseja codificar: ");
    fflush(stdin);
    scanf("%[^\n]", frase);

    printf("\n");

    minusculo(frase, frase2);

    for(int i=0;i<strlen(frase2);i++) {
        if(frase2[i]>=97 && frase2[i]<=122) {
            n = frase2[i]-97;
            printf("%s ", morse[n]);
        }
        else if(frase2[i]>=48 && frase2[i]<=57) {
            n = frase2[i]-48;
            printf("%s ", morseN[n]);
        }
        else if(frase2[i] == 32) {
            printf("/ ");
        }
        else if(frase2[i] == 33) {
            printf("-.-.-- ");
        }
        else if(frase2[i] == 44) {
            printf("--..-- ");
        }
        else if(frase2[i] == 46) {
            printf(".-.-.- ");
        }
        else if(frase2[i] == 63) {
            printf("..--.. ");
        }
    }

    printf("\n\n");
    
    return 0;
}