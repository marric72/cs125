#include <stdio.h>

int main() {
  char initial;    int age;    float weight;
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your weight: ");
  scanf("%f", &weight);
  printf("Enter your letter: ");
  scanf(" %c", &initial);

  printf("Initial %c(ascii %d), Age %d, Weight %.1f\n",
         initial, initial, age, weight);
  printf("Test addition int+char %d\n", age+initial);
  printf("Test addition weight+int %.1f\n", age+weight);
  printf("Test addition weight+char %.2f\n", initial+weight);
  return 0;
}
