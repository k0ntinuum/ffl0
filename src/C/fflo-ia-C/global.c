typedef double real;
typedef real* field;
typedef int64_t i64;

struct termios orig_termios;

int R = 30; //pix rows
int C = 60; //pix cols

const int F = 10; 
const int L = 500; 
typedef struct {
    int length;
    int r[L];
    int c[L];
    real a[L];
} filter;
int reading = 0;
real power = 2.0;
int r_span = 3;
int c_span = 3;
int num_filters = 7;
filter f[10];
real B[2][500][500];

i64 random_i64() {
    return arc4random() % ( (unsigned)RAND_MAX + 1);
}






