
#include <iostream> // Header Files
using namespace std;

int fact(int n)
{
    int prod;
    if (n == 0) {
        return 1;
    }
    prod = n * fact(n - 1);
    return prod;
}

int main(int argc, char** argv)
{ // Driver Code
    System.out.println("Enter Number\t:\t");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    cout << fact(n);
}
