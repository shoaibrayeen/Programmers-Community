package main

import "fmt"

func main() {
	var x int
	for {
		fmt.Printf("Please enter a positive year N : ")
		_, err := fmt.Scan(&x)
		if err != nil {
			fmt.Println("Please enter a valid integer!")
		} else if x <= 0 {
			fmt.Println("You need to enter a positive integer!")
		} else {
			break
		}
	}
	fmt.Println("Input =", x)
	fmt.Println("Output =", isLeapYear(x))
}

// Function to check if year is a leap year
// Takes an integer parameter - year
// Returns a string - "Yes" or "No"
func isLeapYear(year int) string {
	if year%4 == 0 {
		if year%100 == 0 && year%400 != 0 {
			return "No"
		}
		return "Yes"
	}
	return "No"
}
