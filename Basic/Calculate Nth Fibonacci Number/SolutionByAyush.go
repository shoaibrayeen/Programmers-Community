package main

import (
	"fmt"
)

func main() {
	var x int
	for {
		fmt.Printf("Please enter a positive number N : ")
		_, err := fmt.Scan(&x)
		if err != nil {
			fmt.Println("Please enter a valid integer!")
		} else if x <= 0 {
			fmt.Println("You need to enter a positive integer!")
		} else {
			break
		}
	}
	fmt.Println("N =", x)
	fmt.Println("Output =", fib(x))
}

// Function to find Nth fibonacci number
// Takes an integer parameter - Nth
// Returns an integer i - Nth fibonacci number
func fib(Nth int) int {
	i, j, idx := 0, 1, 1
	for ; idx < Nth; idx++ {
		i, j = j, i+j
	}
	return i
}
