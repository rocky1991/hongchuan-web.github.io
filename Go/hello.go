package main

import "fmt"
import "io/ioutil"
import "io"
import "os"
import "time"
// import "strings"
import "regexp"
// import 	"strings"
import 	"strconv"
// import "math/rand"
// import "math"

// func add(x, y int) int {
// 	return x + y
// }
// func subtract(x, y int) (int, int, int) {
// 	return x, y , x-y
// }

// var c, python, java bool
func main() {
	var i int = 5
	fmt.Println(strconv.Itoa(i))

	// var i int = 2
	// var boo1, boo2 bool = false, false
	// fmt.Println(i, c, python, java, boo1, boo2)

	// fmt.Println(add(3, 4))

	data, err := ioutil.ReadFile(os.Args[1])
	if err != nil {
		panic(err)
	}
	fmt.Println(string(data) + "\n")
	var newData = string(data)


	fmt.Println(len(newData))
	var newData1 = ""
	var numCheck = false
	for i := 0; i < len(newData); i++ {
		numCheck = (newData[i] == '0') || (newData[i] == '1') ||(newData[i] == '2') ||(newData[i] == '3') ||(newData[i] == '4') ||(newData[i] == '5') ||(newData[i] == '6') ||(newData[i] == '7') ||(newData[i] == '8') ||(newData[i] == '9')
		if !(numCheck) {
			newData1 += string(newData[i])
		}
	}

	fmt.Println("regular expression")

	re := regexp.MustCompile("[0-9]")
	fmt.Println(re.ReplaceAllString(newData, "" ))


	// fmt.Println(newData1)

	fmt.Println("The time is", time.Now())

	// environment in which the program is executed is deterministic, so each time rand is called, same number is returned. 
	// fmt.Println(rand.Intn(100))
	// fmt.Println(rand.Intn(100))
	// fmt.Printf("Now you have %g problems \n", math.Sqrt(7))

	// fmt.Println(math.Pi)

	// a, b, c := subtract(5, 3)
	// fmt.Printf("The numbers are %d %d %d\n", a, b,c )

	file, err:= os.Create("output.txt")

	if (err != nil) {
		panic(err)
	}

	_, err = io.WriteString(file,newData1)
	if (err != nil) {
		panic(err)
	}
	file.Close()


}

