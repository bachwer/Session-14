#include <stdio.h>
#include <string.h>
int main(void) {
    char string[1000];
    printf("Nhap string: ");
    fgets(string, 1000, stdin);
    int n = strlen(string);
    for(int i = 0; i < n; i++) {
        printf("%c ", string[i]);
    }
    printf("\nco %d ki tu", n );
}
