import random


# function for prompting user for a positive integer
def positive_integer(prompt):
    while True:
        try:
            value = int(input(prompt))
            if value > 0:
                return value
        except ValueError:
            pass


n = positive_integer("Level: ")

# pick a random integer
y = random.randint(1, n)

# loop
while True:
    x = positive_integer("Guess: ")

    # compare x to y
    if x < y:
        print("Too small!")
    elif x > y:
        print("Too large!")
    else:
        print("Just right!")
        break
