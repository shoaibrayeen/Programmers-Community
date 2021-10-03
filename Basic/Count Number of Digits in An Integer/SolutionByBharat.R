numberOfDigits <- function(n) {
    c = 0
    if ( n == 0) {
        c = 1
    }
    while (n > 0) {
      c =  c + 1
      n = n %/% 10
    }
    print(paste("Number of the digits is :",c))
}


num <- sample(100 : 100000000, 1)
print(paste("Random Number is :", num))
numberOfDigits(num)
