/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_33.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__sizeof.label.xml
Template File: sources-sink-33.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Initialize the source buffer using the size of a pointer
 * GoodSource: Initialize the source buffer using the size of the DataElementType
 * Sinks:
 *    BadSink : Print then free data
 * Flow Variant: 33 Data flow: use of a C++ reference to data within the same function
 *
 * */

#include "std_testcase.h"

namespace CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_33
{

#ifndef OMITBAD

void bad()
{
    int64_t * data;
    int64_t * &dataRef = data;
    /* Initialize data */
    data = NULL;
    /* INCIDENTAL: CWE-467 (Use of sizeof() on a pointer type) */
    /* FLAW: Using sizeof the pointer and not the data type in malloc() */
    data = (int64_t *)malloc(sizeof(data));
    // if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
    {
        int64_t * data = dataRef;
        /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
        printLongLongLine(*data);
        free(data);
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2B()
{
    int64_t * data;
    int64_t * &dataRef = data;
    /* Initialize data */
    data = NULL;
    /* FIX: Using sizeof the data type in malloc() */
    data = (int64_t *)malloc(sizeof(*data));
    // if (data == NULL) {exit(-1);}
    *data = 2147483643LL;
    {
        int64_t * data = dataRef;
        /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
        printLongLongLine(*data);
        free(data);
    }
}

void good()
{
    goodG2B();
}

#endif /* OMITGOOD */

} /* close namespace */

/* Below is the main(). It is only used when building this testcase on
 * its own for testing or for building a binary to use in testing binary
 * analysis tools. It is not used when compiling all the testcases as one
 * application, which is how source code analysis tools are tested.
 */
#ifdef INCLUDEMAIN

using namespace CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_33; /* so that we can use good and bad easily */

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
    good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
