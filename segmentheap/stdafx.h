
/*++
Copyright (c) 2000  Microsoft Corporation

Module:

Simple.h


Common header file for extensions

--*/

#include <windows.h>

//
// Define KDEXT_64BIT to make all wdbgexts APIs recognize 64 bit addresses
// It is recommended for extensions to use 64 bit headers from wdbgexts so
// the extensions could support 64 bit targets.
//
#define KDEXT_64BIT
#include <wdbgexts.h>


typedef struct BUCKETHEADER
{
	ULONG_PTR fBucket;
	ULONG_PTR bBucket;
	ULONG_PTR BucketManager;
	ULONG_PTR data1;
	WORD FreeCount;
	WORD TotalCount;
	DWORD data2;
	ULONG_PTR data3;
	byte bitmap[0x800];//bitmap size is not sure maybe large than 0x800
}_BucketHeader, *_pBucketHeader;
// TODO: 在此处引用程序需要的其他头文件

