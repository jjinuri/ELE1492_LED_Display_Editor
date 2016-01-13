// ELE_1492_LED_Display.h : PROJECT_NAME 응용 프로그램에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH에 대해 이 파일을 포함하기 전에 'stdafx.h'를 포함합니다."
#endif

#include "resource.h"		// 주 기호입니다.
#include "ELE_1492_LED_Display_i.h"


// CELE_1492_LED_DisplayApp:
// 이 클래스의 구현에 대해서는 ELE_1492_LED_Display.cpp을 참조하십시오.
//

class CELE_1492_LED_DisplayApp : public CWinApp
{
public:
	CELE_1492_LED_DisplayApp();

// 재정의입니다.
	public:
	virtual BOOL InitInstance();

// 구현입니다.

	DECLARE_MESSAGE_MAP()
public:
	BOOL ExitInstance(void);
};

extern CELE_1492_LED_DisplayApp theApp;