list = []
print("Enter a number, if you want to stop, press enter:")
while True:
    try:
      a = input('-->> ')
      if a == '':
          break
      a = float(a)
      print("This is the correct input! Your number: ", a)
      list.append(a)
    except ValueError:
        print("This is an incorrect input. It's not a number, try again.")
print("Your collection: ", list)

sum = 0
for number in list:
    if number > 0:
        sum += number
print("The sum of the positive elements of your collection: ", sum)
