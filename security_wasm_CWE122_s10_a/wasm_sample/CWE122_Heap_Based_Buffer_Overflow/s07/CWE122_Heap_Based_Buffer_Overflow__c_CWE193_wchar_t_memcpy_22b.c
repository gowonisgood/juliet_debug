/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22b.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_CWE193.label.xml
Template File: sources-sink-22b.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate memory for a string, but do not allocate space for NULL terminator
 * GoodSource: Allocate enough memory for a string and the NULL terminator
 * Sink: memcpy
 *    BadSink : Copy string to data using memcpy()
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* MAINTENANCE NOTE: The length of this string should equal the 10 */
#define SRC_STRING L"AAAAAAAAAA"

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the source function */
extern int CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_badGlobal;

wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_badSource(wchar_t * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_badGlobal)
    {
        /* FLAW: Did not leave space for a null terminator */
        data = (wchar_t *)malloc(10*sizeof(wchar_t));
        // if (data == NULL) {exit(-1);}
    }
    return data;
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the source functions. */
extern int CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_goodG2B1Global;
extern int CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_goodG2B2Global;

/* goodG2B1() - use goodsource and badsink by setting the static variable to false instead of true */
wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_goodG2B1Source(wchar_t * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_goodG2B1Global)
    {
        /* INCIDENTAL: CWE 561 Dead Code, the code below will never run */
        printLine("Benign, fixed string");
    }
    else
    {
        /* FIX: Allocate space for a null terminator */
        data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
        // if (data == NULL) {exit(-1);}
    }
    return data;
}

/* goodG2B2() - use goodsource and badsink by reversing the blocks in the if in the source function */
wchar_t * CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_goodG2B2Source(wchar_t * data)
{
    if(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_22_goodG2B2Global)
    {
        /* FIX: Allocate space for a null terminator */
        data = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
        // if (data == NULL) {exit(-1);}
    }
    return data;
}

#endif /* OMITGOOD */
