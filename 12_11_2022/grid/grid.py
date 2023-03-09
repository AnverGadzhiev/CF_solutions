def possibOfGridRoute(rows, columns, burles):
    '''
    Define wheather there are route from cell (1, 1) to cell (m = rows, n = columns)
    '''
    return 'YES' if (rows - 1)*columns + columns - 1 == burles else 'NO' 

def main():
    tests_quantity = int(input())
    for test_case_number in range(tests_quantity):
        rows, columns, burles = map(int, input().split())
        print(possibOfGridRoute(rows, columns, burles))
        
        
if __name__ == '__main__':
    main()