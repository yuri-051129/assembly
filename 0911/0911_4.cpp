#include <stdio.h>

int main() {
    int n;
    char h[9];
    char hex[] = "0123456789ABCDEF";
    
    scanf("%d",&n);
    
    for(int i=7;i>=0;i--) h[7-i] = hex[(n>>(i*4))&0xF];
    h[8]='\0';
    
    printf("%s\n",h);
}

