def leap_year(year):
	if year % 4 == 0:
		return 'Yes'
	else:
		return 'No'

year = int(input("Year:"))
print(leap_year(year))
