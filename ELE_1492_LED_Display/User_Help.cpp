// User_Help.cpp : implementation file
//

#include "stdafx.h"
#include "ELE_1492_LED_Display.h"
#include "User_Help.h"


// User_Help dialog

IMPLEMENT_DYNAMIC(User_Help, CDialog)

User_Help::User_Help(CWnd* pParent /*=NULL*/)
	: CDialog(User_Help::IDD, pParent)
{

}

User_Help::~User_Help()
{
}

void User_Help::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_HELP_LIST, m_combo_help_list);
	DDX_Control(pDX, IDC_LIST_HELP_LIST, m_list_help_list);
	DDX_Control(pDX, IDC_STATIC_EXPLAIN, m_static_str_explain);
}


BEGIN_MESSAGE_MAP(User_Help, CDialog)
	ON_CBN_SELCHANGE(IDC_COMBO_HELP_LIST, &User_Help::OnCbnSelchangeComboHelpList)
//	ON_WM_CREATE()
ON_WM_ACTIVATE()
//ON_WM_CREATE()
ON_BN_CLICKED(IDOK, &User_Help::OnBnClickedOk)
ON_LBN_SELCHANGE(IDC_LIST_HELP_LIST, &User_Help::OnLbnSelchangeListHelpList)
END_MESSAGE_MAP()


// User_Help message handlers

void User_Help::OnCbnSelchangeComboHelpList()
{
	// TODO: Add your control notification handler code here

	Add_Explain();

	m_list_help_list.SetCurSel(0);
	OnLbnSelchangeListHelpList();

}


void User_Help::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);

	// TODO: Add your message handler code here


	// �޺�����Ʈ�� �ʱ�ȭ �Ѵ�.

	CString str_explain;

	m_combo_help_list.ResetContent();

	// ���� ����� �߰��Ѵ�.
	str_explain.LoadStringW(IDS_EXPLAIN_BUTTON);
	m_combo_help_list.AddString(str_explain);

	str_explain.LoadStringW(IDS_EXPLAIN_MOUSE);
	m_combo_help_list.AddString(str_explain);

	str_explain.LoadStringW(IDS_EXPLAIN_UART_PORT);
	m_combo_help_list.AddString(str_explain);



	// ����Ʈ�� ù��°�� �����صд�. 
	m_combo_help_list.SetCurSel(0);

	// ���õ� ����Ʈ�� �ʱ�ȭ �Ѵ�.
	Add_Explain();

	m_list_help_list.SetCurSel(0);
	OnLbnSelchangeListHelpList();

}





void User_Help::Add_Explain()
{

	int cur_sel = 0;
	CString str_temp;
	CString str_explain_list;

	cur_sel = m_combo_help_list.GetCurSel();
	m_combo_help_list.GetWindowTextW(str_temp);

	// ����Ʈ�� �ʱ�ȭ �Ѵ�.
	m_list_help_list.ResetContent();


	// ���� ��ư���� �����Ѵ�.
	str_explain_list.LoadStringW(IDS_EXPLAIN_BUTTON);
	if(str_explain_list.Compare(str_temp) == 0)
	{
		CString str_explain;
		for(int cnt = EXPLAIN_BUTTON_STR_START; cnt < EXPLAIN_BUTTON_STR_END; cnt+=2)
		{
			str_explain.LoadStringW(cnt);
			m_list_help_list.AddString(str_explain);
		}
	}


	// ���콺 ������ �����Ѵ�.
	str_explain_list.LoadStringW(IDS_EXPLAIN_MOUSE);
	if(str_explain_list.Compare(str_temp) == 0)
	{
		CString str_explain;
		for(int cnt = EXPLAIN_MOUSE_STR_START; cnt < EXPLAIN_MOUSE_STR_END; cnt+=2)
		{
			str_explain.LoadStringW(cnt);
			m_list_help_list.AddString(str_explain);
		}
	}

	// UART Port�� �����ϴ� ����� �����Ѵ�.

	str_explain_list.LoadStringW(IDS_EXPLAIN_UART_PORT);
	if(str_explain_list.Compare(str_temp) == 0)
	{
		CString str_explain;
		for(int cnt = EXPLAIN_UART_STR_START; cnt < EXPLAIN_UART_STR_END; cnt+=2)
		{
			str_explain.LoadStringW(cnt);
			m_list_help_list.AddString(str_explain);
		}
	}




}




void User_Help::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	OnOK();
}



//  ����Ű�� ESC Ű�� ������ �� ���� ���� �ʵ��� ������ �Ѵ�.

BOOL User_Help::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN || pMsg->wParam == VK_ESCAPE)
	{
		return TRUE;
	}


	return CDialog::PreTranslateMessage(pMsg);
}

void User_Help::OnLbnSelchangeListHelpList()
{
	// TODO: Add your control notification handler code here

	CString str_combo;
	CString str_explain;
	CString str_list;
	CString str_temp = TEXT("");

	m_static_str_explain.SetWindowTextW(str_temp);
	m_combo_help_list.GetWindowTextW(str_combo);


	str_temp.LoadStringW(IDS_EXPLAIN_BUTTON);
	if(str_combo.Compare(str_temp)== 0)
	{
		m_list_help_list.GetText(m_list_help_list.GetCurSel(),str_list);
		for(int cnt = EXPLAIN_BUTTON_STR_START; cnt < EXPLAIN_BUTTON_STR_END; cnt+=2)
		{
			// ����Ʈ ������ ������� �Ǿ����� Ȯ���Ͽ� �� ������ �����Ѵ�.
			str_explain.LoadStringW(cnt);
			if(0 == str_list.Compare(str_explain))
			{
				str_temp.LoadStringW(cnt+1);
				break;
			}
		}
		m_static_str_explain.SetWindowTextW(str_temp);
	}

	str_temp.LoadStringW(IDS_EXPLAIN_MOUSE);
	if(str_combo.Compare(str_temp)== 0)
	{
		m_list_help_list.GetText(m_list_help_list.GetCurSel(),str_list);
		for(int cnt = EXPLAIN_MOUSE_STR_START; cnt < EXPLAIN_MOUSE_STR_END; cnt+=2)
		{
			// ����Ʈ ������ ������� �Ǿ����� Ȯ���Ͽ� �� ������ �����Ѵ�.
			str_explain.LoadStringW(cnt);
			if(0 == str_list.Compare(str_explain))
			{
				str_temp.LoadStringW(cnt+1);
				break;
			}
		}
		m_static_str_explain.SetWindowTextW(str_temp);
	}

	str_temp.LoadStringW(IDS_EXPLAIN_UART_PORT);
	if(str_combo.Compare(str_temp)== 0)
	{
		m_list_help_list.GetText(m_list_help_list.GetCurSel(),str_list);
		for(int cnt = EXPLAIN_UART_STR_START; cnt < EXPLAIN_UART_STR_END; cnt+=2)
		{
			// ����Ʈ ������ ������� �Ǿ����� Ȯ���Ͽ� �� ������ �����Ѵ�.
			str_explain.LoadStringW(cnt);
			if(0 == str_list.Compare(str_explain))
			{
				str_temp.LoadStringW(cnt+1);
				break;
			}
		}
		m_static_str_explain.SetWindowTextW(str_temp);
	}



	UpdateData(FALSE);
}
