// AppCertDlls.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"
#include <bcrypt.h>
#include <stdlib.h>


extern "C" NTSTATUS __stdcall CreateProcessNotify(LPCWSTR lpApplicationName, ULONG uReason) {
	MessageBox(NULL, L"AppCertDll!", L"AppCertDll!!!", 0);

	return 0;
} 