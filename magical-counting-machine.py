c,h,o = map(int,input().split())

co = (2 * o - h) // 4
ho = (h - 2 * c + 2 * co) // 2
cho = (c - co) // 6


        
print("{} {} {}".format(ho,co,cho))
