sumOfDigits <- function(n) {
    s = 0
    while (n > 0) {
      r = n %% 10
      s = s + r
      n = n %/% 10
    }
    print(paste("Sum of the digits is :", s))
}


num <- sample(1000 : 1000000, 1)
print(paste("Random Number is :", num))
sumOfDigits(num)
