/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65a.c
Label Definition File: CWE121_Stack_Based_Buffer_Overflow__CWE129.label.xml
Template File: sources-sinks-65a.tmpl.c
*/
/*
 * @description
 * CWE: 121 Stack Based Buffer Overflow
 * BadSource: large Large index value that is greater than 10-1
 * GoodSource: Larger than zero but less than 10
 * Sinks:
 *    GoodSink: Ensure the array index is valid
 *    BadSink : Improperly check the array index by not checking the upper bound
 * Flow Variant: 65 Data/control flow: data passed as an argument from one function to a function in a different source file called via a function pointer
 *
 * */

#include "std_testcase.h"

#ifndef OMITBAD

/* bad function declaration */
void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65b_badSink(int data);

void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65_bad()
{
    int data;
    /* define a function pointer */
    void (*funcPtr) (int) = CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65b_badSink;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    /* use the function pointer */
    funcPtr(data);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65b_goodG2BSink(int data);

static void goodG2B()
{
    int data;
    void (*funcPtr) (int) = CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65b_goodG2BSink;
    /* Initialize data */
    data = -1;
    /* FIX: Use a value greater than 0, but less than 10 to avoid attempting to
     * access an index of the array in the sink that is out-of-bounds */
    data = 7;
    funcPtr(data);
}

/* goodB2G uses the BadSource with the GoodSink */
void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65b_goodB2GSink(int data);

static void goodB2G()
{
    int data;
    void (*funcPtr) (int) = CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65b_goodB2GSink;
    /* Initialize data */
    data = -1;
    /* POTENTIAL FLAW: Use an invalid index */
    data = 10;
    funcPtr(data);
}

void CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65_good()
{
    goodG2B();
    goodB2G();
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
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE121_Stack_Based_Buffer_Overflow__CWE129_large_65_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
