def pattern(n):
    for i in range(1,n+1):
        for j in range(1,2*n+1):
            #Left part of the pattern 
            if i<j :
                print("",end='')
            else :
                print("*",end="")
                #right part of the pattern 
            if  i <= (2*n-j) :
                print("",end='')
            else:
                print("*",end="")
            print("")

    #This is lower half of the pattern 
    #half of the pattern 
    for i in range (1,n+1):
        for j in range(1,2*n+1):
            if i > (n-j+1):
                print(" ",end="")
            else:
                print("*",end="")
                #right part of the pattern
            if (i+n)>j :
                print("",end='')
            else:
                print("*",end="")
        print("")


#Driver code 
pattern(7)

