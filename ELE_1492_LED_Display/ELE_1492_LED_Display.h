// ELE_1492_LED_Display.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.
#include "ELE_1492_LED_Display_i.h"


// CELE_1492_LED_DisplayApp:
// �� Ŭ������ ������ ���ؼ��� ELE_1492_LED_Display.cpp�� �����Ͻʽÿ�.
//

class CELE_1492_LED_DisplayApp : public CWinApp
{
public:
	CELE_1492_LED_DisplayApp();

// �������Դϴ�.
	public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	BOOL ExitInstance(void);
};

extern CELE_1492_LED_DisplayApp theApp;