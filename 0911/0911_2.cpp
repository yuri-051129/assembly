#include <stdio.h>

int main() {
    char s[9]; 
	unsigned int v=0; 
	int d;
    scanf("%8s", s);
    
    for(int i=0;s[i];i++){
        d = s[i]>='0'&&s[i]<='9'?s[i]-'0':s[i]>='A'?10+s[i]-'A':10+s[i]-'a';
        v = (v<<4)|d;
    }
    printf("%u\n", v);
}


