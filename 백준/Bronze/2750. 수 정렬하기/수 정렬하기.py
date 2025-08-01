N = int(input())
array = []
for i in range(N):
    array.append(int(input()))

for i in range(N-1):
    for j in range(N-1 - i):
        if array[j] > array[j + 1]:
            temp = array[j]
            array[j] = array[j + 1]
            array[j + 1] = temp
for i in range(N):
    print(array[i])