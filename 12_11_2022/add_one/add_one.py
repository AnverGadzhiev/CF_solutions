def addOne(number, op_quant=1):
    '''
    Works now for only operation
    '''
    digits = [str(number).count(str(digit)) for digit in range(10)]
    
    def operation(digits):
        nines = digits[-1]
        # print(digits)
        digits[1:] = digits[:9]
        digits[0], digits[1] = nines, digits[1] + nines
        # print(digits)
    
    for op in range(op_quant):
        operation(digits)
    
    return sum(digits)


def printAnswer(input):
    print(addOne(input[0], input[1]))

def getInputData():
    number, op_quant = map(int, input().split())
    return number, op_quant

def test():
    tests_number = int(input())
    for test in range(tests_number):
        printAnswer(getInputData())

if __name__ == '__main__':
    test()