/*
Write a Program to Print the first 10 Fibonacci numbers without recursion
*/

// Solved by arpit-619

let f0 = 0;
println(f0);

let f1 = 1;
println(f1);

for(let i = 2; i < 10; i++)
{
    let fi = f1 + f0;
    println(fi);
    
    f0 = f1;
    f1 = fi;
}
