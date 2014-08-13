given_array = []
user_input = ""
print "Enter elements of array (input incorrect number or empty line to finish):"
while(True):
    try:
        user_input = input("element = ")
        given_array.append(float(user_input))
    except:
        break

sum = 0
for element in given_array:
    sum += element
print "Sum: =", sum
