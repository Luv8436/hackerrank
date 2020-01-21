def main(x,y,z,n):
    coordinates = []
    for i in range(x+1):
        for j in range(y +1):
            for k in range(z +1):
                if not (i+j+k == n):
                    coordinates.append([i,j,k])
    
    print(coordinates)


if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    main(x,y,z,n)
