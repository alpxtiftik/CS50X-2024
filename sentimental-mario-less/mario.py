from cs50 import get_int

while(True):
    height = get_int("Height: ")

    if 0<height<9:
        break

for x in range(height):
    for y in range(height-1, x, -1):
        print(" ", end="")
    for z in range(0, x+1, 1):
        print("#", end="")
    print("")
