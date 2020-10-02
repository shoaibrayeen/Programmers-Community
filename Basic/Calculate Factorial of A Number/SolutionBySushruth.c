#include <stdio.h>

int fact ( int n ) ;

int main ( ) 

{
    
    int num ;
    scanf ( "%d" , & num ) ;
    printf ( "%d" , fact ( num ) ) ;

}

int fact ( int n ) 

{
    
    if ( n == 0 || n == 1 )

    {

   return 1;

    }
 
    else

    {

        return ( n * fact ( n - 1 ) ) ;

    }
    
}


