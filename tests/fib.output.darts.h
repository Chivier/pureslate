#ifndef _fib_output_darts_h_
#define _fib_output_darts_h_
#ifndef __DARTS_
#define __DARTS_
#endif
#include "bots.h"
#include "fib.h"
#include <unistd.h>
#include <time.h>
#include <sys/time.h>
#include <limits.h>
#include "utils.h"
#include <numa.h>
#include "darts.h"
#include "ompTP.h"
#include "tbb/concurrent_vector.h"
#include <mutex>
int fib_verify(int n) ;
long long fib_verify_value(int n) ;
void fib0_seq(int n) ;
void fib0(int n) ;
long long fib(int n) ;
long long fib_seq(int n) ;
extern int DARTS_CODELETS_MULT;
extern int NUMTPS;
extern size_t numOfCUs;
extern darts::Codelet* RuntimeFinalCodelet;
extern darts::ThreadAffinity *affin;
extern bool affinMaskRes;
extern darts::Runtime *myDARTSRuntime;
extern std::vector< std::vector < void* > > threadFunctionStack;
extern size_t ompNumThreads;
extern int ompSchedulePolicy;
extern int ompScheduleChunk;
extern void omp_set_num_threads(unsigned long numThreadsToSet);
extern int omp_get_num_threads();
extern int omp_get_max_threads();
extern int omp_get_num_procs();
extern double omp_get_wtime();
extern void omp_init_lock(omp_lock_t * lock);
extern void omp_destroy_lock(omp_lock_t * lock);
extern void omp_set_lock(omp_lock_t * lock);
extern void omp_unset_lock(omp_lock_t * lock);
#endif
