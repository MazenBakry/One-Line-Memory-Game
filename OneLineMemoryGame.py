# FCAI – Programming 1 – 2022 - Assignment 2
# Author: Mazen Khaled El Bakry
# Program Name: OneLineMemoryGame
# Last Modification Date: 14/3/2022






import os
import random

score1 = 0
score2 = 0
char=['A','B','C','D','E','F','G','H','I','J','A','B','C','D','E','F','G','H','I','J']
lst=[1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0]
org_lst = [1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0]
random.shuffle(char)
print("Welcome,", lst)


def player1(score1):
    num1 = int(input("please enter a Number: "))
    while (num1 > 20) or (num1 < 1):
        print("Invalid input")
        num1 = int(input("Please enter a new number between 1 and 20: "))

    num2 = int(input("please enter another Number: "))
    while (num2 > 20) or (num2 < 1):
        print("Invalid input")
        num2 = int(input("Please enter a new number between 1 and 20: "))
    lst_num1=num1-1
    lst_num2=num2-1
                                               #takes another random character from char list
    for i in range(len(lst)):
        if (lst_num1 == i):
            lst[i] = char[i]                                               #replaces number in list by random character
            a=char[i]

        if (lst_num2 == i):
            lst[i] = char[i]                                                #replaces the another number in list by random character
            b = char[i]
    print(lst)
    if a==b:
        score1=score1+1                                                   #score player1 increments by 1 if the two random characters are equal
        for i in range(len(lst)):                                         #Loops over the list if the two random characters are equal and replaces them by '*'

            if (lst_num1 == i):
                lst[i] = "*"

            if (lst_num1 == i):
                lst[i] = "*"
    else:
        for i in range(len(lst)):                                         #return to original list if the two random characters are not equal

            if (lst[i] == a):
                lst[i]=org_lst[i]

            if (lst[i] == b):
                lst[i]=org_lst[i]

    os.system('cls')
    print(lst)
    print("Player1 Score is", score1)
    print("Player2 turn")
    return score1

def player2(score2):
    num3 = int(input("please enter a Number: "))
    while (num3 > 20) or (num3 < 1):
        print("Invalid input")
        num3 = int(input("Please enter a new number between 1 and 20: "))
    num4 = int(input("please enter another Number: "))
    while (num4 > 20) or (num4 < 1):
        print("Invalid input")
        num4 = int(input("Please enter a new number between 1 and 20: "))

    lst_num3 = num3 - 1
    lst_num4 = num4 - 1

                                             #takes another random character from char list

    for i in range(len(lst)):

        if (lst_num3 == i):

            lst[i] = char[i]
            a=char[i]

        if (lst_num4 == i):

            lst[i] = char[i]
            b=char[i]
    print(lst)

    if a==b:
        score2=score2+1                                                 #score player2 increments by 1 if the two random characters are equal
        for i in range(len(lst)):                                       #Loops over the list if the two random characters are equal and replaces them by '*'


            if (lst_num3 == i):
                lst[i] = "*"

            if (lst_num4 == i):
                lst[i] = "*"
    else:
        for i in range(len(lst)):                                       #return to original list if the two random characters are not equal

            if (lst[i] == a):
                lst[i]=org_lst[i]

            if (lst[i] == b):
                lst[i]=org_lst[i]

    os.system('cls')
    print(lst)
    print("Player2 Score is", score2)
    print("Player1 turn")
    return score2

def winner(score1,score2):                                              #checks the player who wins then exit

    if (score1 > score2):
        print("Player1 is the winner with score: ", score1)
        exit()

    if (score2 > score1):
        print("Player2 is the winner with score: ", score2)
        exit()

while(True):                                                            #loops for 4 times then calls the winner function to check for the winner
    for i in range(4):
        player1(score1)
        player2(score2)
        print("Welcome,", lst)
    winner(score1, score2)                                              #if there is no winner yet loops again untill a player wins then exit