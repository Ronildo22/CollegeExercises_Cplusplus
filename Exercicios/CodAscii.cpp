#include <stdio.h>
int main() {
unsigned char i;
for (i = 32; i < 255; i++)
printf("\ndecimal = %3d * hexadecimal = %2x * caracter =%1c",i,i,i);

}
 
 
// --OUTRO COD--
//#include <stdio.h>
//int main() {
//char a[100]; int i;
//for (i = 0; i < 5; i++) scanf("%c", &a[i]);
//
//for (i = 0; i < 5; i++) printf("%2c", a[i]);
//}
