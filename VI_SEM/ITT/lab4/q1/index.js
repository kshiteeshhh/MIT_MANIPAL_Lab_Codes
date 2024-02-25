const genFibonacci=(n)=>{
    let fib=[0,1];
    for(let i=2;i<n;i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib.slice(0, n);
}

const generateTable=(n)=> {
    let table = "Number\tSquare\n";
    for (let i = 1; i <= n; i++) {
        table += i + "\t" + (i * i) + "\n";
    }
    return table;
}

let num1 = parseInt(prompt("Enter a number for Fibonacci series:", "0"), 10);
if (!isNaN(num1)) {
    let fibonacciSeries = genFibonacci(num1);
    alert("First " + num1 + " Fibonacci numbers:\n" + fibonacciSeries.join(", "));
}

let num2 = parseInt(prompt("Enter a number for squares table:", "5"), 10);
if (!isNaN(num2)) {
    let squaresTable = generateTable(num2);
    alert(squaresTable);
}