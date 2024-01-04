Suppose that we call scanf as follows:\
scanf("%d%f%d", &i, &x, &j);\
If the user enters\
10.3 5 6\
what will be the values of i, x and j after the call? (Assume that i and j are int variables and x is a float variable.)

---

The first %d stores 10 into i -> %f stores .3 into x -> the last %d stores 5 into j.