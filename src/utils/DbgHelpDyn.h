/* Copyright 2019 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD */

// We're not using DebugLog.[h|cpp] here to make sure logging doesn't allocate
// memory. We use plog because it's similar to plogf() but we don't want to lie
// by claiming we support formatted strings.
// We always log those because they only kick in on error code paths
#define plog(msg) OutputDebugStringA(msg)

namespace dbghelp {

bool Initialize(const WCHAR* symPath, bool force);
bool HasSymbols();
void WriteMiniDump(const WCHAR* crashDumpFilePath, MINIDUMP_EXCEPTION_INFORMATION* mei, bool fullDump);
void GetThreadCallstack(str::Str& s, DWORD threadId);
bool GetCurrentThreadCallstack(str::Str& s);
void LogCallstack();
void RememberCallstackLogs();
void FreeCallstackLogs();
char* GetCallstacks();
void GetAllThreadsCallstacks(str::Str& s);
void GetExceptionInfo(str::Str& s, EXCEPTION_POINTERS* excPointers);

} // namespace dbghelp
