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
       }else{
           check = 1;
           count++;
       }
    }
    printf("số ký tự là chữ cái có trong chuỗi la: %d", count - 1);
}
