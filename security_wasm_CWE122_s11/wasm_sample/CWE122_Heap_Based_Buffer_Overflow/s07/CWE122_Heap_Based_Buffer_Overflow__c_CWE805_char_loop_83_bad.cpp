/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83_bad.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_CWE805.string.label.xml
Template File: sources-sink-83_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate using malloc() and set data pointer to a small buffer
 * GoodSource: Allocate using malloc() and set data pointer to a large buffer
 * Sinks: loop
 *    BadSink : Copy string to data using a loop
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83.h"

namespace CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83
{
CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83_bad(char * dataCopy)
{
    data = dataCopy;
    /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
    data = (char *)malloc(50*sizeof(char));
    // if (data == NULL) {exit(-1);}
    data[0] = '\0'; /* null terminate */
}

CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_loop_83_bad()
{
    {
        size_t i;
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        for (i = 0; i < 100; i++)
        {
            data[i] = source[i];
        }
        data[100-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}
}
#endif /* OMITBAD */
