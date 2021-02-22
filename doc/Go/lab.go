package main

import (  
    "fmt"
    "io/ioutil"
    "regexp" 
    "os"
)


func main() { 

    if len(os.Args) < 2 {
		fmt.Println("Please set a file name.")
		return
	}

	// 'os.Args' contains the executed binary file name and the arguments.
	// If you command './file file.txt', 'os.Args[0]' is './file' and 'os.Args[1] is 'file.txt'.
	filename := os.Args[1] 

    data, err := ioutil.ReadFile(filename)
    if err != nil {
        fmt.Println("File reading error", err)
        return
    }
    //fmt.Println("Contents of file:", string(data))
    
    c := []byte(data)
   
    d := string(c)
   

  
    re := regexp.MustCompile("[^a-z A-Z ]+")
    o := re.ReplaceAllString( d, "" )
    //fmt.Printf(o )


    f, err := os.Create("output.txt")
    if err != nil {
        return
    }
    l, err := f.WriteString(o)
    if err != nil {
        fmt.Println(err)
        f.Close()
        return
    }
    fmt.Println(l, "Output Created")
    err = f.Close()
    if err != nil {
        fmt.Println(err)
        return
    }
   
    

  
   


    

}
