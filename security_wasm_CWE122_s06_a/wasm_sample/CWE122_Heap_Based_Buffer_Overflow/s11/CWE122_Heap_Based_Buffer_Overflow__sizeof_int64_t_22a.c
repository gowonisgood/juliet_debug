/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22a.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__sizeof.label.xml
Template File: sources-sink-22a.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Initialize the source buffer using the size of a pointer
 * GoodSource: Initialize the source buffer using the size of the DataElementType
 * Sink:
 *    BadSink : Print then free data
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the source function */
int CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badGlobal = 0;

int64_t * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badSource(int64_t * data);

void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badGlobal = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badSource(data);
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the source functions. */
int CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Global = 0;
int CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Global = 0;

/* goodG2B1() - use goodsource and badsink by setting the static variable to false instead of true */
int64_t * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Source(int64_t * data);

static void goodG2B1()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Global = 0; /* false */
    data = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Source(data);
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the if in the source function */
int64_t * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Source(int64_t * data);

static void goodG2B2()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Global = 1; /* true */
    data = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Source(data);
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}

void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good()
{
    goodG2B1();
    goodG2B2();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
 * its own for testing or for building a binary to use in testing binary
 * analysis tools. It is not used when compiling all the testcases as one
 * application, which is how source code analysis tools are tested.
 */

#ifdef INCLUDEMAIN

#ifdef __cplusplus
#define WASM_EXPORT __attribute__((visibility("default"))) extern "C"
#else
#define WASM_EXPORT __attribute__((visibility("default")))
#endif
WASM_EXPORT int main(int argc, char * argv[])
{
    /* seed randomness */
    // srand( (unsigned)time(NULL) );
#ifndef OMITGOOD
    printLine("Calling good()...");
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
