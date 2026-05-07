#include <ctype.h>
#include <stdio.h>

int main() {
       char c;

       if (scanf("%c", &c) != 1) {
              return 1;
       }

       printf("%c", tolower((unsigned char)c));
       return 0;
}
