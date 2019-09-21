# C++ Community
__These implementations are for learning purposes. They may be less efficient than the implementations in the C++ standard template library.__

# Contribution Guidelines
- A working Program should be pushed.
- The variable name should be related to its purpose.
- The program should in indented.
- You should push the solution to the mentioned file.
- Here's a sample how to write a [code and contribute](./Sample%20Code).

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
