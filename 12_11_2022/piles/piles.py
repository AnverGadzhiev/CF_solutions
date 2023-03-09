def determWinner(t, piles):
    win_positinos = ['L']
    for pile in reversed(piles):
        if pile > 1: win_positinos.append('W')
        else : 
            if win_positinos[-1] == 'L' : win_positinos.append('W')
            else : win_positinos.append('L') 
    return 'First' if win_positinos[-1] == 'W' else 'Second'

def printAnswer(input):
    print(determWinner(input[0], input[1]))

def getData():
    piles_number = int(input())
    piles = list(map(int, input().split()))
    return piles_number, piles
    
def debug():
    printAnswer((6, [1, 1, 2, 1, 2, 2]))
    
def test():
    tests_quantity = int(input())
    for i in range(tests_quantity):
        printAnswer(getData())

if __name__ == '__main__':
    test()
    # debug()
    