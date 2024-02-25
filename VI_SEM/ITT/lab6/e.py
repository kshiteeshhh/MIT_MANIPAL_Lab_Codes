import re
text = input("enter the main string")
findS = input("enter the string to search for")
repS = input("enter the string to replace with")
new_text = re.sub(findS, repS, text)
print(new_text)
