/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__CWE131.label.xml
Template File: sources-sink-34.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate memory without using sizeof(int)
 * GoodSource: Allocate memory using sizeof(int)
 * Sinks: memcpy
 *    BadSink : Copy array to data using memcpy()
 * Flow Variant: 34 Data flow: use of a union containing two methods of accessing the same data (within the same function)
 *
 * */

#include "std_testcase.h"

typedef union
{
    int * unionFirst;
    int * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_unionType;

#ifndef OMITBAD

void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_bad()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_unionType myUnion;
    data = NULL;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    // if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
            memcpy(data, source, 10*sizeof(int));
            printIntLine(data[0]);
            free(data);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2B()
{
    int * data;
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_unionType myUnion;
    data = NULL;
    /* FIX: Allocate memory using sizeof(int) */
    data = (int *)malloc(10*sizeof(int));
    // if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        int * data = myUnion.unionSecond;
        {
            int source[10] = {0};
            /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
            memcpy(data, source, 10*sizeof(int));
            printIntLine(data[0]);
            free(data);
        }
    }
}

void CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_good()
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
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__CWE131_memcpy_34_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
