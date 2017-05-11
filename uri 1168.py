N = int(input())

for i in range(N):

    V = (input())

    sum = 0

    for j in V:
        if j == '0' or j == '9' or j == '6':
            sum += 6
        elif j == '1':
            sum += 2
        elif j == '2' or j == '3' or j == '5':
            sum += 5
        elif j == '7':
            sum += 3
        elif j == '8':
            sum += 7
        elif j == '4':
            sum += 4
    print('{} leds'.format(sum))

