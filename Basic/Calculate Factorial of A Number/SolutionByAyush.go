package main

import (
	"fmt"
)

func main() {
	var x uint64
	for {
		fmt.Print("Please enter a non-negative integer : ")
		_, err := fmt.Scan(&x)
		if err != nil {
			fmt.Println("Please enter a valid input")
		} else if x < 0 {
			fmt.Println("Negative integers not allowed")
		} else {
			break
		}
	}
	fmt.Println("N =", x)
	fmt.Println("Output =", fact(x))
}

func fact(num uint64) uint64 {
	if num == 0 || num == 1 {
		return 1
	}
	return num * fact(num-1)
}
