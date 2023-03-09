def calcNumbersofSubsrDivisibleByFour(str):
    
    def processWindow(substr):
        ans = 0
        # if int(substr[0]) % 4 == 0: ans += 1
        if int(substr[1]) % 4 == 0: ans += 1
        return ans
    
    quant = 0 if int(str[0]) % 4 != 0 else 1
        
    for i in range(1, len(str)):
        substr = str[i - 1 : i + 1]
        quant += processWindow(substr)
        if int(substr) % 4 == 0:
            quant += i
        
    return quant

def giveAnswer(str):
    print(calcNumbersofSubsrDivisibleByFour(str))
    
def getData():
    return input()

def test():
    giveAnswer(getData())
    
if __name__ == '__main__':
    test()