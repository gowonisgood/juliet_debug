/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83_bad.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__CWE131.label.xml
Template File: sources-sink-83_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate memory without using sizeof(int)
 * GoodSource: Allocate memory using sizeof(int)
 * Sinks: memmove
 *    BadSink : Copy array to data using memmove()
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83.h"

namespace CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83
{
CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83_bad::CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83_bad(int * dataCopy)
{
    data = dataCopy;
    /* FLAW: Allocate memory without using sizeof(int) */
    data = (int *)malloc(10);
    // if (data == NULL) {exit(-1);}
}

CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83_bad::~CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_83_bad()
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
