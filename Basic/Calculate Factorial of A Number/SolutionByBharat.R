# check is the number is negative, positive or zero

factorial <- function(num) {
    if(num < 0) {
        print("Sorry, factorial does not exist for negative numbers")
    } else if(num == 0) {
        print("The factorial of 0 is 1")
    } else {
        factorial = 1
        for(i in 1:num) {
            factorial = factorial * i
        }
        print(paste("The factorial of", num ,"is",factorial))
    }
}


num <- sample(1 : 100, 1)
factorial(num)
