tests = int(input())

while(tests > 0):
    tests -= 1
    enemies = int(input())
    boses_dif = [int(x) for x in input().split()]

    friend_turn = True
    skips = 0

    i = 0
    while (i < enemies):
        if (enemies-i == 1):
            if(friend_turn and boses_dif[i] == 1):
                    friend_turn = not friend_turn
                    skips += 1
                    i += 1
            else:
                friend_turn = not friend_turn
                i += 1
        else:
            if(friend_turn):
                if(boses_dif[i] == 1):
                    #11
                    if (boses_dif[i+1] == 1):
                        friend_turn = not friend_turn
                        skips += 1
                        i += 1
                    #10
                    else:
                        friend_turn = not friend_turn
                        skips += 1
                        i += 2
                elif(boses_dif[i+1] == 1):
                    friend_turn = not friend_turn
                    i += 1
                else:
                    friend_turn = not friend_turn
                    i += 2
            else:
                if(boses_dif[i+1] == 1):
                    friend_turn = not friend_turn
                    i += 2
                else:
                    friend_turn = not friend_turn
                    i += 1

    print(skips)
