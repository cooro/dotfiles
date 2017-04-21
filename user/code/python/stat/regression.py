import math

x = [0,   2,   3,   5,   7,   7]
y = [6.5, 3.7, 3.1, 2.4, 1.3, 0.3]
xy = []
xsq = []

for i in range(0, len(x)):
    xy.append(x[i] * y[i])
for i in range(0, len(x)):
    xsq.append(x[i] * x[i])

x_avg = sum(x) / len(x)         # avg of x's
y_avg = sum(y) / len(y)         # avg of y's
xy_avg = sum(xy) / len(xy)      # avg of x*y's
xsq_avg = sum(xsq) / len(xsq)   # avg of x*x's

x_avg_sq = x_avg * x_avg    # square of the avgs of x

m = ((x_avg * y_avg) - xy_avg) / (x_avg_sq - xsq_avg)
b = y_avg - (m * x_avg)

print("m is", m)
print("b is", b)
