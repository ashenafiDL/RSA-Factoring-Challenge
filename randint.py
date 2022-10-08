import random

file = open('num_list.txt', 'w')

print("start ...")

for i in range(0, 150):
    n = random.randint(2, 1000000)
    file.write(str(n)+"\n")

print("done")
file.close()
