a = int(input())

if a <= 1000:
    for i in range(a):

        b = input()

        if len(b) == 5:
            print('3')
        elif b[0:2] == 'tw' or b[1:3] == 'wo' or b[0::2] == 'to':
            print('2')
        else:
            print(1)