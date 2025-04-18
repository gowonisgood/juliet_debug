/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34.c
Label Definition File: CWE122_Heap_Based_Buffer_Overflow__c_CWE193.label.xml
Template File: sources-sink-34.tmpl.c
*/
/*
 * @description
 * CWE: 122 Heap Based Buffer Overflow
 * BadSource:  Allocate memory for a string, but do not allocate space for NULL terminator
 * GoodSource: Allocate enough memory for a string and the NULL terminator
 * Sinks: memcpy
 *    BadSink : Copy string to data using memcpy()
 * Flow Variant: 34 Data flow: use of a union containing two methods of accessing the same data (within the same function)
 *
 * */

#include "std_testcase.h"

#ifndef _WIN32
#include <wchar.h>
#endif

/* MAINTENANCE NOTE: The length of this string should equal the 10 */
#define SRC_STRING "AAAAAAAAAA"

typedef union
{
    char * unionFirst;
    char * unionSecond;
} CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_unionType;

#ifndef OMITBAD

void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_bad()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_unionType myUnion;
    data = NULL;
    /* FLAW: Did not leave space for a null terminator */
    data = (char *)malloc(10*sizeof(char));
    // if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            free(data);
        }
    }
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B() uses the GoodSource with the BadSink */
static void goodG2B()
{
    char * data;
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_unionType myUnion;
    data = NULL;
    /* FIX: Allocate space for a null terminator */
    data = (char *)malloc((10+1)*sizeof(char));
    // if (data == NULL) {exit(-1);}
    myUnion.unionFirst = data;
    {
        char * data = myUnion.unionSecond;
        {
            char source[10+1] = SRC_STRING;
            /* Copy length + 1 to include NUL terminator from source */
            /* POTENTIAL FLAW: data may not have enough space to hold source */
            memcpy(data, source, (strlen(source) + 1) * sizeof(char));
            printLine(data);
            free(data);
        }
    }
}

void CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_good()
{
    goodG2B();
}

#endif /* OMITGOOD */

/* Below is the main(). It is only used when building this testcase on
 * its own for testing or for building a binary to use in testing binary
 * analysis tools. It is not used when compiling all the testcases as one
 * application, which is how source code analysis tools are tested.
 */
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
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_memcpy_34_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
