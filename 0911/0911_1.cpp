#include <stdio.h>

int main() {
    char s[17]; 
	int v=0;
    scanf("%16s", s);
    
    for(int i=0;i<16;i++) v = (v<<1) | (s[i]-'0');
    
    printf("%d\n", v);
}

