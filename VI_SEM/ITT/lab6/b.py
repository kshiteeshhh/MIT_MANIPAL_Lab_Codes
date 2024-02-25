import string
temp = input("input string\n")
temp = temp.translate(str.maketrans('', '', string.punctuation))
print(temp)
