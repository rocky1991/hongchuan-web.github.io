package main

import "fmt"
import "io/ioutil"
import "os"
import "time"
import "math/rand"
import "math"

func add(x, y int) int {
	return x + y
}

func main() {
	fmt.Println(add(3, 4))

	data, err := ioutil.ReadFile(os.Args[1])
	if err != nil {
		panic(err)
	}
	fmt.Println(string(data))

	fmt.Println("The time is", time.Now())

	// environment in which the program is executed is deterministic, so each time rand is called, same number is returned. 
	fmt.Println(rand.Intn(100))
	fmt.Println(rand.Intn(100))
	fmt.Printf("Now you have %g problems \n", math.Sqrt(7))

	fmt.Println(math.Pi)


}