#include <stdio.h>
#include <string.h>
int main(void) {
    char string[1000];
    int  count = 0;
    int check = 0;
    printf("Nhap string: ");
    fgets(string, 1000, stdin);
    int n = strlen(string);
    for(int i = 0; i < n ; i++) {
      if(string[i] == ' '){
          check = 0;
       }else if(check == 0){
           check = 1;
           count++;
       }
    }
    printf("So ki tu co trong mang la: %d", count);
}
