# check is the number is negative, positive or zero

leapYear <- function(year) {
    if(year %% 400 == 0)
	{
	     print(paste(year,"is a leap year"))
	} else if(year %% 100 == 0)
	{
	     print(paste(year,"is not a leap year"))
	} else if(year %% 4 == 0)
	{
	     print(paste(year,"is a leap year"))
	} else
	{
	     print(paste(year,"is not a leap year"))
	}
}


num <- sample(1000 : 2021, 1)
leapYear(num)
