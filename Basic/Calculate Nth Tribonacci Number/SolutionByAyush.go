package main

import "fmt"

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
	fmt.Println("Output =", trib(x))
}

func trib(Nth int) int {
	i, j, k, idx := 0, 0, 1, 1
	for ; idx < Nth; idx++ {
		i, j, k = j, k, i+j+k
	}
	return i
}
