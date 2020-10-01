#include <stdio.h>

int fact ( int n ) ;

int main ( )

{

    int n;
    printf ( "Enter A Positive Integer : \n" ) ;
    scanf ( "%d" , & n ) ;

    if ( n >= 0 )

    {

        printf ( "Factorial Of %d Is : %d \n" , n , fact ( n ) ) ;

    }

    else

    {
        
        printf ( "Please Enter A Positive Integer \n" ) ;

    }

    return ( 0 ) ;
    
}

int fact ( int n )

{

    if ( n == 0 || n == 1 )

    {

        return ( 1 ) ;

    }

    else 

    {

        return ( n * fact ( n - 1 ) ) ;

    }

}