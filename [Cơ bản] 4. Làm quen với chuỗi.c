#include <stdio.h>
#include <string.h>
int main(void) {
    char string[1000];
    char a;
    int temp = 0;
    printf("Nhap string: ");
    fgets(string, 1000, stdin);
    int n = strlen(string);
    printf("\n nhap 1 ki tu: ");
    scanf("%c", &a);
    for(int i = n-1; i >= 0; i--) {
       if(string[i] == a) {
           temp++;
       }
    }
    printf("So ki tu co trong mang la: %d", temp);
}
