#include <stdio.h>
#include <string.h>
int main(void) {
    char string[1000];
    printf("Nhap string: ");
    fgets(string, 1000, stdin);
    printf("Ki tu cua ban: \n%s", string);
    printf("Do dai: %d", strlen(string));
}
