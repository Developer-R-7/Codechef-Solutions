from sys import stdin, stdout
#a, b, c, d = [int(x) for x in stdin.readline().rstrip().split()]


T = int(stdin.readline())
for _ in range(T):
    first = list(map(int,stdin.readline().split()))
    n,m = first[0],first[1]
    totalTask = set(range(1,n+1))
    doneTask = set(map(int,stdin.readline().split()))
    remainingTask = list(totalTask - doneTask)
    remainingTask.sort()

    chef = list()
    assistant = list()

    for i in range(len(remainingTask)):
        if i%2 == 0:
            chef.append(str(remainingTask[i]))
        else:
            assistant.append(str(remainingTask[i]))
    
    print(" ".join(chef))
    print(" ".join(assistant))
    
    
    