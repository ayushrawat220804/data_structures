def is_happy_number(num):
    seen = set()
    while num != 1 and num not in seen:
        seen.add(num)
        num = sum(int(digit) ** 2 for digit in str(num))
        return num == 1
number = int (input("enter a number : "))
x = int(input("enter number of loops: "))
loop = x
for i in number:
    if (x != 0):
        if is_happy_number(number):
    print(f"{number} is a happy number . . . ")
    else :
    print (f"{number} is not a happy number. ")
else:
    print("okkk")