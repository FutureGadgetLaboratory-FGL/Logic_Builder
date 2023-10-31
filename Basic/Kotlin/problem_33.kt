/*
Write a program to print the following pattern:
1 
2 3 
4 5 6
7 8 9 10
*/

fun main() {
    var number = 1
    for (i in 1..4) {   
        for (y in 1..i){
			print(number++)
            print(" ")
        }
        println();
    }
}
