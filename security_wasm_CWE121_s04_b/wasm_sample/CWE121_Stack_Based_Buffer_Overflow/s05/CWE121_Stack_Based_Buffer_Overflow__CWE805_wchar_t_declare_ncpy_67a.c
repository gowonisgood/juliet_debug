/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67a.c
Label Definition File: CWE121_Stack_Based_Buffer_Overflow__CWE805.string.label.xml
Template File: sources-sink-67a.tmpl.c
*/
/*
 * @description
 * CWE: 121 Stack Based Buffer Overflow
 * BadSource:  Set data pointer to the bad buffer
 * GoodSource: Set data pointer to the good buffer
 * Sinks: ncpy
 *    BadSink : Copy string to data using wcsncpy
 * Flow Variant: 67 Data flow: data passed in a struct from one function to another in different source files
 *
 * */

#include "std_testcase.h"

#include <wchar.h>

typedef struct _CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType
{
    wchar_t * structFirst;
} CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType;

#ifndef OMITBAD

/* bad function declaration */
void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67b_badSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType myStruct);

void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_bad()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType myStruct;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
     * buffer in various memory copying functions using a "large" source buffer. */
    data = dataBadBuffer;
    data[0] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67b_badSink(myStruct);
}

#endif /* OMITBAD */

#ifndef OMITGOOD

/* goodG2B uses the GoodSource with the BadSink */
void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67b_goodG2BSink(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType myStruct);

static void goodG2B()
{
    wchar_t * data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_structType myStruct;
    wchar_t dataBadBuffer[50];
    wchar_t dataGoodBuffer[100];
    /* FIX: Set a pointer to a "large" buffer, thus avoiding buffer overflows in the sinks. */
    data = dataGoodBuffer;
    data[0] = L'\0'; /* null terminate */
    myStruct.structFirst = data;
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67b_goodG2BSink(myStruct);
}

void CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_good()
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
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_good();
    printLine("Finished good()");
#endif /* OMITGOOD */
#ifndef OMITBAD
    printLine("Calling bad()...");
    CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_ncpy_67_bad();
    printLine("Finished bad()");
#endif /* OMITBAD */
    return 0;
}

#endif
