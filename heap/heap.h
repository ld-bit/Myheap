#pragma once
typedef int Type;
typedef struct Heap{
  Type* array;
  int size;
  int capacity;
}Heap;
void Swap(Type* array,int left,int right);
void heapCreate(Heap* hp,Type* array,int size);
void shiftDown(Type* array,int size,int parent);
void shiftUp(Type* array,int childe);
void printfHeap(Heap* hp);
