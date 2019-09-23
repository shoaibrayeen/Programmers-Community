# C++ Community
__These implementations are for learning purposes. They may be less efficient than the implementations in the C++ standard template library.__

# Contribution Guidelines
- A working Program should be pushed.
- The variable name should be related to its purpose.
- The program should in indented.
- You should push the solution to the mentioned file.
- Here's a sample how to write a [code and contribute](./Sample%20Code).


# How to Make A Pull Request with your solution in the given file.
- Go to given file where you could see the problem.
- See the format of the problem and write your function accordingly. (Would help you to write a clean code.)
- Click on __create new file__
- Copy your code there and with SolutionByA.cpp [ A would be Your Name - Like SolutionByShoaib.cpp ]
- After copying, click on __propose new file__.[ At the Bottom]
- Then You'd be redirected to new page, where you need to click on __create pull request__.
- Then you can add your comments or anything you want to tell abour you solution.
- Then Click on __create pull request__.
- You have pushed your solution to the repository.

## Format
- [For Indentation](https://github.com/shoaibrayeen/C-Plus-Plus-Community/blob/master/Sample%20Code/SampleCode.cpp)

## How to write a Function

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
