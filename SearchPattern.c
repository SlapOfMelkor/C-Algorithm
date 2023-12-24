#include <stdio.h>


void searchP(const char* text) {
    char p1[40];
    char p2[40];//KLAVYEDEN GIRIS YAPMANA GEREK YOK
    scanf("%s",p1);
    scanf("%s",p2); 
    int uzunluk = 0;  
    while (p1[uzunluk] != '\0') {
        uzunluk++;
    }
    const char* ilkptr = strstr(text, p1);//STRSTR KULLANMA
    const char* ikiptr = strstr(text, p2);
    int indexT= 0;
    int indexS= 0;
    if (ilkptr != NULL) {
       indexS = ilkptr - text + uzunluk + 1;      
    } 
    if (ikiptr != NULL) {
        indexT = ikiptr - text + 1;
    }  
    if ((indexT - indexS)<=2 )
    {
        printf("Pattern Mevcut :(");
    }else{
        printf("Pattern Mevcut Degil :)");
    }
}
int main() {
    const char* text = "HNJESSSTESTGES12321TESTMNFJJ";
    searchP(text);
    return 0;
}
