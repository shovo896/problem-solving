def pattern2(n):
    for i in range(1,n+1):
        for j in range (1,n+1):
            if i==j or i+j==n+1:
                if i+j==n+1:
                   print('/',end='')
                else:
                    print('\\',end='')
            else:
                print('*',end='')

    print('')
#Driver code 
if __name__ == "__main__":
    pattern2(27)