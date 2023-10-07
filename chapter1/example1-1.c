#include <stdio.h>

void main() {
   // การกำหนดตัวแปรแบบชุดอักขระ
  char firstName[] = "Elon", lastName[] = "Musk",
  address1[] = "Palo Alto", address2[] = "United",
  email[] = "elon_musk@example.com",
  carear[] = "Tesla";

  printf("\nName: ");
  printf(firstName);
  printf(" ");
  printf(lastName);
  putchar('\n');

  printf("Career: ");
  printf(carear);
  putchar('\n');
}