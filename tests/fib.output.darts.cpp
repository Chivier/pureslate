#include "fib.output.darts.h"
using namespace darts;
using namespace std;
 long long  fib_results [41]  = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155};
static long long par_res  ;
static long long seq_res  ;
/*Function: fib_seq, ID: 1*/
long long fib_seq(int n) {
/*fib_seq:1*/
/*CompoundStmt:16*/
int x, y;
if (n < 2)
    return n;
x = fib_seq(n - 1);
y = fib_seq(n - 2);
return x + y;
}
/*Function: fib, ID: 2*/
long long fib(int n) {
/*fib:2*/
/*CompoundStmt:30*/
long long x, y;
if (n < 2)
    return n;
x = fib(n - 1);
y = fib(n - 2);
return x + y;
}
/*Function: fib0, ID: 3*/
void fib0(int n) {
/*fib0:3*/
/*CompoundStmt:44*/
par_res = fib(n);
{
/*CompoundStmt:47*/
if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT) {
    fprintf(stdout, "Fibonacci result for %d is %lld\n", n, par_res);
}
}
}
/*Function: fib0_seq, ID: 4*/
void fib0_seq(int n) {
/*fib0_seq:4*/
/*CompoundStmt:52*/
seq_res = fib_seq(n);
{
/*CompoundStmt:55*/
if (bots_verbose_mode >= BOTS_VERBOSE_DEFAULT) {
    fprintf(stdout, "Fibonacci result for %d is %lld\n", n, seq_res);
}
}
}
/*Function: fib_verify_value, ID: 5*/
long long fib_verify_value(int n) {
/*fib_verify_value:5*/
/*CompoundStmt:60*/
if (n < 41)
    return fib_results[n];
return (fib_verify_value(n - 1) + fib_verify_value(n - 2));
}
/*Function: fib_verify, ID: 6*/
int fib_verify(int n) {
/*fib_verify:6*/
/*CompoundStmt:72*/
int result;
if (bots_sequential_flag) {
    if (par_res == seq_res)
        result = 1;
    else
        result = 2;
} else {
    seq_res = fib_verify_value(n);
    if (par_res == seq_res)
        result = 1;
    else
        result = 2;
}
return result;
}
