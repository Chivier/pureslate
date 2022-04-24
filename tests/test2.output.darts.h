#ifndef _test2_output_darts_h_
#define _test2_output_darts_h_
#ifndef __DARTS_
#define __DARTS_
#endif
#include <stdio.h>
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
int main(int argc, char **argv) ;
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
