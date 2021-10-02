import random
import colored
import os
import time

os.system("clear" if os.name == "posix" else "cls")

expressions = ["Perfect!", "Nice!", "Good Job!"]
possible_words = ["linux", "windows", "macos"]
encrypted_word = ""
guesses = 8
user_guess_list = []
welcome_str = "Welcome to GOD OF FIRE'S HANGMAN."
decorator = ""
global rand_index
rand_index = random.randrange(len(possible_words))

for _ in range(len(welcome_str)):
    decorator += "#"

print(colored.stylize("\n----- | Source: SwissCoding | -----\n", colored.fg("chartreuse_2a")))
print(colored.stylize(decorator, colored.fg("sandy_brown")))
print(colored.stylize(welcome_str, colored.fg("red")))
print(colored.stylize(decorator, colored.fg("sandy_brown")) + "\n")
print("Do you want to start? | Type: 'Y' to start; 'N' to quit")

decorator = ""

for _ in range(69):
    decorator += "="

def print_item_from(list):
    return possible_words[rand_index].lower()

def encrypt(item):
    word = ""
    for letter in item:
        word += "_ "
    return word + "\n"

try:
    user_input_start = input()
    if user_input_start.lower() == "y":
        print(colored.stylize(decorator, colored.fg("sandy_brown")))
        print("Guess a letter that could be present in the word.")
        print("{0}".format(encrypt(print_item_from(possible_words))))
        print("You have " + str(guesses) + " guesses! Good luck.")
        encrypted_word = "{0}".format(encrypt(print_item_from(possible_words))).split()
        while True:
            if not guesses < 1:
                rand_exp = random.randrange(len(expressions))
                user_guess = input()
                if user_guess == "" or user_guess == " ":
                    print("\nInvalid Input: <enter>")
                elif len(user_guess) > 1:
                    print("\nOnly one letter per guess!")
                else:
                    if user_guess.lower() in "abcdefghijklmnopqrstuvwxyz" and user_guess.lower() in print_item_from(possible_words):
                        if user_guess.lower() in user_guess_list and user_guess.lower() in encrypted_word:
                            print("\nDon't repeat yourself.")
                        else:
                            user_guess_list.append(user_guess.lower())
                            if len([pos for pos, char in enumerate(print_item_from(possible_words)) if char == user_guess.lower()]) == 1:
                                index = [pos for pos, char in enumerate(print_item_from(possible_words)) if char == user_guess.lower()]
                                encrypted_word[index[0]] = user_guess.lower().split()[0]
                                print(" ".join(encrypted_word))
                                print("\n" + expressions[rand_exp])
                            else:
                                index = [pos for pos, char in enumerate(print_item_from(possible_words)) if char == user_guess.lower()]
                                for ind in index:
                                    encrypted_word[ind] = user_guess.lower().split()[0]
                                print(" ".join(encrypted_word))
                                print("\n" + expressions[rand_exp])
                            if "".join(encrypted_word) == print_item_from(possible_words):
                                os.system("clear" if os.name == "posix" else "cls")
                                print("Congratulations! You made it!\nThe word was '"+print_item_from(possible_words)+"'.\n")
                                exit()
                    else:
                            print("\nI'm sorry. Try again!")
                            guesses -= 1
                            if guesses == 1:
                                print("You have "+ str(guesses) + " guess left.")
                            elif guesses != 0:
                                print("You have "+ str(guesses) + " guesses left.")
            else:
                os.system("clear" if os.name == "posix" else "cls")
                print("You have no guesses left. The word was: '" + print_item_from(possible_words) + "'\nThanks for playing!\n")
                exit()
    elif user_input_start.lower() == "n":
        os.system("clear" if os.name == "posix" else "cls")
        exit()
    else:
        os.system("clear" if os.name == "posix" else "cls")
        print("Invalid Input\n")
except KeyboardInterrupt:
    os.system("clear" if os.name == "posix" else "cls")
    print("Game quitted\n")