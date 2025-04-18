/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22a.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_CWE129.label.xml
Template File: sources-sinks-22a.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource: large Large index value that is greater than 10-1
 * GoodSource: Larger than zero but less than 10
 * Sinks:
 *    GoodSink: Ensure the array index is valid
 *    BadSink : Improperly check the array index by not checking the upper bound
 * Flow Variant: 22 Control flow: Flow controlled by value of a global variable. Sink functions are in a separate file from sources.
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* The global variable below is used to drive control flow in the sink function */
int CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_badGlobal = 0;

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_badSink(int data);

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_badGlobal = 1; /* true */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_badSink(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* The global variables below are used to drive control flow in the sink functions. */
int CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G1Global = 0;
int CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G2Global = 0;
int CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodG2BGlobal = 0;

/* goodB2G1() - use badsource and goodsink by setting the static variable to false instead of true */
void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G1Sink(int data);

static void goodB2G1()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G1Global = 0; /* false */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G1Sink(data);
}

/* goodB2G2() - use badsource and goodsink by reversing the blocks in the if in the sink function */
void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G2Sink(int data);

static void goodB2G2()
{
    int data;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G2Global = 1; /* true */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodB2G2Sink(data);
}

/* goodG2B() - use goodsource and badsink */
void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodG2BSink(int data);

static void goodG2B()
{
    int data;
    /* Initialize data */
    data = -1;
    /* FIX: Use a value greater than 0, but less than 10 to avoid attempting to
    * access an index of the array in the sink that is out-of-bounds */
    data = 7;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodG2BGlobal = 1; /* true */
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_goodG2BSink(data);
}

void CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good()
{
    goodB2G1();
    goodB2G2();
    goodG2B();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
   its own for testing or for building a binary to use in testing binary
   analysis tools. It is not used when compiling all the testcases as one
   application, which is how source code analysis tools are tested. */

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
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__c_CWE129_large_22_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
