#pragma once

#ifdef TOKTX_EXPORTS
#define TOKTX_API extern "C" __declspec(dllexport)
#else
#define TOKTX_API extern "C" __declspec(dllimport)
#pragma comment(lib, "ToKtx.lib")
#endif

TOKTX_API int ToKtx(int argc, char* argv[]);

TOKTX_API int BufferToKtx2(FILE* file, unsigned char**outBuffer, size_t& outSize);