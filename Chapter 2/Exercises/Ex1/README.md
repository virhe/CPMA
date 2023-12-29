1. Create and run Kernighan and Ritchie's famous "hello, world" program:
```C
#include <stdio.h>

int main(void)
{
  printf("hello, world\n");
}
```
Do you get a warning message from the compiler? If so, what's needed to make it go away?
---
I didn't end up receiving a compiler error since C99 automatically returns a 0 if main is declared to return an int, however I still added "return 0;" to improve clarity.