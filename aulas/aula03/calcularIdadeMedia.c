#include <stdio.h>

int main() {
  int Rafael, Pedro, mariaFernanda, ruanny;

  printf("Idade do Rafael: ");
  scanf("%d", &Rafael);

  printf("Idade do Pedro: ");
  scanf("%d", &Pedro);

  printf("Idade da Maria Fernanda: ");
  scanf("%d", &mariaFernanda);

  printf("Idade da Ruanny: ");
  scanf("%d", &ruanny);

  float idadeMedia;

  idadeMedia = (Rafael + Pedro + mariaFernanda + ruanny) / 4.0;

  printf("A idade média da turma é: %.2f\n", idadeMedia);

  return 0;
}
 