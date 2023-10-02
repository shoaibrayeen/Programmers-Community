def check_leap_year (year)
  year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)
end


def check_year_number (n)
 if n < 1
   print("Oh, invalid year!\n")
   exit
 end
end

# Main
print("Enter Year: ")
year = gets.chomp.to_i
check_year_number(year)

puts check_leap_year(year)
###
