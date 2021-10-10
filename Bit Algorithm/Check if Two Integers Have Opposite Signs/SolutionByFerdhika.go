package main

import "fmt"

func main() {
	fmt.Println("Enter number a: ")
	var a, b int
	fmt.Scanln(&a)
	fmt.Println("Enter number b: ")
	fmt.Scanln(&b)
	if a*b < 0 {
		fmt.Printf("Yes")
	} else {
		fmt.Printf("No")
	}
}
