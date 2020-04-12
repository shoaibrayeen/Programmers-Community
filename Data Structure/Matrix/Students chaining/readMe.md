<h1>Students Chaining</h1>

<h2>Problem Statement</h2>

You are given square like chains of students. There may be multiple chains and chain with less number of students should be embedded
inside the chain having large number of students. Each student is having an ID(may not be unique). For ex -
1   2   3   4   5  6
7   8   9  10  11  12 
13 14  15  16  17  18
19 20  21  22  23  24
25 26  27  28  29  30
31 32  33  34  35  36

Here , 
chain1 -> 1 2 3 4 5 6 12 18 24 30 36 35 34 33 32 31 25 19 13 7 
chain2 -> 8 9 10 11 17 23 29 28 27 26 20 14 
chain3 -> 15 16 22 21

Input is given in the form of Two-D array in which one or more chains may be present.
You are given a number k. Each student have to move k steps in anticlockwise direction. Student is allowed to move in its own chain only. Print the final arrangement of Two-D array after all movements.

<h2>Input</h2>

```
=> Array Dimentions
=> Array Elements
=> Number of Steps 
```

<h2>Sample Input</h2>

```
4 4       // dimention of 2D array
2         // number of steps
8 7 3 4   // 2D array
1 2 3 6
5 1 8 9
3 4 2 5
```

<h2>Sample Output</h2>

```
3 4 6 9
7 8 1 5
8 3 2 2
1 5 3 4
```