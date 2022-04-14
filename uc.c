#include <stdio.h>
#include <string.h>
int main() {
        char str[25];
        int i;
        printf("enter a string:\n");
        scanf("%s", str);

        for(i=0; i<=strlen(str); i++) {
                if(str[i]>=97&&str[i]<=122)
                        str[i] = str[i] - 32;
        }
        printf("upper case string is: %s\n", str);
        return 0;
}  
