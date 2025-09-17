#include <stdio.h>

int main() {
    int n; char b[33];
    scanf("%d",&n);
    
    for(int i=31;i>=0;i--) b[31-i] = ((n>>i)&1)+'0';
    b[32]='\0'; 
	
	printf("%s\n",b);
}

