#include "stdio.h"

struct {
  int x;
  int *xPointer;
  size_t xSize;
} memoryList;

void getDetailsAboutInt(int x) {
  memoryList.x = x;
  memoryList.xPointer = &x;
  memoryList.xSize = sizeof(x);

  printf("\nVariable value >> %d\n", memoryList.x);
  printf("Variable memory reference: >> %p\n", memoryList.xPointer);
  printf("Variable size >> %zu bytes\n\n", memoryList.xSize);
}

int main(void) {
  int x = 0;
  int num = 0;

  while (x == 0) {
    printf("[Progam made by Jumana]\nType a number and press enter >> \n");
    scanf("%d", &num);
    getDetailsAboutInt(num);
  }
}