/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE121_Stack_Based_Buffer_Overflow__CWE135_32.c
Label Definition File: CWE121_Stack_Based_Buffer_Overflow__CWE135.label.xml
Template File: sources-sinks-32.tmpl.c
*/
/*
 * @description
 * CWE: 121 Stack Based Buffer Overflow
 * BadSource:  Void pointer to a wchar_t array
 * GoodSource: Void pointer to a char array
 * Sinks:
 *    GoodSink: Allocate memory using wcslen() and copy data
 *    BadSink : Allocate memory using strlen() and copy data
 * Flow Variant: 32 Data flow using two pointers to the same value within the same function
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

#define WIDE_STRING L"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"
#define CHAR_STRING "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"

#ifndef OMITBAD

void CWE121_Stack_Based_Buffer_Overflow__CWE135_32_bad()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    data = NULL;
    {
        void * data = *dataPtr1;
        /* POTENTIAL FLAW: Set data to point to a wide string */
        data = (void *)WIDE_STRING;
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
        {
            /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printLine((char *)dest);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2B()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    data = NULL;
    {
        void * data = *dataPtr1;
        /* FIX: Set data to point to a char string */
        data = (void *)CHAR_STRING;
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
        {
            /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
            size_t dataLen = strlen((char *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * 1);
            (void)strcpy(dest, data);
            printLine((char *)dest);
        }
    }
}

/* goodB2G() uses the BadSource with the GoodSink */
static void goodB2G()
{
    void * data;
    void * *dataPtr1 = &data;
    void * *dataPtr2 = &data;
    data = NULL;
    {
        void * data = *dataPtr1;
        /* POTENTIAL FLAW: Set data to point to a wide string */
        data = (void *)WIDE_STRING;
        *dataPtr1 = data;
    }
    {
        void * data = *dataPtr2;
        {
            /* FIX: treating pointer like a wchar_t*  */
            size_t dataLen = wcslen((wchar_t *)data);
            void * dest = (void *)ALLOCA((dataLen+1) * sizeof(wchar_t));
            (void)wcscpy(dest, data);
            printWLine((wchar_t *)dest);
        }
    }
}

void CWE121_Stack_Based_Buffer_Overflow__CWE135_32_good()
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
    CWE121_Stack_Based_Buffer_Overflow__CWE135_32_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE121_Stack_Based_Buffer_Overflow__CWE135_32_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
