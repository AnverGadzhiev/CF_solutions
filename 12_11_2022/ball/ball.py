def editGameLevel(cells_number, required_platform, bounce_period, level_patten, addition_time, removing_time):
    
    return 0

def printAnswer(input):
    print(editGameLevel(*input))
    
def getInputData():
    cells_number, required_platform, period = map(int, input().split())
    level_pattern = [int(cell) for cell in input()]
    addition_time, removing_time = map(int, input().split())
    return cells_number, required_platform, period, level_pattern, addition_time, removing_time

def test():
    number_of_tests = int(input())
    for i in range(number_of_tests):
        printAnswer(getInputData())
        # print(getInputData())

if __name__ == '__main__':
    test()