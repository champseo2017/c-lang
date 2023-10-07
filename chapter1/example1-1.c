#include <stdio.h>
#include <string.h>

void main() {
   // การกำหนดและเปลียนแปลงค่าของตัวแปรด้วยฟังก์ชัน strcpy()

   char str1[100];
   char str2[100] = "";

   putchar('\n');
   strcpy(str1, "Can you see?");
   printf("str1 = ");
   printf(str1);
   putchar('\n');

   putchar('\n');
   strcpy(str2, "Yes I can C");
   printf("str2 = ");
   printf(str2);
   putchar('\n');

}