// AppCertDlls.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"
#include <bcrypt.h>


extern "C" NTSTATUS __stdcall CreateProcessNotify(LPCWSTR lpApplicationName, ULONG uReason) {
	MessageBox(NULL, L"HelloWorld!", L"HelloWorld", NULL);
}