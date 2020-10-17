package main

import (
	"fmt"
	"unicode"
)

func main() {
	var x string
	for {
		fmt.Printf("Please enter a letter : ")
		_, err := fmt.Scan(&x)
		if err != nil || len(x) > 1 {
			fmt.Println("Please enter a valid letter!")
		} else if !unicode.IsLetter(rune(x[0])) {
			fmt.Println("Please enter a valid letter!")
		} else {
			break
		}
	}
	fmt.Println(x)
	fmt.Println("Output =", vowelOrConsonant(x[0]))
}

func vowelOrConsonant(letter byte) string {
	letter = byte(unicode.ToLower(rune(letter)))
	switch letter {
	case 'a', 'e', 'i', 'o', 'u':
		return "Vowel"
	default:
		return "Consonant"
	}
}
