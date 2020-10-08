from random import randint
l=['Rock','Paper','Scissor']
while True:
    computer = l[randint(0, 2)]
    print('enter your choice: \n 1.Rock \n 2.Paper \n 3.Scissor')
    player=input()
    if player==computer:
        print('Tie:Computer has same choice')
        print('')
    elif player=="Rock":
        if computer=='Paper':
            print('You lose!', computer ,'cover', player)
            print("")
        else:
            print('You win!', player ,'smashes', computer)
            print("")
    elif player=="Paper":
        if computer=='Scissor':
            print('You lose!', computer ,'cut', player)
            print("")
        else:
            print('You win!', player ,'cover', computer)
            print("")
    elif player=="Scissor":
        if computer=='Rock':
            print('You lose!', computer ,'smashes', player)
            print("")
        else:
            print('You win!', player ,'cut', computer)
            print('')

    if player=='exit' or player=='Exit':
        print('thanks! to play this game')
        break
    else:
        print("please enter correct choice")
        print('')
