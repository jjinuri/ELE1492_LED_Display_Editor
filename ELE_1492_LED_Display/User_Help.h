#pragma once
#include "afxwin.h"






#define EXPLAIN_BUTTON_STR_START		IDS_EXPLAIN_BUTTON_01
#define EXPLAIN_BUTTON_STR_END			IDS_STRING157


#define EXPLAIN_MOUSE_STR_START			IDS_EXPLAIN_MOUSE_01
#define EXPLAIN_MOUSE_STR_END			IDS_STRING164

#define EXPLAIN_UART_STR_START			IDS_EXPLAIN_UART_01
#define EXPLAIN_UART_STR_END			IDS_STRING167





// User_Help dialog

class User_Help : public CDialog
{
	DECLARE_DYNAMIC(User_Help)

public:
	User_Help(CWnd* pParent = NULL);   // standard constructor
	virtual ~User_Help();

// Dialog Data
	enum { IDD = IDD_USER_HELP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()



public:
	CComboBox m_combo_help_list;
	CListBox m_list_help_list;



public:
	afx_msg void OnCbnSelchangeComboHelpList();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);

	BOOL PreTranslateMessage(MSG* pMsg);

	void Add_Explain();		// 설명 문장을 추가한다.

public:
	afx_msg void OnBnClickedOk();
public:
	CStatic m_static_str_explain;
public:
	afx_msg void OnLbnSelchangeListHelpList();
};
