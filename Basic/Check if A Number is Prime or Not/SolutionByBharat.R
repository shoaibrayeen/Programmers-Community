# check is the number is negative, positive or zero

primeNumber <- function(num) {
    flag = 0
    # prime numbers are greater than 1
    if(num > 2) {
        # check for factors
        flag = 1
        for(i in 2:(num-1)) {
            if ((num %% i) == 0) {
                flag = 0
                break
            }
        }
    }
    if(num == 2) {
        flag = 1
    }
    if(flag == 1) {
        print(paste(num,"is a prime number."))
    } else if ( num == 1 ) {
        print(paste(num,"is neither a prime number nor a composite number."))
    }
    else {
        print(paste(num,"is not a prime number."))
    }
}


num <- sample(1 : 1000000, 1)
primeNumber(num)
