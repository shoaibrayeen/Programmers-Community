import os

list_input = input()[1:]
list_input = list_input[:-1]

list_input = list_input.replace("”", "")
list_input = list_input.replace("“", "")
list_input = list_input.replace('"', '')
list_input = list_input.replace(" ", "")

list = list(map(str, list_input.split(",")))

print(os.path.commonprefix(list))
