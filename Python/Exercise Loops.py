n = 0
m = int(input("Enter the number you want to check prime numbers till that number."))
while n<=m:
    n += 1
    print('The value of {} is in single figure.'.format(n))
    if n%2==1:
        print("This number is an odd integer.")
        divisor = []
        divisor.append(n)
        while n>0:
            prime = []
            if n%n and n%1 == 0:
                if n%divisor == 0:
                    print("The number {} is not a prime integer".format(n))
                else:
                    print("The number {} is a prime integer".format(n))
                    prime.append(n)
    else:
        print("This number is an even integer.")
    if n==m:
        break
print("Total number of prime integer from 1 to 10 are".format(len(prime)))