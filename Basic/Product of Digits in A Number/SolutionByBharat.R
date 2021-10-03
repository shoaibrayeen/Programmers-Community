productOfDigits <- function(n) {
    p = 1
    while (n > 0) {
      r = n %% 10
      if ( r != 0) {
        p = p * r
      }
      n = n %/% 10
    }
    print(paste("Product of the digits is :", p))
}


num <- sample(20 : 10000, 1)
print(paste("Random Number is :", num))
productOfDigits(num)
