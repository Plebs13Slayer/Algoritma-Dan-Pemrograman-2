#include<stdio.h>
int display();

#pragma startup display
#pragma exit display

int main() {
   printf("\nSaya Dalam Function Main");
   return 0;
}

int display() {
   printf("\nSaya Dalam Function Display");
   return 0;
}
