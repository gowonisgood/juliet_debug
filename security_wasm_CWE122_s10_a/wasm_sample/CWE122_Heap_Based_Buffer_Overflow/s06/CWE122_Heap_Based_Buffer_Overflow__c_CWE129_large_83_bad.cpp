/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83_bad.cpp
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_CWE129.label.xml
Template File: sources-sinks-83_bad.tmpl.cpp
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource: large Large index value that is greater than 10-1
 * GoodSource: Larger than zero but less than 10
 * Sinks:
 *    GoodSink: Ensure the array index is valid
 *    BadSink : Improperly check the array index by not checking the upper bound
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITBAD

#include "std_testcase.h"
#include "CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83.h"

namespace CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83
{
CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83_bad::CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83_bad(int dataCopy)
{
    data = dataCopy;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
}

CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83_bad::~CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_83_bad()
{
    {
        int i;
        int * buffer = (int *)malloc(10 * sizeof(int));
        // if (buffer == NULL) {exit(-1);}
        /* initialize buffer */
        for (i = 0; i < 10; i++)
        {
            buffer[i] = 0;
        }
        /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
         * This code does check to see if the array index is negative */
        if (data >= 0)
        {
            buffer[data] = 1;
            /* Print the array values */
            for(i = 0; i < 10; i++)
            {
                printIntLine(buffer[i]);
            }
        }
        else
        {
            printLine("ERROR: Array index is negative.");
        }
        free(buffer);
    }
}
}
#endif /* OMITBAD */
