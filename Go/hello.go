package main

import "fmt"
import "io/ioutil"
import "os"

func main() {
	data, err := ioutil.ReadFile(os.Args[1])
	if err != nil {
		panic(err)
	}
	fmt.Println(string(data))

}