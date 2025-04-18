/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__sizeof.label.xml
Template File: sources-sink-15.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Initialize the source buffer using the size of a pointer
 * GoodSource: Initialize the source buffer using the size of the DataElementType
 * Sink:
 *    BadSink : Print then free data
 * Flow Variant: 15 Control flow: switch(6)
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    switch(6)
    {
    case 6:
        /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        data = (int64_t *)malloc(sizeof(data));
        // if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B1() - use goodsource and badsink by changing the switch to switch(5) */
static void goodG2B1()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    switch(5)
    {
    case 6:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    default:
        /* FIX: Using sizeof the data type in malloc() */
        data = (int64_t *)malloc(sizeof(*data));
        // if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
        break;
    }
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the switch */
static void goodG2B2()
{
    int64_t * data;
    /* Initialize data */
    data = NULL;
    switch(6)
    {
    case 6:
        /* FIX: Using sizeof the data type in malloc() */
        data = (int64_t *)malloc(sizeof(*data));
        // if (data == NULL) {exit(-1);}
        *data = 2147483643LL;
        break;
    default:
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
        break;
    }
    /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
    printLongLongLine(*data);
    free(data);
}

void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good()
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
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
