#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include"heap.h"
void Swap(Type* array,int child,int parents) 
{
   int tmp=array[child];
   array[child]=array[parents];
   array[parents]=tmp;
}

void heapCreate(Heap* hp,Type* array,int size)
{
   hp->array=(Type*)malloc(sizeof(Type)*size);
   hp->size=size;
   hp->capacity=size;
   memcpy(hp->array,array,sizeof(Type)*size);
   int i=0;
   for(i=(size-2)/2;i>=0;i--)
   {
    shiftDown(hp->array,hp->size,i);
   }
   
}
void shiftDown(Type* array,int size,int parents)
{
  int child=2*parents+1;
  while(child<size)
  {
    if(child+1<size&&array[child]>array[child+1])
      child++;
    if(array[child]<array[parents])
    {
      Swap(array,child,parents);
      parents=child;
      child=parents*2+1;
    }
    else 
      break;
  }
}

void shiftUp(Type* array,int childe)
{
  int parents=(childe-1)/2;
  while(parents>0)
  {
    if(array[parents]>array[childe])
    {
      Swap(array,parents,childe);
      childe=parents;
      parents=(childe-1)/2;
    }
    else 
      break;
  }
}

void printfHeap(Heap* hp)
{
  int i=0;
  for(i=0;i<hp->size;i++)
  {
    printf("%d ",hp->array[i]);
  }
  printf("\n");
}
