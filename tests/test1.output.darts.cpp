#include "test1.output.darts.h"
using namespace darts;
using namespace std;
/*Function: sum, ID: 1*/
int sum(int n) {
    int i;
    int s = 0;
    for (i = 0; i < n; ++i) {
        s += i;
    }
    return s;
}
{
/*sum:1*/
/*CompoundStmt:7*/
int i;
int s = 0;
for (i = 0; i < n; ++i) {
    s += i;
}
return s;
}
/*Function: main, ID: 2*/
int main() {
    int s = sum(100);
    return 0;
}
{
getOMPNumThreads();
getOMPSchedulePolicy();
getTPLoopThresholds();
getNumTPs();
affin  = new ThreadAffinity(ompNumThreads/NUMTPS - 1, NUMTPS, COMPACT, getDARTSTPPolicy(), getDARTSMCPolicy());affinMaskRes = affin->generateMask ();
myDARTSRuntime = new Runtime(affin);
RuntimeFinalCodelet = &(myDARTSRuntime->finalSignal);
/*main:2*/
/*CompoundStmt:16*/
int s = sum(100);
return 0;
}
