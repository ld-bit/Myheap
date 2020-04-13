#include<stdio.h>
#include"heap.h"
void test()
{
  int arr[]={10,9,8,7,6,5,4,3,2,1};
  Heap hp;
  heapCreate(&hp,arr,10);
  printfHeap(&hp);
}
int main(void)
{
  test();
  return 0;
}
