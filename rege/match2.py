import re

line = "Cats are smarter than dogs"

matchObj= re.match('(.*)are (.*?).*', line, re.M|re.I)

print("matchObj.group(): ", matchObj.group())
print("matchObj.group(0): ", matchObj.group(1))
print("matchObj.group(0): ", matchObj.group(2))