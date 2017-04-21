import math

sample = [9, 18, 30, 36, 42]
avgdiff = []
avg = sum(sample) / len(sample)

for i in sample:
    avgdiff.append((i - avg) * (i - avg))

smp_variance = (sum(avgdiff) / (len(sample) - 1))
pop_variance = (sum(avgdiff) / len(sample))

print ("Average is", avg)
print ()
print ("Sample variance (s^2) is", smp_variance)
print ("Smp standard deviation (s) is", math.sqrt(smp_variance))
print ()
print ("Population variance (s^2) is", pop_variance)
print ("Pop standard deviation (s) is", math.sqrt(pop_variance))
