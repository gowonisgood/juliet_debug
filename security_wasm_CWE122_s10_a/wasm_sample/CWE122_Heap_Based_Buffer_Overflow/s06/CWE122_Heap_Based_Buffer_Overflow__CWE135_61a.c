/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__CWE135_61a.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__CWE135.label.xml
Template File: sources-sinks-61a.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Void pointer to a wchar_t array
 * GoodSource: Void pointer to a char array
 * Sinks:
 *    GoodSink: Allocate memory using wcslen() and copy data
 *    BadSink : Allocate memory using strlen() and copy data
 * Flow Variant: 61 Data flow: data returned from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#ifndef OMITBAD

/* bad function declaration */
void * CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_badSource(void * data);

void CWE122_Heap_Based_Buffer_Overflow__CWE135_61_bad()
{
    void * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_badSource(data);
    {
        /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        // if (dest == NULL) {exit(-1);}
        (void)wcscpy(dest, data);
        printLine((char *)dest);
        free(dest);
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void * CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_goodG2BSource(void * data);

static void goodG2B()
{
    void * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_goodG2BSource(data);
    {
        /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
        size_t dataLen = strlen((char *)data);
        void * dest = (void *)calloc(dataLen+1, 1);
        // if (dest == NULL) {exit(-1);}
        (void)strcpy(dest, data);
        printLine((char *)dest);
        free(dest);
    }
}

/* goodB2G uses the BadSource with the GoodSink */
void * CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_goodB2GSource(void * data);

static void goodB2G()
{
    void * data;
    data = NULL;
    data = CWE122_Heap_Based_Buffer_Overflow__CWE135_61b_goodB2GSource(data);
    {
        /* FIX: treating pointer like a wchar_t*  */
        size_t dataLen = wcslen((wchar_t *)data);
        void * dest = (void *)calloc(dataLen+1, sizeof(wchar_t));
        // if (dest == NULL) {exit(-1);}
        (void)wcscpy(dest, data);
        printWLine((wchar_t *)dest);
        free(dest);
    }
}

void CWE122_Heap_Based_Buffer_Overflow__CWE135_61_good()
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
    CWE122_Heap_Based_Buffer_Overflow__CWE135_61_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__CWE135_61_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
