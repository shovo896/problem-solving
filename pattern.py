def pattern(n):
    #This is the upper half of the pattern '
    for i in range(1,n+1) :
        for j in range(1,i+1):
            if i > (n-j+1):
                print(" " ,end="");
            else:
                print("*",end="");
        # Right part of the pattern 
        if i+n-1 > j:
            print("",end='');
        else:
            print("*",end="");
        print();
    #This is the lower half of the pattern
    for i in range(1,n+1):
        for j in range(1,2*n ):
            # This is the left part of the pattern
            if i<j :
                print("",end='');
            else :
                print("*",end="");
        # This is the right part of the pattern
            if i < 2*n-j:
               print("",end='');
            else:
              print("*",end="");
        print();

# Driver code 
pattern(7)
