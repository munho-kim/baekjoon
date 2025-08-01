N = int(input())
arr = []

temp = input().split()
for i in range(N):
    arr.append(int(temp[i]))
arr.sort()

M = int(input())
data = []

temp2 = input().split()
for i in range(M):
    data.append(int(temp2[i]))

for i in range(M):
    search = data[i]
    
    low_index, high_index = 0, N - 1
    is_find = False # 탐색 성공했는지 체크
    while low_index <= high_index:
        mid_index = (low_index + high_index) // 2
        
        if search > arr[mid_index]:
            # 왼쪽을 제거
            low_index = mid_index + 1
        elif search < arr[mid_index]:
            high_index = mid_index - 1
        else:
            print(1)
            is_find = True
            break
            
    if is_find == False:
        print(0)