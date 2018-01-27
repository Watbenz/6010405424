#include "stdio.h"
#include "math.h"

int main() {
  float cost, area, extra;
  int size, pep, che, mus;
  
  printf("Welcome to My Pizza Shop!!\n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("Enter pizza size (1=s, 2=m, or 3=l): ");
  scanf("%d", &size);
  printf("Extra pepperoni? (1=yes, 0=no): ");
  scanf("%d", &pep);
  printf("Extra cheese? (1=yes, 0=no): ");
  scanf("%d", &che);
  printf("Extra mushroom? (1=yes, 0=no): ");
  scanf("%d", &mus);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  
  if (size == 1)  size = (float)10.00;
  if (size == 2)  size = (float)16.00;
  if (size == 3)  size = (float)20.00;
  
  area = M_PI * size * size / 4.00;
  
  extra = 0.00;
  if (pep) extra += area * 0.5;
  if (che) extra += area * 0.25;
  if (mus) extra += area * 0.30;
  
  cost = (5 + (2* area) + extra) * 1.5;
  
  printf("Your order costs %.2f baht.\n", cost);
  printf("Thank you.\n");
  return 0;
}