## CPP

### POINTERS
What is a pointer?
A pointer is a variable that stores a memory address rather than a direct value.
If you have an integer containing 10 , a pointer to that integer contains the
memory address where 10 is stored.

```cpp
int x = 10;
int *iptr = &x;
```

Memory addresses look like hexadecimal numbers. 
Example: 0x1000
These are hexadecimal representation of memory locations.

Pointers must know what type they point to. You cannot have a generic pointer pointing to "something". When you declare a pointer you specify 
what type of data it points to.

Pointers enable indirect access. What do i mean by this ? With standard variable you have direct access: ```cpp  int health = 20; ```