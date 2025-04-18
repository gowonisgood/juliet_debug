/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__sizeof.label.xml
Template File: sources-sink-32.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Initialize the source buffer using the size of a pointer
 * GoodSource: Initialize the source buffer using the size of the DataElementType
 * Sink:
 *    BadSink : Print then free data
 * Flow Variant: 32 Data flow using two pointers to the same value within the same function
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad()
{
    double * data;
    double * *dataPtr1 = &data;
    double * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        double * data = *dataPtr1;
        /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
        /* FLAW: Using sizeof the pointer and not the data type in malloc() */
        data = (double *)malloc(sizeof(data));
        // if (data == NULL) {exit(-1);}
        *data = 1.7E300;
        *dataPtr1 = data;
    }
    {
        double * data = *dataPtr2;
        /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
        printDoubleLine(*data);
        free(data);
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2B()
{
    double * data;
    double * *dataPtr1 = &data;
    double * *dataPtr2 = &data;
    /* Initialize data */
    data = NULL;
    {
        double * data = *dataPtr1;
        /* FIX: Using sizeof the data type in malloc() */
        data = (double *)malloc(sizeof(*data));
        // if (data == NULL) {exit(-1);}
        *data = 1.7E300;
        *dataPtr1 = data;
    }
    {
        double * data = *dataPtr2;
        /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
        printDoubleLine(*data);
        free(data);
    }
}

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good()
{
    goodG2B();
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
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
