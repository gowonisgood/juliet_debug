/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84_bad.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__CWE131.label.xml
Template File: sources-sink-84_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate memory without using sizeof(int)
 * GoodSource: Allocate memory using sizeof(int)
 * Sinks: memmove
 *    BadSink : Copy array to data using memmove()
 * Flow Variant: 84 Data flow: data passed to class constructor and destructor by declaring the class object on the heap and deleting it after use
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84.h"

namespace CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84
{
CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84_bad::CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84_bad(int * dataCopy)
{
    data = dataCopy;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    // if (data == NULL) {exit(-1);}
}

CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84_bad::~CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_84_bad()
{
    {
        int source[10] = {0};
        /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
        memmove(data, source, 10*sizeof(int));
        printIntLine(data[0]);
        free(data);
    }
}
}
#endif /* OMITBAD */
