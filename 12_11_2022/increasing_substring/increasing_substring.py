def MaxLengthOfIncreasingSubstr(arr, n):
    arr.append(-1)
    cur_len, max_len = 1, 1
    for i in range(len(arr) - 1):
        if arr[i] < arr[i + 1]:
            cur_len += 1
            max_len = max(cur_len, max_len)
        else:
            cur_len = 1
    return max_len
    

def main():
    arr_len = int(input())
    arr  = list(map(int, input().split()))
    # for i in range(arr_len):
    #     arr.append(int(input()))
    print(MaxLengthOfIncreasingSubstr(arr, arr_len))     
        
if __name__ == '__main__':
    main()
