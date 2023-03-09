import math

def candiesDistribution(n):
    arr = [0]
    for i in range(1, n + 1):
        if (n - sum(arr) > 2 * i):
            arr.append(i)
        else:
            arr.append(n - sum(arr))
            break
    return len(arr) - 1, arr[1:]
    

def printData(quantity):
    result = candiesDistribution(quantity)
    print(result[0])
    print(*result[1])
    # print("--------------\n") 

def getData():
    return int(input())

def test():
    tests = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    return tests

def main():
    printData(getData())
    # for t in test():
    #     print(f'testcase {t}')
    #     printData(t)
    
if __name__ == '__main__':
    main()