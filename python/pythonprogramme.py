print("hello world!! all basic programmes in python . . . \n")
print("1: add two numbers in python using user input. ")
x = int(input("\nenter first integer: "))
y = int(input("\nenter second integer: "))
z = (x+y)
print("\n",z," is the sum of integers.")

print("2: array in python . . .")
n = [2,3,4,3,5,33,3]
print("elements in array n: ")
for i in range (len(n)):
    print(n[i], end = " ") # end to add spaces instead of new line
    