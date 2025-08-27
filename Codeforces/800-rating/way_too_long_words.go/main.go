package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n) // read number of words

	for i := 0; i < n; i++ {
		var word string
		fmt.Scan(&word)

		if len(word) > 10 {
			// first letter + number in middle + last letter
			middle := len(word) - 2
			fmt.Printf("%c%d%c\n", word[0], middle, word[len(word)-1])
		} else {
			fmt.Println(word)
		}
	}
}
