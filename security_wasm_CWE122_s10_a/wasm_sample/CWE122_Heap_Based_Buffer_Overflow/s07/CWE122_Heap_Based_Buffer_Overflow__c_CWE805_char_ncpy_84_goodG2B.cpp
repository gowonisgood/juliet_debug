/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_CWE805.string.label.xml
Template File: sources-sink-84_goodG2B.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate using malloc() and set data pointer to a small buffer
 * GoodSource: Allocate using malloc() and set data pointer to a large buffer
 * Sinks: ncpy
 *    BadSink : Copy string to data using strncpy
 * Flow Variant: 84 Data flow: data passed to class constructor and destructor by declaring the class object on the heap and deleting it after use
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84.h"

namespace CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84
{
CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B::CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B(char * dataCopy)
{
    data = dataCopy;
    /* FIX: Allocate and point data to a large buffer that is at least as large as the large buffer used in the sink */
    data = (char *)malloc(100*sizeof(char));
    // if (data == NULL) {exit(-1);}
    data[0] = '\0'; /* null terminate */
}

CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B::~CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncpy_84_goodG2B()
{
    {
        char source[100];
        memset(source, 'C', 100-1); /* fill with 'C's */
        source[100-1] = '\0'; /* null terminate */
        /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
        strncpy(data, source, 100-1);
        data[100-1] = '\0'; /* Ensure the destination buffer is null terminated */
        printLine(data);
        free(data);
    }
}
}
#endif /* OMITGOOD */
