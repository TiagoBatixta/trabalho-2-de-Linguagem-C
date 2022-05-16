#include <stdio.h>

char *compress(char s[]){
    int j = 0;
    for (int i=0; s[i]!='\0'; i++)
        if(s[i] != ' '){
            s[j] = s[i];
            j++;}
        s[j] = '\0';
    return s;
}

int main (void){
    
    char text [] = "  um,   dois,  tres .  ";
    printf("|%s|\n", compress(text));
    
    return 0;
}
