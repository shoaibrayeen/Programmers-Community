# Contribution Guidelines

## Table of Contents
- [Adding your solution to the repository by making A Pull Request](#Adding-your-solution-to-the-repository-by-making-A-Pull-Request)
- [Updating your Pull Request](#updating-your-pull-request)
- [Sample Code](#Sample-Code)
- [How to write a Function in C++](#How-to-write-a-Function-in-C++)


## Adding your solution to the repository by making A Pull Request

If you want to add something awesome to contribute to the repository, this is how you do it.

You'll need a [GitHub account](https://github.com/join)!
1. Go to given file where you could see the problem.
2. See the constraints, input and output formats of the problem and write your function accordingly. (Would help you to write a clean code.)
3. Run your solution on local machines and check for some test cases.
4. Click on __create new file__ in that folder only.
5. Copy your code there and with SolutionByA.cpp [ A would be Your Name - Like SolutionByShoaib.cpp ]
6. After copying, click on __propose new file__.[ At the Bottom]
7. Then You'd be redirected to new page, where you need to click on __create pull request__.
8. Add your comments or anything you want to tell abour you solution.
9. Then Click on __create pull request__ and write one line description in box above the button.
10. Your solution is pushed in the repository. 

## Updating your Pull Request

Sometimes, Your pull request needs some modifications before merging it to the repository. This is normally due to wrong file extension or because your PR fails. 

## Sample Code
1. A working and neat Program should be pushed.
2. The variable names and function names should be related to its purpose.
3. Write your programs in the form of function(s)
4. The program should in indented.
5. You should push the solution to the mentioned file.
Here's a [code](./Sample%20Code) you need to see before writing your code.

## How to write a Function in C++

```cpp
    /*
        Example to write code on the given file.
        LCS of Two String
    */
    
int Calculate_LCS_Length_Using_DP( string firstString, string secondString )  { 

   long sizeOfFirstString = firstString.length();
   long sizeOfSecondString = secondString.length();
   
   int Table[sizeOfFirstString + 1 ][sizeOfSecondString + 1 ]; 
   
   for (int i = 0; i <= sizeOfFirstString; i++ ) { 
   
     for (int j = 0; j <= sizeOfSecondString; j++ ) { 
     
       if (i == 0 || j == 0) {
         Table[i][j] = 0; 
       }
       
       else if ( firstString[i-1] == secondString[j-1] ) {
         Table[i][j] = Table[i-1][j-1] + 1;
       }
   
       else {
         Table[i][j] = max( Table[i-1][j] , Table[i][j-1] ); 
       }
       
     } 
     
   } 
   
   return Table[sizeOfFirstString][sizeOfSecondString]; 
}

```


```cpp
    /*
        to check any contraints or to decide anything : Always use bool
    */
bool check() {
    if (condions satisfies) {
        return true;
    }
    else {
        return false;
    }
}
```
