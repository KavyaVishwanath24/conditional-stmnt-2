#include <stdio.h>

int
main ()
{
  int choice = 0;
  printf
    ("Pick an item: \n1. Burger,Rs129\n2. FrenchFries,Rs99\n3. Pizza,Rs239\n4. Sandwich,RS149\n5. Pasta,Rs179");
  scanf ("%d", &choice);
  switch (choice)
    {
    case 1:
      printf ("food item-Burger\n price-RS 129");
      break;
    case 2:
      printf ("food item-FrechFries\n Price-RS 99");
      break;
    case 3:
      printf ("food item-Pizza\n Price-Rs 239");
      break;
    case 4:
      printf ("food item-Sandwich\n Price-Rs 149");
      break;
    case 5:
      printf ("food item-Pasta\n Price-RS 179");
      break;

    default:
      printf ("your choice is invalid");
      break;
    }

  return 0;
}
