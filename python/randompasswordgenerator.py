import random
import string

print("ascii lettters : ", string.ascii_letters)
print("\npunctuations : ", string.punctuation)
print("\ndigits : ",string.digits)

length = int (input("\nenter length of the passowrd : "))

random_number = string.ascii_letters
random_number = random_number + string.digits
random_number = random_number + string.punctuation

password =""

for i in range(length):
    password = password + random.choice(random_number)
print("your password is : ", password)