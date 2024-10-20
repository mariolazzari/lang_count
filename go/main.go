package main

import (
	"fmt"
	"time"
)

func main() {
	count := 1000000000
	start := time.Now()

	for i := 0; i < count; i++ {

	}

	end := time.Now()

	fmt.Printf("Elapsed: %v\n", end.Sub((start)))
}
