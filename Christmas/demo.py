import random
import time
import os
from colorama import Fore, Back, Style, init

init(autoreset=True)
max = 50

def randoms(final):
    random_numbers = []
    for i in range(random.randint(1, final)):
        random_number = random.randint(0, final)
        if len(random_numbers) > 0:
            if random_number - 1 in random_numbers or random_number + 1 in random_numbers or random_number - 2 in random_numbers or random_number + 2 in random_numbers:
                continue
        random_numbers.append(random_number)
    return random_numbers

def random_color():
    color = [Fore.RED, Fore.BLUE, Fore.WHITE, Fore.YELLOW, Fore.LIGHTYELLOW_EX]
    selected_color = random.choice(color)
    return selected_color + random_charac()

def random_charac():
    character = ['O', '#', '+']
    character = random.choice(character)
    return character

def create_christmas():
    for i in range(max):
        if i % 2 != 0:
            character = ''
            random_numbers = randoms(i)
            print(' ' * ((max-i)//2), end='')
            for j in range(i):
                character += (random_color() if j in random_numbers else Fore.GREEN + '*')
            print(character)
    print(Fore.LIGHTBLACK_EX + 'mWm'.center(max))
    print(Fore.LIGHTBLACK_EX + 'mWm'.center(max))
    print(Fore.LIGHTBLACK_EX + 'mWm'.center(max))

while True:
    create_christmas()
    #christmas_tree = create_christmas()
    #print(christmas_tree, end='', flush=True)
    time.sleep(0.6)
    os.system('cls')
