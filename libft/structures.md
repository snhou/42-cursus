# Structures

## Basic

structure is a collection of variables (can be of different types) under a single name



```c
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
```

## Structure Pointer in C



* using the **( -> ) arrow operator** to access the members of the structure

```c
// C program to illustrate the structure pointer
#include <stdio.h>
  
// structure declaration
struct Point {
    int x, y;
};
  
int main()
{
    struct Point str = { 1, 2 };
  
    // p2 is a pointer to structure p1
    struct Point* ptr = &str;
  
    // Accessing structure members using structure pointer
    printf("%d %d", ptr->x, ptr->y);
  
    return 0;
}
```





{% embed url="https://www.geeksforgeeks.org/structures-c/" %}



{% embed url="https://www.programiz.com/c-programming/c-structures-pointers" %}



