#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define F (1<<14)

#define CONVERT_X_TO_FP(n) (n * F)
#define CONVERT_X_TO_INT(x) (x / F);
#define CONVERT_X_TO_INT_NEAR(x) ((x>=0) ? (x + F/2)/F : (x - F/2)/F)
#define ADD(x, y) (x + y)
#define SUBTRACT(x, y) (x - y)
#define ADD_N(x, n) (x + n * F)
#define SUBTRACT_N(x, n) (x - n * F)
#define MULTIPLY(x, y) (((int64_t)x) * y / F)
#define MULTIPLY_N(x, n) (x * n)
#define DIVIDE(x, y) (((int64_t)x) * F / y)
#define DIVIDE_N(x, n) (x / n)

#define NICE_DEFAULT 0
#define RECENT_CPU_DEFAULT 0

int load_avg;

#endif
