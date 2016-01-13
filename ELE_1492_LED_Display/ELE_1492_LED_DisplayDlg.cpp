// ELE_1492_LED_DisplayDlg.cpp : 구현 파일
//

#include "stdafx.h"
#include "ELE_1492_LED_Display.h"
#include "ELE_1492_LED_DisplayDlg.h"



#include "User_Help.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CELE_1492_LED_DisplayDlg 대화 상자




CELE_1492_LED_DisplayDlg::CELE_1492_LED_DisplayDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CELE_1492_LED_DisplayDlg::IDD, pParent)
	, m_edit_filepath(_T(""))
	, m_comport_state(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CELE_1492_LED_DisplayDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO_MATRIX_SEL, m_combo_matrix_sel);
	DDX_Text(pDX, IDC_EDIT_FILE_PATH, m_edit_filepath);
	DDX_Control(pDX, IDC_COMBO_PORT_NUM, m_combo_port_num);
	DDX_Control(pDX, IDC_EDIT_TEXT, m_edit_string_box);
	DDX_Text(pDX, IDC_COMPORT_STATE, m_comport_state);
	DDX_Control(pDX, IDC_COMBO_FRAME_NUM, m_combo_Frame_num);
	DDX_Control(pDX, IDC_COMBO_DELAY_TIME, m_combo_delay_time);
	DDX_Control(pDX, IDC_COMBO_DELAY_TIME_REAR, m_combo_delay_time_rear);
	DDX_Control(pDX, IDC_COMBO_TEXT_SIZE, m_combo_text_size);
	DDX_Control(pDX, IDC_CHECK_IMAGE1, m_check_image_01);
	DDX_Control(pDX, IDC_CHECK_IMAGE2, m_check_image_02);
	DDX_Control(pDX, IDC_CHECK_IMAGE3, m_check_image_03);
	DDX_Control(pDX, IDC_CHECK_IMAGE4, m_check_image_04);
	DDX_Control(pDX, IDC_CHECK_IMAGE5, m_check_image_05);
	DDX_Control(pDX, IDC_CHECK_IMAGE6, m_check_image_06);
	DDX_Control(pDX, IDC_CHECK_IMAGE7, m_check_image_07);
	DDX_Control(pDX, IDC_CHECK_IMAGE8, m_check_image_08);
	DDX_Control(pDX, IDC_CHECK_IMAGE9, m_check_image_09);
	DDX_Control(pDX, IDC_CHECK_IMAGE10, m_check_image_10);
	DDX_Control(pDX, IDC_CHECK_IMAGE11, m_check_image_11);
	DDX_Control(pDX, IDC_CHECK_IMAGE12, m_check_image_12);
	DDX_Control(pDX, IDC_CHECK_IMAGE13, m_check_image_13);
	DDX_Control(pDX, IDC_CHECK_IMAGE14, m_check_image_14);
	DDX_Control(pDX, IDC_CHECK_IMAGE15, m_check_image_15);
	DDX_Control(pDX, IDC_CHECK_IMAGE16, m_check_image_16);
	DDX_Control(pDX, IDC_COMBO_IMAGE_CHANGE_FRONT, m_combo_Image_change_front);
	DDX_Control(pDX, IDC_COMBO_IMAGE_CHANGE_REAR, m_combo_Image_change_rear);
	DDX_Control(pDX, IDC_BUT_UNDO, m_button_Undo);
	DDX_Control(pDX, IDC_BUT_REDO, m_button_Redo);
	DDX_Control(pDX, IDC_STATIC_DEMO_VERSION_TEXT, m_static_demo_version_text);
}

BEGIN_MESSAGE_MAP(CELE_1492_LED_DisplayDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUT_FILE_OPEN, &CELE_1492_LED_DisplayDlg::OnBnClickedButFileOpen)
	ON_WM_LBUTTONDOWN()
//	ON_WM_ERASEBKGND()
ON_WM_MOUSEMOVE()
ON_WM_LBUTTONUP()
ON_BN_CLICKED(IDC_BUT_CLEAR, &CELE_1492_LED_DisplayDlg::OnBnClickedButClear)
ON_BN_CLICKED(IDC_BUT_FILE_SAVE, &CELE_1492_LED_DisplayDlg::OnBnClickedButFileSave)
ON_CBN_SELCHANGE(IDC_COMBO_MATRIX_SEL, &CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboMatrixSel)
//ON_EN_UPDATE(IDC_EDIT_TEXT, &CELE_1492_LED_DisplayDlg::OnEnUpdateEditText)
ON_EN_CHANGE(IDC_EDIT_TEXT, &CELE_1492_LED_DisplayDlg::OnEnChangeEditText)
ON_BN_CLICKED(IDC_BUT_HELP, &CELE_1492_LED_DisplayDlg::OnBnClickedButHelp)
ON_BN_CLICKED(IDC_BUT_SEND, &CELE_1492_LED_DisplayDlg::OnBnClickedButSend)
ON_WM_RBUTTONDOWN()
ON_WM_RBUTTONUP()
ON_BN_CLICKED(IDC_BUT_APPLY, &CELE_1492_LED_DisplayDlg::OnBnClickedButApply)
//ON_WM_TIMER()
//ON_NOTIFY(NM_THEMECHANGED, IDC_CHECK_IMAGE1, &CELE_1492_LED_DisplayDlg::OnNMThemeChangedCheckImage1)
//ON_BN_SETFOCUS(IDC_CHECK_IMAGE1, &CELE_1492_LED_DisplayDlg::OnBnSetfocusCheckImage1)
ON_BN_CLICKED(IDC_BUT_FILE_SAVE2, &CELE_1492_LED_DisplayDlg::OnBnClickedButFileSave2)
ON_CBN_SELCHANGE(IDC_COMBO_FRAME_NUM, &CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboFrameNum)
ON_CBN_SELCHANGE(IDC_COMBO_DELAY_TIME, &CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboDelayTime)
ON_CBN_SELCHANGE(IDC_COMBO_DELAY_TIME_REAR, &CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboDelayTimeRear)
//ON_BN_CLICKED(IDC_BUT_CLEAR4, &CELE_1492_LED_DisplayDlg::OnBnClickedButClear4)
ON_BN_CLICKED(IDC_BUT_POSITION_CHANGE, &CELE_1492_LED_DisplayDlg::OnBnClickedButPositionChange)
//ON_BN_CLICKED(IDC_BUT_CLEAR2, &CELE_1492_LED_DisplayDlg::OnBnClickedButClear2)
ON_BN_CLICKED(IDC_BUT_UNDO, &CELE_1492_LED_DisplayDlg::OnBnClickedButUndo)
ON_BN_CLICKED(IDC_BUT_REDO, &CELE_1492_LED_DisplayDlg::OnBnClickedButRedo)
ON_WM_DESTROY()
ON_BN_CLICKED(IDOK, &CELE_1492_LED_DisplayDlg::OnBnClickedOk)
//ON_WM_KEYDOWN()
ON_BN_CLICKED(IDC_BUT_INFO, &CELE_1492_LED_DisplayDlg::OnBnClickedButInfo)
ON_WM_CLOSE()
END_MESSAGE_MAP()


// CELE_1492_LED_DisplayDlg 메시지 처리기

BOOL CELE_1492_LED_DisplayDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다. 응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

//-------------------------------------------------------------------------------------------//

	// by jjinuri 
	// 모든 LED와 색상의 위치를 초기화 한다.
	m_matrix_start_pos.x = MATRIX_START_X;
	m_matrix_start_pos.y = MATRIX_START_Y;

	m_matrix_end_pos.x = MATRIX_START_X + (LED_WIDTH*LED_MATRIX_WIDTH);
	m_matrix_end_pos.y = MATRIX_START_Y + (LED_HEIGHT*LED_MATRIX_HEIGHT);

	m_small_matrix_start_pos.x = SMALL_MATRIX_START_X;
	m_small_matrix_start_pos.y = SMALL_MATRIX_START_Y;

	m_small_matrix_end_pos.x = SMALL_MATRIX_START_X + (SMALL_MATRIX_X_SPACE*3) + (LED_SMALL_WIDTH*LED_MATRIX_WIDTH);
	m_small_matrix_end_pos.y = SMALL_MATRIX_START_Y + (SMALL_MATRIX_Y_SPACE*3) + (LED_SMALL_HEIGHT*LED_MATRIX_HEIGHT);

	m_selected_color_box_pos.x = m_matrix_start_pos.x + 49;
	m_selected_color_box_pos.y = m_matrix_start_pos.y + (LED_MATRIX_HEIGHT * LED_HEIGHT) + 25; 

	m_palette_start_pos.x = m_matrix_start_pos.x + (LED_WIDTH*2) + 70;
	m_palette_start_pos.y = m_matrix_start_pos.y + (LED_MATRIX_HEIGHT * LED_HEIGHT) + 15 + (LED_HEIGHT/2)+15;
	
	m_palette_end_pos.x = m_palette_start_pos.x + ((LED_WIDTH*2)*8);
	m_palette_end_pos.y = m_palette_start_pos.y + (LED_HEIGHT*2);
 
	m_text_start_pos.x = TEXT_POS_X;
	m_text_start_pos.y = TEXT_POS_Y;

	m_text_end_pos.x = m_text_start_pos.x + TEXT_WIDTH;
	m_text_end_pos.y = m_text_start_pos.y + TEXT_HEIGHT;

	m_mouse_down_up = MOUSE_LEFT_UP;

	// 모든 matrix를 초기화 한다. 
	memset(m_led_matrix,0x00,sizeof(t_LED_Matrix)*MATRIX_MAX_NUM);

	for(int cnt = 0; cnt<MATRIX_MAX_NUM;cnt++)
	{
		m_led_matrix[cnt].ImageFrame = 2;
		m_led_matrix[cnt].FrontDelay = 5;
		m_led_matrix[cnt].RearDelay = 5;
		m_led_matrix[cnt].ImageSpace = 0;
	}


	// 선택되어진 색상 값을 초기화 한다. 
	m_selected_color = DEFAULT_COLOR;
	m_mouse_sel_pos.x = 0;
	m_mouse_sel_pos.y = 0;

	// combo를 초기화 한다.
	CString str_temp;
	
	//  이미지 선택 콤보 초기화
	for(int cnt = 1; cnt <= MATRIX_MAX_NUM; cnt++)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_matrix_sel.AddString(str_temp);
	}

	// UART 통신 포트 초기화
	for(int cnt = 1; cnt <= 30; cnt++)
	{
		str_temp.Format(_T("COM%d"),cnt);
		m_combo_port_num.AddString(str_temp);

	}

	for(int cnt = 1; cnt <= 5; cnt++)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_Frame_num.AddString(str_temp);
	}

	for(int cnt = 0; cnt <= 30; cnt+=1)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_delay_time.AddString(str_temp);
	}


	for(int cnt = 0; cnt <= 30; cnt+=1)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_delay_time_rear.AddString(str_temp);
	}

	m_combo_matrix_sel.SetCurSel(0);
	m_combo_port_num.SetCurSel(0);

	m_combo_Frame_num.SetCurSel(2);
	m_combo_delay_time.SetCurSel(5);
	m_combo_delay_time_rear.SetCurSel(5);

	m_edit_filepath.Empty();


	// 체크박스 초기화 

	m_check_image_01.SetCheck(FALSE);
	m_check_image_02.SetCheck(FALSE);
	m_check_image_03.SetCheck(FALSE);
	m_check_image_04.SetCheck(FALSE);
	m_check_image_05.SetCheck(FALSE);
	m_check_image_06.SetCheck(FALSE);
	m_check_image_07.SetCheck(FALSE);
	m_check_image_08.SetCheck(FALSE);
	m_check_image_09.SetCheck(FALSE);
	m_check_image_10.SetCheck(FALSE);
	m_check_image_11.SetCheck(FALSE);
	m_check_image_12.SetCheck(FALSE);
	m_check_image_13.SetCheck(FALSE);
	m_check_image_14.SetCheck(FALSE);
	m_check_image_15.SetCheck(FALSE);
	m_check_image_16.SetCheck(FALSE);


	// ini file에서 정보를 가져온다.
	if(TRUE == LoadFile_ini())
	{
		// File Load		 이미지 파일을 가져온다.
		if(!m_edit_filepath.IsEmpty())
		{
			int sel_matrix = m_combo_matrix_sel.GetCurSel();

			Load_LedSaveFile(m_edit_filepath);

			m_combo_Frame_num.SetCurSel(m_led_matrix[sel_matrix].ImageFrame);
			m_combo_delay_time.SetCurSel(m_led_matrix[sel_matrix].FrontDelay);
			m_combo_delay_time_rear.SetCurSel(m_led_matrix[sel_matrix].RearDelay);

		}

		TRACE(" matrix total size  = %d\n",sizeof(t_LED_Matrix)*MATRIX_MAX_NUM);
	}

	m_comport_state.Format(IDS_PORT_CLOSE);



	// Text 관련 부분 초기화

	for(int cnt = 11; cnt <= 16; cnt+=1)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_text_size.AddString(str_temp);
	}

	m_combo_text_size.SetCurSel(5);

	m_edit_string_box.SetWindowTextW(TEXT("사랑해요♡"));


	// 이미지 순서를 바꾸기 위한 변수 초기화

	for(int cnt = 1; cnt <= MATRIX_MAX_NUM; cnt++)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_Image_change_front.AddString(str_temp);
	}

	for(int cnt = 1; cnt <= MATRIX_MAX_NUM; cnt++)
	{
		str_temp.Format(_T("%d"),cnt);
		m_combo_Image_change_rear.AddString(str_temp);
	}

	m_combo_Image_change_front.SetCurSel(0);
	m_combo_Image_change_rear.SetCurSel(0);



	// 작업하고 있는 변수를 임시로 저장하기위해서 변수를 초기화 한다.

	for(int cnt = 0; cnt< MATRIX_MAX_NUM; cnt++)
	{
		m_matrix_SaveTemp_num[cnt] = 0;
		m_matrix_SaveTemp_curNum[cnt] = 0;
	}


	t_LED_Matrix matrix_temp;

	memset(&matrix_temp,0x00,sizeof(t_LED_Matrix));
	matrix_temp.ImageFrame = 2;
	matrix_temp.FrontDelay = 5;
	matrix_temp.RearDelay = 5;
	matrix_temp.ImageSpace = 0;


	for(int cnt =0; cnt<MATRIX_MAX_NUM;  cnt++)
	{
		mp_led_matrix_temp[cnt]= (t_LED_Matrix *)malloc(sizeof(t_LED_Matrix)*REDO_NUM_MAX);
		
		if(mp_led_matrix_temp[cnt] == NULL)
		{
			AfxMessageBox(IDS_MEMORY_ERROR);
			
			OnOK();
			return TRUE;
		}

		for(int cnt_1 = 0; cnt_1< REDO_NUM_MAX; cnt_1++)
		{
			memcpy(&mp_led_matrix_temp[cnt][cnt_1],&matrix_temp,sizeof(t_LED_Matrix));
		}
	
	
	}


	SaveTemporary_LED_Matrix();


	TRACE("matrix size = %d\r\n",sizeof(t_LED_Matrix));



	if(DEMO_VERSION == FALSE)
	{
//		m_static_demo_version_text.EnableWindow(FALSE);
		m_static_demo_version_text.SetWindowTextW(TEXT(""));


	}


	UpdateData(FALSE);
//-------------------------------------------------------------------------------------------//

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CELE_1492_LED_DisplayDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
//	CFile file;

//	m_edit_filepath.IsEmpty()


	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}


}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다. 문서/뷰 모델을 사용하는 MFC 응용 프로그램의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CELE_1492_LED_DisplayDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{

		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트

		int seleced_matrix = m_combo_matrix_sel.GetCurSel();

		// by jjinuri 
		DrawMatrix(&dc,m_matrix_start_pos);
		DrawMatrixLed(&dc,m_matrix_start_pos,&m_led_matrix[seleced_matrix]);
		DrawPalette(&dc,m_palette_start_pos);
		DrawSelectedColorBox(&dc,m_selected_color_box_pos,m_selected_color);

		for(int cnt_y = 0; cnt_y < (MATRIX_MAX_NUM/4); cnt_y++)
		{
			CPoint start_pos;

			start_pos.y = m_small_matrix_start_pos.y + SMALL_MATRIX_Y_SPACE * cnt_y;

			for(int cnt_x = 0; cnt_x < MATRIX_MAX_NUM/(MATRIX_MAX_NUM/4);cnt_x++)
			{
				int temp = (cnt_y*(MATRIX_MAX_NUM/4))+cnt_x;
				start_pos.x = m_small_matrix_start_pos.x + SMALL_MATRIX_X_SPACE * cnt_x;

				DrawSmallMatrix(&dc, start_pos, &m_led_matrix[temp]);
			}
		}

//		DrawText(&dc,m_text_start_pos, m_text_end_pos);

		CDialog::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CELE_1492_LED_DisplayDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


int CELE_1492_LED_DisplayDlg::DrawText(CPaintDC *dc,CPoint a_start_pos,CPoint a_end_pos)
{
	int res =0;

	
	CRect rect;
	CBrush NewBrush(RGB(255,255,255));
	CBrush *pOldBrush = dc->SelectObject(&NewBrush);

	rect.left = a_start_pos.x;
	rect.top = a_start_pos.y;
	rect.right = a_end_pos.x;
	rect.bottom = a_end_pos.y;

	dc->FillRect(rect,&NewBrush);

	dc->SelectObject(pOldBrush);


	CFont font;    //CFont object 확보

	font.CreateFont(          // object의 생성
		19,                  // 문자 높이 
		7,                  // 문자 폭
		0,                   // 기울기 각도
		0,                   // 문자 방향
		FW_THIN,            // 문자 굵기
		FALSE,               // 문자 기울림 모양
		FALSE,               // 밑 줄
		FALSE,               // 취소선
		DEFAULT_CHARSET,     // 문자 셋
		OUT_DEFAULT_PRECIS,  // 출력 정확도
		CLIP_DEFAULT_PRECIS, // 킬립핑 정확도
		DEFAULT_QUALITY,     // 출력의 질
		DEFAULT_PITCH,       // 자간 거리
//		TEXT("MS Gothic")         // 문자 모양		모양 별로임
//		TEXT("새굴림")         // 문자 모양
//		TEXT("돋움")         // 문자 모양
//		TEXT("견고딕")         // 문자 모양
//		TEXT("고딕")         // 문자 모양
//		TEXT("굴림")         // 문자 모양
		TEXT("맑은 고딕")         // 문자 모양
	);
 
	dc->SelectObject(&font);     //pDC에 font 등록
	dc->SetTextColor(RGB(0,0,0));


	CString editText;
	m_edit_string_box.GetWindowText(editText);

//	dc->TextOut(a_start_pos.x,a_start_pos.y-2,TEXT("사랑해요♡"));
	dc->TextOut(a_start_pos.x,a_start_pos.y-2,editText);

	font.DeleteObject();    //font 삭제


#if 0
	//  문자를 한글코드로 변환하는 부분 
	wchar_t strWide[1024] = {0};
	char strAnsi[1024] = {0};

	lstrcpy( strWide, editText );
//	lstrcpy( strWide, TEXT("사공석준") );

	// WideCharToMultiByte 함수는 유니코드 문자열을 멀티 바이트로 바꿔줍니다.
	WideCharToMultiByte( CP_ACP, 0, (wchar_t *) strWide, -1, strAnsi, 1024, NULL, NULL);

	printf("%s\n\n", strAnsi);


	// 변환을 했으니 가져온 문자와 맵핑해서 화면에 뿌리거나 바로 적용을 하자.

#endif






	return res;
}


//  matrix의 바탕을 그린다. 
int CELE_1492_LED_DisplayDlg::DrawMatrix(CPaintDC *dc,CPoint a_pos)
{
	int res = 0;
	CPen NewPen(PS_NULL,1,LED_BACK_COLOR);
	CBrush NewBrush(LED_BACK_COLOR);
	CPoint pos_temp;

	CPen *pOldPen = dc->SelectObject(&NewPen);

	CBrush *pOldBrush = dc->SelectObject(&NewBrush);

	for(int cnt = 0; cnt < LED_MATRIX_WIDTH; cnt++)
	{
		for(int cnt1 = 0; cnt1 <LED_MATRIX_HEIGHT; cnt1++)
		{
			dc->Rectangle(a_pos.x + (cnt*LED_WIDTH),a_pos.y + (cnt1*LED_HEIGHT),\
				a_pos.x + (cnt*LED_WIDTH)+LED_WIDTH,a_pos.y + (cnt1*LED_HEIGHT)+LED_HEIGHT);
		}
	}

	dc->SelectObject(pOldPen);
	dc->SelectObject(pOldBrush);

	return res;
}




// matrix의 Led를 그린다. 
int CELE_1492_LED_DisplayDlg::DrawMatrixLed(CPaintDC *dc,CPoint a_pos,t_LED_Matrix *a_matrix)
{
	int res = 0;

	t_LED_Matrix *curMatrix = a_matrix; 

	CPen NewPen(PS_NULL,1,LED_BACK_COLOR);
	CBrush NewBrush00(LED_COLOR00);
	CBrush NewBrush01(LED_COLOR01);
	CBrush NewBrush02(LED_COLOR02);
	CBrush NewBrush03(LED_COLOR03);
	CBrush NewBrush04(LED_COLOR04);
	CBrush NewBrush05(LED_COLOR05);
	CBrush NewBrush06(LED_COLOR06);
	CBrush NewBrush07(LED_COLOR07);
	CPoint pos_temp;

	CPen *pOldPen = dc->SelectObject(&NewPen);

	CBrush *pOldBrush;

	for(int cnt = 0; cnt < LED_MATRIX_WIDTH; cnt++)
	{
		for(int cnt1 = 0; cnt1 <LED_MATRIX_HEIGHT; cnt1++)
		{
			int color = 0;
			
			switch(cnt1)
			{
				case 0:				color = curMatrix->Led_Column[cnt].led00;			break;
				case 1:				color = curMatrix->Led_Column[cnt].led01;			break;
				case 2:				color = curMatrix->Led_Column[cnt].led02;			break;
				case 3:				color = curMatrix->Led_Column[cnt].led03;			break;
				case 4:				color = curMatrix->Led_Column[cnt].led04;			break;
				case 5:				color = curMatrix->Led_Column[cnt].led05;			break;
				case 6:				color = curMatrix->Led_Column[cnt].led06;			break;
				case 7:				color = curMatrix->Led_Column[cnt].led07;			break;
				case 8:				color = curMatrix->Led_Column[cnt].led08;			break;
				case 9:				color = curMatrix->Led_Column[cnt].led09;			break;
				case 10:			color = curMatrix->Led_Column[cnt].led10;			break;
				case 11:			color = curMatrix->Led_Column[cnt].led11;			break;
				case 12:			color = curMatrix->Led_Column[cnt].led12;			break;
				case 13:			color = curMatrix->Led_Column[cnt].led13;			break;
				case 14:			color = curMatrix->Led_Column[cnt].led14;			break;
				case 15:			color = curMatrix->Led_Column[cnt].led15;			break;
				case 16:			color = curMatrix->Led_Column[cnt].led16;			break;
				case 17:			color = curMatrix->Led_Column[cnt].led17;			break;
		
				default:		AfxMessageBox(_T("Saved Color error"));		break;
			}

			switch(color)
			{
				case 0:			pOldBrush = dc->SelectObject(&NewBrush00);				break;
				case 1:			pOldBrush = dc->SelectObject(&NewBrush01);				break;
				case 2:			pOldBrush = dc->SelectObject(&NewBrush02);				break;
				case 3:			pOldBrush = dc->SelectObject(&NewBrush03);				break;
				case 4:			pOldBrush = dc->SelectObject(&NewBrush04);				break;
				case 5:			pOldBrush = dc->SelectObject(&NewBrush05);				break;
				case 6:			pOldBrush = dc->SelectObject(&NewBrush06);				break;
				case 7:			pOldBrush = dc->SelectObject(&NewBrush07);				break;
			
				default:		AfxMessageBox(_T("Color error"));		break;
			}


			dc->Ellipse(a_pos.x + (cnt*LED_WIDTH),a_pos.y + (cnt1*LED_HEIGHT),\
				a_pos.x + (cnt*LED_WIDTH)+LED_WIDTH,a_pos.y + (cnt1*LED_HEIGHT)+LED_HEIGHT);
		
			dc->SelectObject(pOldBrush);
		}
	}

	dc->SelectObject(pOldPen);

	return res;
}

// palette를 그린다. 
int CELE_1492_LED_DisplayDlg::DrawPalette(CPaintDC *dc,CPoint a_pos)
{
	int res = 0;


	CPen NewPen(PS_NULL,1,LED_ROUND);
	CBrush NewBrush(LED_COLOR00);

	CPen *pOldPen;
	CBrush *pOldBrush;

	for(int cnt = 0; cnt <8 ; cnt++)
	{

		switch(cnt)
		{
		case 0:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR00);		break;
		case 1:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR01);		break;
		case 2:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR02);		break;
		case 3:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR03);		break;
		case 4:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR04);		break;
		case 5:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR05);		break;
		case 6:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR06);		break;
		case 7:		NewBrush.DeleteObject();	NewBrush.CreateSolidBrush(LED_COLOR07);		break;
		default:	AfxMessageBox(_T(" Error Color select "));	break;	
		}

		pOldPen = dc->SelectObject(&NewPen);

		pOldBrush = dc->SelectObject(&NewBrush);

		dc->Rectangle(a_pos.x+(PALETTE_BOX_WIDTH*cnt) ,a_pos.y,\
				a_pos.x + (PALETTE_BOX_WIDTH*(cnt+1)),a_pos.y + PALETTE_BOX_HEIGHT);
	}

	dc->SelectObject(pOldPen);
	dc->SelectObject(pOldBrush);



	return res;	
}

// 선택 되어진 색상을 사용자가 알수 있게 보여준다. 
// 선택된 색을 보여준다.
int CELE_1492_LED_DisplayDlg::DrawSelectedColorBox(CPaintDC *dc,CPoint a_pos,int a_selected_color)
{
	int res = 0;

	CPen NewPen(PS_NULL,1,LED_ROUND);
	CBrush NewBrush;


	switch(a_selected_color)
	{
	case 0:		NewBrush.CreateSolidBrush(LED_COLOR00);		break;
	case 1:		NewBrush.CreateSolidBrush(LED_COLOR01);		break;
	case 2:		NewBrush.CreateSolidBrush(LED_COLOR02);		break;
	case 3:		NewBrush.CreateSolidBrush(LED_COLOR03);		break;
	case 4:		NewBrush.CreateSolidBrush(LED_COLOR04);		break;
	case 5:		NewBrush.CreateSolidBrush(LED_COLOR05);		break;
	case 6:		NewBrush.CreateSolidBrush(LED_COLOR06);		break;
	case 7:		NewBrush.CreateSolidBrush(LED_COLOR07);		break;
	default:	AfxMessageBox(_T(" Error Color select "));	break;	
	}


	CPen *pOldPen = dc->SelectObject(&NewPen);

	CBrush *pOldBrush = dc->SelectObject(&NewBrush);

	dc->Rectangle(a_pos.x ,a_pos.y,	a_pos.x + (SELECED_COLOR_BOX_WIDTH),a_pos.y + (SELECED_COLOR_BOX_HEIGHT));
		

	dc->SelectObject(pOldPen);
	dc->SelectObject(pOldBrush);


	return res;
}

void CELE_1492_LED_DisplayDlg::DrawSmallMatrix(CPaintDC *dc, CPoint a_start_pos, t_LED_Matrix *a_matrix)
{
	int res = 0;

	t_LED_Matrix *curMatrix = a_matrix; 

	CPen NewPen(PS_NULL,1,LED_BACK_COLOR);
	CBrush NewBrush00(LED_COLOR00);
	CBrush NewBrush01(LED_COLOR01);
	CBrush NewBrush02(LED_COLOR02);
	CBrush NewBrush03(LED_COLOR03);
	CBrush NewBrush04(LED_COLOR04);
	CBrush NewBrush05(LED_COLOR05);
	CBrush NewBrush06(LED_COLOR06);
	CBrush NewBrush07(LED_COLOR07);
	CPoint pos_temp;

	CPen *pOldPen = dc->SelectObject(&NewPen);

	CBrush *pOldBrush;

	for(int cnt = 0; cnt < LED_MATRIX_WIDTH; cnt++)
	{
		for(int cnt1 = 0; cnt1 <LED_MATRIX_HEIGHT; cnt1++)
		{
			int color = 0;
			
			switch(cnt1)
			{
				case 0:				color = curMatrix->Led_Column[cnt].led00;			break;
				case 1:				color = curMatrix->Led_Column[cnt].led01;			break;
				case 2:				color = curMatrix->Led_Column[cnt].led02;			break;
				case 3:				color = curMatrix->Led_Column[cnt].led03;			break;
				case 4:				color = curMatrix->Led_Column[cnt].led04;			break;
				case 5:				color = curMatrix->Led_Column[cnt].led05;			break;
				case 6:				color = curMatrix->Led_Column[cnt].led06;			break;
				case 7:				color = curMatrix->Led_Column[cnt].led07;			break;
				case 8:				color = curMatrix->Led_Column[cnt].led08;			break;
				case 9:				color = curMatrix->Led_Column[cnt].led09;			break;
				case 10:			color = curMatrix->Led_Column[cnt].led10;			break;
				case 11:			color = curMatrix->Led_Column[cnt].led11;			break;
				case 12:			color = curMatrix->Led_Column[cnt].led12;			break;
				case 13:			color = curMatrix->Led_Column[cnt].led13;			break;
				case 14:			color = curMatrix->Led_Column[cnt].led14;			break;
				case 15:			color = curMatrix->Led_Column[cnt].led15;			break;
				case 16:			color = curMatrix->Led_Column[cnt].led16;			break;
				case 17:			color = curMatrix->Led_Column[cnt].led17;			break;
		
				default:		AfxMessageBox(_T("Saved Color error"));		break;
			}

			switch(color)
			{
				case 0:			pOldBrush = dc->SelectObject(&NewBrush00);				break;
				case 1:			pOldBrush = dc->SelectObject(&NewBrush01);				break;
				case 2:			pOldBrush = dc->SelectObject(&NewBrush02);				break;
				case 3:			pOldBrush = dc->SelectObject(&NewBrush03);				break;
				case 4:			pOldBrush = dc->SelectObject(&NewBrush04);				break;
				case 5:			pOldBrush = dc->SelectObject(&NewBrush05);				break;
				case 6:			pOldBrush = dc->SelectObject(&NewBrush06);				break;
				case 7:			pOldBrush = dc->SelectObject(&NewBrush07);				break;
			
				default:		AfxMessageBox(_T("Color error"));		break;
			}


			dc->Rectangle(a_start_pos.x + (cnt*LED_SMALL_WIDTH)-1,	a_start_pos.y + (cnt1*LED_SMALL_HEIGHT)-1,\
				a_start_pos.x + (cnt*LED_SMALL_WIDTH)+LED_SMALL_WIDTH,a_start_pos.y + (cnt1*LED_SMALL_HEIGHT)+LED_SMALL_HEIGHT);
		
			dc->SelectObject(pOldBrush);
		}
	}

	dc->SelectObject(pOldPen);

	return;
}


void CELE_1492_LED_DisplayDlg::Load_LedSaveFile(CString a_savefile_path)
{

	CFile file;

	WCHAR *file_path;

	file_path = a_savefile_path.GetBuffer();

	if(!file.Open(file_path,CFile::modeReadWrite))
	{
		AfxMessageBox(IDS_SAVE_FILE_OPEN_ERROR);
		return;
	}

	if(file.GetLength() != ((ULONGLONG)(sizeof(t_LED_Matrix)*MATRIX_MAX_NUM)))
	{
		AfxMessageBox(IDS_SAVE_FILE_OPEN_ERROR2);
		return;
	}


	memset(m_led_matrix,0x00,sizeof(t_LED_Matrix)*MATRIX_MAX_NUM);

	file.Read(m_led_matrix,(UINT)file.GetLength());

	file.Close();


	return;
}



void CELE_1492_LED_DisplayDlg::OnBnClickedButFileOpen()
{
	// TODO: Add your control notification handler code here

    CString filter = _T("led 파일(*.led)|*.led |모든파일(*.*) | *.*");
    CFileDialog dlg(true, _T("led 파일(*.led)"),_T("*.led"),OFN_ALLOWMULTISELECT | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY | OFN_LONGNAMES, filter, NULL, 0);
//    dlg.m_ofn.lpstrInitialDir=_T("c:\\");
    dlg.m_ofn.lpstrInitialDir=_T(".\\");

    if(dlg.DoModal() == IDOK)
	{
		m_edit_filepath = dlg.GetPathName();		

		UpdateData(false);

		Load_LedSaveFile(m_edit_filepath);


		CRect rect;
		rect.left	= m_matrix_start_pos.x ;
		rect.top	= m_matrix_start_pos.y ;
		rect.right	= rect.left + LED_WIDTH*LED_MATRIX_WIDTH;
		rect.bottom = rect.top + LED_HEIGHT*LED_MATRIX_HEIGHT;

		InvalidateRect(rect,FALSE);


		// 하단의 작은 매트릭스 이미지를 모두 갱신한다.
		for(int cnt = 0; cnt< MATRIX_MAX_NUM; cnt++)
		{
			// Small Matrix 

//			int seleced_matrix = m_combo_matrix_sel.GetCurSel();
			CPoint point;

			point.y = m_small_matrix_start_pos.y + (cnt/4)*SMALL_MATRIX_Y_SPACE -1;
			point.x = m_small_matrix_start_pos.x + (cnt%4)*SMALL_MATRIX_X_SPACE -1;

			InvalidateSmallMatrix(point);		
		
		}

	}


}


int CELE_1492_LED_DisplayDlg::ComparePoint(CPoint start_pos, CPoint end_pos, CPoint input_pos)
{
	int res = FALSE;

	if((start_pos.x <= input_pos.x)&&(end_pos.x >= input_pos.x))
	{
			if((start_pos.y <= input_pos.y)&&(end_pos.y >= input_pos.y))
			{
				res = TRUE;
			}
			else
				res = FALSE;
	}
	else
		res = FALSE;

	return res;
}


void CELE_1492_LED_DisplayDlg::DrawLed(CPoint point)
{

		CRect rect;

		CPoint matrix_temp;

		t_LED_Column *pLedColumn;
		int seleced_matrix = m_combo_matrix_sel.GetCurSel();

			// 마우스가 선택한 위치 계산
		matrix_temp.x = (point.x - m_matrix_start_pos.x)/LED_WIDTH;
		matrix_temp.y = (point.y - m_matrix_start_pos.y)/LED_HEIGHT;

		TRACE("matrix x = %d, y = %d \n",matrix_temp.x,matrix_temp.y);


		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[matrix_temp.x];

		switch(matrix_temp.y)
		{
		case 0:		pLedColumn->led00 =	m_selected_color;	break;
		case 1:		pLedColumn->led01 =	m_selected_color;	break;
		case 2:		pLedColumn->led02 =	m_selected_color;	break;
		case 3:		pLedColumn->led03 =	m_selected_color;	break;
		case 4:		pLedColumn->led04 =	m_selected_color;	break;
		case 5:		pLedColumn->led05 =	m_selected_color;	break;
		case 6:		pLedColumn->led06 =	m_selected_color;	break;
		case 7:		pLedColumn->led07 =	m_selected_color;	break;
		case 8:		pLedColumn->led08 =	m_selected_color;	break;
		case 9:		pLedColumn->led09 =	m_selected_color;	break;
		case 10:	pLedColumn->led10 =	m_selected_color;	break;
		case 11:	pLedColumn->led11 =	m_selected_color;	break;
		case 12:	pLedColumn->led12 =	m_selected_color;	break;
		case 13:	pLedColumn->led13 =	m_selected_color;	break;
		case 14:	pLedColumn->led14 =	m_selected_color;	break;
		case 15:	pLedColumn->led15 =	m_selected_color;	break;
		case 16:	pLedColumn->led16 =	m_selected_color;	break;
		case 17:	pLedColumn->led17 =	m_selected_color;	break;
		default:	break;
		}

			// 그릴 위치 계산 
		rect.left = m_matrix_start_pos.x + (LED_WIDTH*matrix_temp.x);
		rect.top = m_matrix_start_pos.y + (LED_HEIGHT*matrix_temp.y);
		rect.right = rect.left + LED_WIDTH;
		rect.bottom = rect.top + LED_HEIGHT;

		InvalidateRect(rect,FALSE);	

}


void CELE_1492_LED_DisplayDlg::InvalidateSmallMatrix(CPoint point)
{
	CRect rect;
	rect.left = point.x;
	rect.top = point.y;
	rect.right = rect.left + LED_SMALL_WIDTH*LED_MATRIX_WIDTH;
	rect.bottom = rect.top + LED_SMALL_HEIGHT*LED_MATRIX_HEIGHT;

	InvalidateRect(rect,FALSE);
}

int CELE_1492_LED_DisplayDlg::SelectedSmallMatrix(CPoint point)
{
	int res = 0;
	
	int cnt_x = 0;
	int cnt_y = 0;

	for(cnt_y = 0; cnt_y < 4; cnt_y++)
	{

		CPoint start_pos;
		CPoint end_pos;
		
		start_pos.y = m_small_matrix_start_pos.y + (SMALL_MATRIX_Y_SPACE*cnt_y);
		end_pos.y = start_pos.y + (LED_SMALL_HEIGHT*LED_MATRIX_HEIGHT);

		for(cnt_x = 0; cnt_x < 4; cnt_x++)
		{
			start_pos.x = m_small_matrix_start_pos.x + (SMALL_MATRIX_X_SPACE*cnt_x);
			end_pos.x = start_pos.x + (LED_SMALL_WIDTH*LED_MATRIX_WIDTH);

			if(TRUE == ComparePoint(start_pos,end_pos,point))
			{
				res = (cnt_y*4) + cnt_x;

				TRACE("selected small matrix num = %d \n",res);
				return res;
			}
		}

	}


	res = -1;
	return res; 
}


void CELE_1492_LED_DisplayDlg::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	if(ComparePoint(m_palette_start_pos,m_palette_end_pos,point) == TRUE)					// Select color
	{
		CRect rect;

		m_selected_color = (point.x - m_palette_start_pos.x)/(LED_WIDTH*2);

		rect.left = m_selected_color_box_pos.x;
		rect.top = m_selected_color_box_pos.y;
		rect.right = m_selected_color_box_pos.x + SELECED_COLOR_BOX_WIDTH;
		rect.bottom = m_selected_color_box_pos.y + SELECED_COLOR_BOX_HEIGHT;

		TRACE("color %d \n",m_selected_color);

		InvalidateRect(rect,FALSE);

	}
	else if(ComparePoint(m_matrix_start_pos,m_matrix_end_pos,point) == TRUE)		// Draw Color
	{
		m_mouse_down_up = MOUSE_LEFT_DOWN;

		DrawLed(point);

		// Small Matrix 

		int seleced_matrix = m_combo_matrix_sel.GetCurSel();
		CPoint point;

		point.y = m_small_matrix_start_pos.y + (seleced_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
		point.x = m_small_matrix_start_pos.x + (seleced_matrix%4)*SMALL_MATRIX_X_SPACE -1;

		InvalidateSmallMatrix(point);

	}
	else if(ComparePoint(m_small_matrix_start_pos,m_small_matrix_end_pos,point) == TRUE)
	{
		int res = SelectedSmallMatrix(point);

		if(res != -1)
		{
			m_combo_matrix_sel.SetCurSel(res);
			
			m_combo_Frame_num.SetCurSel(m_led_matrix[res].ImageFrame);
			m_combo_delay_time.SetCurSel(m_led_matrix[res].FrontDelay);
			m_combo_delay_time_rear.SetCurSel(m_led_matrix[res].RearDelay);

			CRect rect;
			rect.left	= m_matrix_start_pos.x ;
			rect.top	= m_matrix_start_pos.y ;
			rect.right	= m_matrix_end_pos.x;
			rect.bottom = m_matrix_end_pos.y;

			InvalidateRect(rect,FALSE);			
		}

	}



	CDialog::OnLButtonDown(nFlags, point);
}

//BOOL CELE_1492_LED_DisplayDlg::OnEraseBkgnd(CDC* pDC)
//{
//	// TODO: Add your message handler code here and/or call default
//
//	return CDialog::OnEraseBkgnd(pDC);
//	
//
//
//	return TRUE;
//}

void CELE_1492_LED_DisplayDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default


	// 메트릭스 범위를 벗어나면 연속 그리기 안되게 수정 
	if((point.x < MATRIX_START_X)||(point.y < MATRIX_START_Y)||\
		(point.x > (MATRIX_START_X + (LED_MATRIX_WIDTH * LED_WIDTH)))||(point.y > (MATRIX_START_Y + (LED_MATRIX_HEIGHT * LED_HEIGHT))))
	{
		m_mouse_down_up = MOUSE_LEFT_UP;
	}


	int selected_color_old = DEFAULT_COLOR;

	// 오른쪽 마우스가 눌렸으면 검은색으로 선택한다.
	if(m_mouse_down_up == MOUSE_RIGHT_DOWN)
	{
		selected_color_old = m_selected_color; 
		m_selected_color = CLEAR_COLOR;
	}

	if((m_mouse_down_up == MOUSE_LEFT_DOWN)||(m_mouse_down_up == MOUSE_RIGHT_DOWN))
	{
		if(ComparePoint(m_matrix_start_pos,m_matrix_end_pos,point) == 1)					// Draw Color
		{
			DrawLed(point);	

			// Small Matrix 
			int seleced_matrix = m_combo_matrix_sel.GetCurSel();
			CPoint point;
			point.y = m_small_matrix_start_pos.y + (seleced_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
			point.x = m_small_matrix_start_pos.x + (seleced_matrix%4)*SMALL_MATRIX_X_SPACE -1;
			InvalidateSmallMatrix(point);
		}
	}

	// 마우스 오른쪽 키를 눌려서 지우고 난뒤에는 본래 색상으로 되돌려 놓는다.
	if(m_mouse_down_up == MOUSE_RIGHT_DOWN)
	{
		m_selected_color = selected_color_old; 
	}


	CDialog::OnMouseMove(nFlags, point);
}

void CELE_1492_LED_DisplayDlg::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	m_mouse_down_up = MOUSE_LEFT_UP;


//	if(ComparePoint(m_matrix_start_pos,m_matrix_end_pos,point) == TRUE)
	{
		// 임시저장한다.
		SaveTemporary_LED_Matrix();
	}

	CDialog::OnLButtonUp(nFlags, point);
}

void CELE_1492_LED_DisplayDlg::OnBnClickedButClear()
{
	// TODO: Add your control notification handler code here


	int seleced_matrix = m_combo_matrix_sel.GetCurSel();

	memset(&m_led_matrix[seleced_matrix],0x00,sizeof(t_LED_Matrix));


	// 임시저장한다.
	SaveTemporary_LED_Matrix();


	// 상단의 큰 매트릭스를 다시 그린다.
	CRect rect;

	rect.left = m_matrix_start_pos.x ;
	rect.top = m_matrix_start_pos.y ;
	rect.right = rect.left + (LED_WIDTH*LED_MATRIX_WIDTH);
	rect.bottom = rect.top + (LED_HEIGHT*LED_MATRIX_HEIGHT);

	InvalidateRect(rect,FALSE);	



			// Small Matrix 
//	int seleced_matrix = m_combo_matrix_sel.GetCurSel();
	CPoint point;

	point.y = m_small_matrix_start_pos.y + (seleced_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
	point.x = m_small_matrix_start_pos.x + (seleced_matrix%4)*SMALL_MATRIX_X_SPACE -1;

	InvalidateSmallMatrix(point);

}


void CELE_1492_LED_DisplayDlg::SaveFile_LedData(t_LED_Matrix *a_matrix,int a_ledNum,CString a_filePath)
{
	CFile file;
	WCHAR *file_path;


	file_path = a_filePath.GetBuffer();

	if(!file.Open(file_path,CFile::modeReadWrite))
	{

//		CFile file1;

		WCHAR file_path1[512];

		wsprintf(file_path1,TEXT(DEFAULT_FILENAME));

		if(!file.Open(file_path1,CFile::modeCreate | CFile::modeReadWrite))
		{
			AfxMessageBox(TEXT("Save file Error"));
			return;					
		}

		m_edit_filepath.Format(TEXT("%s"),file.GetFilePath());


	}

	file.Write(a_matrix,sizeof(t_LED_Matrix)*MATRIX_MAX_NUM);

	file.Close();

	UpdateData(FALSE);

	AfxMessageBox(IDS_SAVE_FILE);

	return;
}

int CELE_1492_LED_DisplayDlg::LoadFile_ini()
{


	//	초기 세팅값 가져오기 ini file

	CFile file;
	WCHAR file_path[512];

	if(m_ini_file_path.IsEmpty() == TRUE)
	{
		wsprintf(file_path,TEXT(INI_FILENAME));
	}
	else
	{
		wsprintf(file_path,m_ini_file_path);
	}


	if(!file.Open(file_path,CFile::modeReadWrite))
	{
		if(!file.Open(file_path,CFile::modeCreate))
		{
			wsprintf(file_path,TEXT(INI_FILENAME));
			if(!file.Open(file_path,CFile::modeCreate))
			{
				AfxMessageBox(TEXT("ini File Open Error"));
				return FALSE;
			}
		}
	}

	m_ini_file_path = file.GetFilePath();

	if(	file.GetLength())
	{
		WCHAR	ws_file_ini[4096];
		CString str_file_ini;
		int file_path_length = 0;

		CString str_filePath;
		int newlinePos = 0;
		int next_pos = 0;

		CString str_comPort;
		int portNum = 0;

		memset(ws_file_ini,0x00,sizeof(WCHAR)*4096);

		file.Read(ws_file_ini,(UINT)file.GetLength());	// 파일에서 정보를 가져온다.

		str_file_ini.Format(ws_file_ini);		// 가져온 파일 정보를 String에 저장한다.

		file_path_length = (int)wcslen(ws_file_ini);		// 총 파일의 길이
		newlinePos = str_file_ini.Find(TEXT("\r\n"),0);		// newline이 있는 위치

//		wsprintf(file_path,TEXT("%hs"),file_path_ini);

		m_edit_filepath= str_file_ini.Mid(0,newlinePos);

		next_pos = str_file_ini.Find(TEXT("\r\n"),newlinePos+1);
		str_comPort = str_file_ini.Mid(newlinePos+1, next_pos - newlinePos - 1);

		if(str_comPort.Compare(TEXT("COM1")) == 0){			TRACE("COM1\n");	portNum = 0;	}
		else if(str_comPort.Compare(TEXT("COM2")) == 0)	{	TRACE("COM2\n");	portNum = 1;	}
		else if(str_comPort.Compare(TEXT("COM3")) == 0)	{	TRACE("COM3\n");	portNum = 2;	}
		else if(str_comPort.Compare(TEXT("COM4")) == 0)	{	TRACE("COM4\n");	portNum = 3;	}
		else if(str_comPort.Compare(TEXT("COM5")) == 0)	{	TRACE("COM5\n");	portNum = 4;	}
		else if(str_comPort.Compare(TEXT("COM6")) == 0)	{	TRACE("COM6\n");	portNum = 5;	}
		else if(str_comPort.Compare(TEXT("COM7")) == 0)	{	TRACE("COM7\n");	portNum = 6;	}
		else if(str_comPort.Compare(TEXT("COM8")) == 0)	{	TRACE("COM8\n");	portNum = 7;	}
		else if(str_comPort.Compare(TEXT("COM9")) == 0)	{	TRACE("COM9\n");	portNum = 8;	}
		else if(str_comPort.Compare(TEXT("COM10")) == 0)	{	TRACE("COM10\n");	portNum = 9;	}
		else if(str_comPort.Compare(TEXT("COM11")) == 0)	{	TRACE("COM11\n");	portNum = 10;	}
		else if(str_comPort.Compare(TEXT("COM12")) == 0)	{	TRACE("COM12\n");	portNum = 11;	}
		else if(str_comPort.Compare(TEXT("COM13")) == 0)	{	TRACE("COM13\n");	portNum = 12;	}
		else if(str_comPort.Compare(TEXT("COM14")) == 0)	{	TRACE("COM14\n");	portNum = 13;	}
		else if(str_comPort.Compare(TEXT("COM15")) == 0)	{	TRACE("COM15\n");	portNum = 14;	}
		else if(str_comPort.Compare(TEXT("COM16")) == 0)	{	TRACE("COM16\n");	portNum = 15;	}
		else if(str_comPort.Compare(TEXT("COM17")) == 0)	{	TRACE("COM17\n");	portNum = 16;	}
		else if(str_comPort.Compare(TEXT("COM18")) == 0)	{	TRACE("COM18\n");	portNum = 17;	}
		else if(str_comPort.Compare(TEXT("COM19")) == 0)	{	TRACE("COM19\n");	portNum = 18;	}
		else if(str_comPort.Compare(TEXT("COM20")) == 0)	{	TRACE("COM20\n");	portNum = 19;	}

		m_combo_port_num.SetCurSel(portNum);


		// 이미지 전송 체크 정보를 가져온다.
		if(str_file_ini.Find(TEXT("Image01 check = ON"),0) != -1)
		{
			m_check_image_01.SetCheck(TRUE);
		}
		else
		{
			m_check_image_01.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image02 check = ON"),0) != -1)
		{
			m_check_image_02.SetCheck(TRUE);
		}
		else
		{
			m_check_image_02.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image03 check = ON"),0) != -1)
		{
			m_check_image_03.SetCheck(TRUE);
		}
		else
		{
			m_check_image_03.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image04 check = ON"),0) != -1)
		{
			m_check_image_04.SetCheck(TRUE);
		}
		else
		{
			m_check_image_04.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image05 check = ON"),0) != -1)
		{
			m_check_image_05.SetCheck(TRUE);
		}
		else
		{
			m_check_image_05.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image06 check = ON"),0) != -1)
		{
			m_check_image_06.SetCheck(TRUE);
		}
		else
		{
			m_check_image_06.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image07 check = ON"),0) != -1)
		{
			m_check_image_07.SetCheck(TRUE);
		}
		else
		{
			m_check_image_07.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image08 check = ON"),0) != -1)
		{
			m_check_image_08.SetCheck(TRUE);
		}
		else
		{
			m_check_image_08.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image09 check = ON"),0) != -1)
		{
			m_check_image_09.SetCheck(TRUE);
		}
		else
		{
			m_check_image_09.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image10 check = ON"),0) != -1)
		{
			m_check_image_10.SetCheck(TRUE);
		}
		else
		{
			m_check_image_10.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image11 check = ON"),0) != -1)
		{
			m_check_image_11.SetCheck(TRUE);
		}
		else
		{
			m_check_image_11.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image12 check = ON"),0) != -1)
		{
			m_check_image_12.SetCheck(TRUE);
		}
		else
		{
			m_check_image_12.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image13 check = ON"),0) != -1)
		{
			m_check_image_13.SetCheck(TRUE);
		}
		else
		{
			m_check_image_13.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image14 check = ON"),0) != -1)
		{
			m_check_image_14.SetCheck(TRUE);
		}
		else
		{
			m_check_image_14.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image15 check = ON"),0) != -1)
		{
			m_check_image_15.SetCheck(TRUE);
		}
		else
		{
			m_check_image_15.SetCheck(FALSE);
		}

		if(str_file_ini.Find(TEXT("Image16 check = ON"),0) != -1)
		{
			m_check_image_16.SetCheck(TRUE);
		}
		else
		{
			m_check_image_16.SetCheck(FALSE);
		}



		UpdateData(FALSE);
	}

	file.Close();

	return TRUE;
}


void CELE_1492_LED_DisplayDlg::SaveFile_ini()
{
	CFile file;

	WCHAR file_path_ini[512];
	WCHAR *pFile_path = NULL;

	CString str_newline = TEXT("\r\n");
	WCHAR *pNewline = NULL;

	CString str_comPort;
	WCHAR *pComPort = NULL;


	if(m_ini_file_path.IsEmpty() == TRUE)
	{
		wsprintf(file_path_ini,TEXT(INI_FILENAME));
	}
	else
	{
		wsprintf(file_path_ini,m_ini_file_path);
	}


	if(!file.Open(file_path_ini,CFile::modeCreate | CFile::modeReadWrite))
	{
		wsprintf(file_path_ini,TEXT(INI_FILENAME));
		if(!file.Open(file_path_ini,CFile::modeCreate | CFile::modeReadWrite))
		{
			AfxMessageBox(TEXT("ini File Open Error"));
			return;
		}
	}

	WCHAR comPortName[32] = {0,};
//	m_combo_port_num.GetWindowTextW(comPortName,m_combo_port_num.GetCurSel());
	m_combo_port_num.GetLBText(m_combo_port_num.GetCurSel(),comPortName);

	str_comPort.Format(comPortName);

	//  파일 경로를 저장한다.
	pFile_path = m_edit_filepath.GetBuffer();
	file.Write(pFile_path,m_edit_filepath.GetLength()*sizeof(WCHAR));	

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	// Save UART PORT NUMBER
	pComPort = str_comPort.GetBuffer();
	file.Write(pComPort,str_comPort.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	
	// Save Check State
	CString str_check;
	WCHAR *pStr_check = NULL;

	if(m_check_image_01.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image01 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image01 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_02.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image02 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image02 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_03.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image03 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image03 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_04.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image04 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image04 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_05.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image05 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image05 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));

	if(m_check_image_06.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image06 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image06 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_07.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image07 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image07 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));

	if(m_check_image_08.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image08 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image08 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));

	if(m_check_image_09.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image09 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image09 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));

	if(m_check_image_10.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image10 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image10 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));

	if(m_check_image_11.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image11 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image11 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_12.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image12 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image12 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_13.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image13 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image14 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));

	if(m_check_image_14.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image14 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image14 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));




	if(m_check_image_15.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image15 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image15 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	if(m_check_image_16.GetCheck() == TRUE)
	{
		str_check.SetString(TEXT("Image16 check = ON"));
	}
	else
	{
		str_check.SetString(TEXT("Image16 check = OFF"));
	}
	pStr_check = str_check.GetBuffer();
	file.Write(pStr_check,str_check.GetLength()*sizeof(WCHAR));

	pNewline= str_newline.GetBuffer();								// 줄내림
	file.Write(pNewline,str_newline.GetLength()*sizeof(WCHAR));


	file.Close();

}


void CELE_1492_LED_DisplayDlg::OnBnClickedButFileSave()
{
	// TODO: Add your control notification handler code here

	if(m_edit_filepath.GetLength() == 0)
	{
		CFile file;

		WCHAR file_path[512];

		wsprintf(file_path,TEXT(DEFAULT_FILENAME));

		if(!file.Open(file_path,CFile::modeCreate))
		{
			AfxMessageBox(IDS_ERROR_CREATE_SAVE_FILE);
			return;					
		}
		
		m_edit_filepath.Format(TEXT("%s"),file.GetFilePath());

		file.Close();
	}


	SaveFile_LedData(m_led_matrix,MATRIX_MAX_NUM,m_edit_filepath);
	SaveFile_ini();

}

void CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboMatrixSel()
{
	// TODO: Add your control notification handler code here

	int sel = 0;

	CRect rect;
	rect.left	= m_matrix_start_pos.x ;
	rect.top	= m_matrix_start_pos.y ;
	rect.right	= rect.left + LED_WIDTH*LED_MATRIX_WIDTH;
	rect.bottom = rect.top + LED_HEIGHT*LED_MATRIX_HEIGHT;

	InvalidateRect(rect,FALSE);	


	sel = m_combo_matrix_sel.GetCurSel();

	m_combo_Frame_num.SetCurSel(m_led_matrix[sel].ImageFrame);
	m_combo_delay_time.SetCurSel(m_led_matrix[sel].FrontDelay);
	m_combo_delay_time_rear.SetCurSel(m_led_matrix[sel].RearDelay);

	UpdateData(FALSE);

}



void CELE_1492_LED_DisplayDlg::OnEnChangeEditText()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	CString string;

	m_edit_string_box.GetWindowTextW(string);

	int length = m_edit_string_box.GetWindowTextLengthW();


	if(length > MAX_EDIT_CHAR_NUM)
	{
		m_edit_string_box.SetWindowTextW(string.GetBufferSetLength(MAX_EDIT_CHAR_NUM));
	}


#if 0
	// Text Box 앞쪽의 글자표시 상자를 갱신한다.
	CRect rect;

	rect.left = m_text_start_pos.x ;
	rect.top = m_text_start_pos.y ;
	rect.right = m_text_end_pos.x;
	rect.bottom = m_text_end_pos.y;

	InvalidateRect(rect,FALSE);	

#endif

	return;


}




////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




BOOL CELE_1492_LED_DisplayDlg::OpenPort(CString strPortName, 
					   DWORD dwBaud, BYTE byData, BYTE byStop, BYTE byParity )
{
	//Local Variable
	COMMTIMEOUTS	timeouts;
	DCB				dcb;
	
	// overlapped structure variable initialize
	m_osRead.Offset = 0;
	m_osRead.OffsetHigh = 0;
	//--> Read event creation failed
	if ( !(m_osRead.hEvent = CreateEvent(NULL, TRUE, FALSE, NULL)) ) 	
	{
		return FALSE;
	}


	m_osWrite.Offset = 0;
	m_osWrite.OffsetHigh = 0;
	//--> Write event creation failed
	if (! (m_osWrite.hEvent = CreateEvent(NULL, TRUE, FALSE, NULL)))
	{
		return FALSE;
	}

	
	//--> save PortName 
	m_sPortName = strPortName;

	//--> RS 232 Port Open
	m_hComm = CreateFile( m_sPortName, 
						  GENERIC_READ | GENERIC_WRITE, 0, NULL,
						  OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL | FILE_FLAG_OVERLAPPED, 
						  NULL);


	//--> if opening port has been failed
	if (m_hComm == (HANDLE) -1)
	{
		AfxMessageBox(TEXT("Fail to open COM port"));
		return FALSE;
	}
	

	// Port Status configuration

	// EV_RXCHAR event Configuration
	//DEBUG
	SetCommMask( m_hComm, 0x0000); //Clear
	SetCommMask( m_hComm, EV_RXCHAR); //Set EV_RXCHAR

	// InQueue, OutQueue size configuration
	SetupComm( m_hComm, BUFF_SIZE, BUFF_SIZE);	

	// empty port
	PurgeComm( m_hComm,					
			   PURGE_TXABORT | PURGE_TXCLEAR | PURGE_RXABORT | PURGE_RXCLEAR);

	// timeout configuration
	timeouts.ReadIntervalTimeout = 0xFFFFFFFF;
	timeouts.ReadTotalTimeoutMultiplier = 0;
	timeouts.ReadTotalTimeoutConstant = 0;
	
	timeouts.WriteTotalTimeoutMultiplier = 2*CBR_9600 / dwBaud;
	timeouts.WriteTotalTimeoutConstant = 0;
	
	SetCommTimeouts( m_hComm, &timeouts);

	// dcb configuration
	dcb.DCBlength = sizeof(DCB);

	GetCommState( m_hComm, &dcb);	
	// Configure baudrate
	dcb.BaudRate = dwBaud;
	// Data 8bit
	dcb.ByteSize = byData;
	// Noparity
	dcb.Parity = byParity;
	// 1 Stop Bit
	dcb.StopBits = byStop;


	// Port reconfiguration
	if( !SetCommState( m_hComm, &dcb) )	
	{
		return FALSE;
	}

	// create thread
	m_bConnected = TRUE;
	serial_communication_init = TRUE;


#if 0
	if(b_UpdateAll_initboot == FALSE)
	{
		m_hThreadWatchComm = CreateThread( NULL, 0, st_ThreadWatchComm, this, 0, &dwThreadID);
		m_hThreadInitComm = CreateThread( NULL, 0, st_ThreadInitComm, this, 0, &dwThreadInit);
	
		// if failed creating thread
		if (! m_hThreadWatchComm)
		{
			// Close Port
			AfxMessageBox("Failed creating RXthread");
			ClosePort();
			return FALSE;
		}

		if (! m_hThreadInitComm)
		{
			// ClosePort
			AfxMessageBox("Failed creating TXthread");
			ClosePort();
			return FALSE;
		}
	}

#endif
	m_comport_state.Format(IDS_PORT_OPEN);

	UpdateData(FALSE);

	return TRUE;
}

void CELE_1492_LED_DisplayDlg::ClosePort()
{
	//Port has been closed
	m_bConnected = FALSE;
	
	//UnMask
	SetCommMask( m_hComm, 0);
	
	//Clear Port
	PurgeComm( m_hComm,	PURGE_TXABORT | PURGE_TXCLEAR | PURGE_RXABORT | PURGE_RXCLEAR);
	
	//Close Handle
	CloseHandle(m_hComm);

	m_comport_state.Format(IDS_PORT_CLOSE);
	UpdateData(FALSE);
}

DWORD CELE_1492_LED_DisplayDlg::WriteComm(BYTE *pBuff, DWORD nToWrite)
{
	DWORD	dwWritten, dwError, dwErrorFlags;
	COMSTAT	comstat;

	// if port is not opened
	if( !m_bConnected )		
	{
		return 0;
	}
	
	// write buffer and return number of written to dwWrite
	if( !WriteFile( m_hComm, pBuff, nToWrite, &dwWritten, &m_osWrite))
	{
		// remained something to send
		if (GetLastError() == ERROR_IO_PENDING)
		{
			// if have something to read or write
			// wait until timeout's declare

			while (! GetOverlappedResult( m_hComm, &m_osWrite, &dwWritten, TRUE))
			{
				dwError = GetLastError();
				if (dwError != ERROR_IO_INCOMPLETE)
				{
					ClearCommError( m_hComm, &dwErrorFlags, &comstat);
					TRACE( "ClearCommError\n" );
					break;
				}
			}

		}
		else
		{
			dwWritten = 0;
			ClearCommError( m_hComm, &dwErrorFlags, &comstat);
		}
	}

	// return number of written
	return dwWritten;
}

DWORD CELE_1492_LED_DisplayDlg::ReadComm(BYTE *pBuff, DWORD nToRead)
{
	DWORD	dwRead,dwError, dwErrorFlags;
	COMSTAT comstat;

	//Read First in system queue
	ClearCommError( m_hComm, &dwErrorFlags, &comstat);

	//Have Something to read system queue
	dwRead = comstat.cbInQue;
	if(dwRead > 0)
	{
		//Read first but no data to read
		if( !ReadFile( m_hComm, pBuff, nToRead, &dwRead, &m_osRead) )
		{
			//if remained something to read
			if (GetLastError() == ERROR_IO_PENDING)
			{
				//Wait until timeouts's declare
				while (! GetOverlappedResult( m_hComm, &m_osRead, &dwRead, TRUE))
				{
					dwError = GetLastError();
					if (dwError != ERROR_IO_INCOMPLETE)
					{
						ClearCommError( m_hComm, &dwErrorFlags, &comstat);
						break;
					}
				}
			}
			else
			{
				dwRead = 0;
				ClearCommError( m_hComm, &dwErrorFlags, &comstat);
			}
		}
	}

	// return sizeof(read)
	return dwRead;
}

DWORD CELE_1492_LED_DisplayDlg::WriteS(CString pBuff, DWORD nToWrite)
{
	DWORD ret_value = 0;

#if 0
	int i = 0;
	int etc = 0;
	int bufPos = 0;
	
	BYTE* Send_buff;
	Send_buff = new BYTE[nToWrite];
	
	for(i = 0; (DWORD)i < nToWrite; i++)
	{
		Send_buff[bufPos] = pBuff[i];
		bufPos++;
	}

	etc = bufPos % 8;
	for(i = 0; i < bufPos-etc; i+= 8)
	{
		ret_value += WriteComm(&Send_buff[i], 8);
	}

	if(etc != 0)
	{
		ret_value += WriteComm(&Send_buff[bufPos-etc], etc);
	}

	delete [] Send_buff;
#endif
	return ret_value;

}

CString CELE_1492_LED_DisplayDlg::ReadS(DWORD nToRead)
{
	DWORD i=0;
	DWORD dwRead=0;
	DWORD dwEvent=0;
	CString str = TEXT("");
	BYTE buff[2048]={0,};

//	if(event_set == TRUE)
//		return str;

	do
	{
		WaitCommEvent( m_hComm, &dwEvent, NULL);		// 시리얼 통신으로 읽을 데이타가 있을때까지 기다린다.
		if((dwEvent & EV_RXCHAR) == EV_RXCHAR)
		{
			Sleep(10);
			dwRead = ReadComm(buff, 2048);
//			WaitCommEvent( m_hComm, &dwEvent, NULL);
			TRACE( "EV_RXCHAR\n" );
		}
		else
			TRACE( "!EV_RXCHAR\n" );

	} while((dwEvent & EV_RXCHAR) != EV_RXCHAR);

	for(i = 0; i < dwRead; i++)
	{
		str.Format(TEXT("%c"), buff[i]);
	}
	return str;
}



CString CELE_1492_LED_DisplayDlg::byIndexComPort(int xPort)
{
	CString PortName;
	switch(xPort)
	{
		case 0:		PortName = "COM1"; 			break;
		case 1:		PortName = "COM2";			break;
		case 2:		PortName = "COM3"; 			break;
		case 3:		PortName = "COM4";			break;
		case 4:		PortName = "\\\\.\\COM5"; 	break;
		case 5:		PortName = "\\\\.\\COM6";	break;
		case 6:		PortName = "\\\\.\\COM7"; 	break;
		case 7:		PortName = "\\\\.\\COM8";	break;
		case 8:		PortName = "\\\\.\\COM9"; 	break;
		case 9:		PortName = "\\\\.\\COM10";	break;
		case 10:	PortName = "\\\\.\\COM11";	break;
		case 11:	PortName = "\\\\.\\COM12";	break;
		case 12:	PortName = "\\\\.\\COM13";	break;
		case 13:	PortName = "\\\\.\\COM14";	break;
		case 14:	PortName = "\\\\.\\COM15";	break;
		case 15:	PortName = "\\\\.\\COM16";	break;
		case 16:	PortName = "\\\\.\\COM17";	break;
		case 17:	PortName = "\\\\.\\COM18";	break;
		case 18:	PortName = "\\\\.\\COM19";	break;
		case 19:	PortName = "\\\\.\\COM20";	break;
		case 20:	PortName = "\\\\.\\COM21";	break;
		case 21:	PortName = "\\\\.\\COM22";	break;
		case 22:	PortName = "\\\\.\\COM23";	break;
		case 23:	PortName = "\\\\.\\COM24";	break;
		case 24:	PortName = "\\\\.\\COM25";	break;
		case 25:	PortName = "\\\\.\\COM26";	break;
		case 26:	PortName = "\\\\.\\COM27";	break;
		case 27:	PortName = "\\\\.\\COM28";	break;
		case 28:	PortName = "\\\\.\\COM29";	break;
		case 29:	PortName = "\\\\.\\COM30";	break;
	}	
	return PortName;
}

DWORD CELE_1492_LED_DisplayDlg::byIndexBaud(int xBaud)
{
	DWORD dwBaud;
	switch(xBaud)
	{
		case 0:		dwBaud = CBR_4800;		break;
		case 1:		dwBaud = CBR_9600;		break;
		case 2:		dwBaud = CBR_14400;		break;
		case 3:		dwBaud = CBR_19200;		break;
		case 4:		dwBaud = CBR_38400;		break;
		case 5:		dwBaud = CBR_56000;		break;
		case 6:		dwBaud = CBR_57600;		break;
		case 7:		dwBaud = CBR_115200;	break;
	}
	return dwBaud;
}

BYTE CELE_1492_LED_DisplayDlg::byIndexData(int xData)
{
	BYTE byData;
	switch(xData)
	{
		case 0 :	byData = 5;			break;
		case 1 :	byData = 6;			break;
		case 2 :	byData = 7;			break;
		case 3 :	byData = 8;			break;
	}
	return byData;
}

BYTE CELE_1492_LED_DisplayDlg::byIndexStop(int xStop)
{
	BYTE byStop;
	if(xStop == 0)
	{
		byStop = ONESTOPBIT;
	}
	else
	{
		byStop = TWOSTOPBITS;
	}
	return byStop;
}

BYTE CELE_1492_LED_DisplayDlg::byIndexParity(int xParity)
{
	BYTE byParity;
	switch(xParity)
	{
	case 0 :	byParity = NOPARITY;	break;
	case 1 :	byParity = ODDPARITY;	break;
	case 2 :	byParity = EVENPARITY;	break;
	}

	return byParity;
}





////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





#define POLYNOMIAL	0x8005
#define USE_CRC_TABLE

#ifndef USE_CRC_TABLE

static unsigned short crc_table[256];

#else

static unsigned short crc_table[256] = {0x0000,
0x8005, 0x800F, 0x000A, 0x801B, 0x001E, 0x0014, 0x8011,
0x8033, 0x0036, 0x003C, 0x8039, 0x0028, 0x802D, 0x8027,
0x0022, 0x8063, 0x0066, 0x006C, 0x8069, 0x0078, 0x807D,
0x8077, 0x0072, 0x0050, 0x8055, 0x805F, 0x005A, 0x804B,
0x004E, 0x0044, 0x8041, 0x80C3, 0x00C6, 0x00CC, 0x80C9,
0x00D8, 0x80DD, 0x80D7, 0x00D2, 0x00F0, 0x80F5, 0x80FF,
0x00FA, 0x80EB, 0x00EE, 0x00E4, 0x80E1, 0x00A0, 0x80A5,
0x80AF, 0x00AA, 0x80BB, 0x00BE, 0x00B4, 0x80B1, 0x8093,
0x0096, 0x009C, 0x8099, 0x0088, 0x808D, 0x8087, 0x0082,
0x8183, 0x0186, 0x018C, 0x8189, 0x0198, 0x819D, 0x8197,
0x0192, 0x01B0, 0x81B5, 0x81BF, 0x01BA, 0x81AB, 0x01AE,
0x01A4, 0x81A1, 0x01E0, 0x81E5, 0x81EF, 0x01EA, 0x81FB,
0x01FE, 0x01F4, 0x81F1, 0x81D3, 0x01D6, 0x01DC, 0x81D9,
0x01C8, 0x81CD, 0x81C7, 0x01C2, 0x0140, 0x8145, 0x814F,
0x014A, 0x815B, 0x015E, 0x0154, 0x8151, 0x8173, 0x0176,
0x017C, 0x8179, 0x0168, 0x816D, 0x8167, 0x0162, 0x8123,
0x0126, 0x012C, 0x8129, 0x0138, 0x813D, 0x8137, 0x0132,
0x0110, 0x8115, 0x811F, 0x011A, 0x810B, 0x010E, 0x0104,
0x8101, 0x8303, 0x0306, 0x030C, 0x8309, 0x0318, 0x831D,
0x8317, 0x0312, 0x0330, 0x8335, 0x833F, 0x033A, 0x832B,
0x032E, 0x0324, 0x8321, 0x0360, 0x8365, 0x836F, 0x036A,
0x837B, 0x037E, 0x0374, 0x8371, 0x8353, 0x0356, 0x035C,
0x8359, 0x0348, 0x834D, 0x8347, 0x0342, 0x03C0, 0x83C5,
0x83CF, 0x03CA, 0x83DB, 0x03DE, 0x03D4, 0x83D1, 0x83F3,
0x03F6, 0x03FC, 0x83F9, 0x03E8, 0x83ED, 0x83E7, 0x03E2,
0x83A3, 0x03A6, 0x03AC, 0x83A9, 0x03B8, 0x83BD, 0x83B7,
0x03B2, 0x0390, 0x8395, 0x839F, 0x039A, 0x838B, 0x038E,
0x0384, 0x8381, 0x0280, 0x8285, 0x828F, 0x028A, 0x829B,
0x029E, 0x0294, 0x8291, 0x82B3, 0x02B6, 0x02BC, 0x82B9,
0x02A8, 0x82AD, 0x82A7, 0x02A2, 0x82E3, 0x02E6, 0x02EC,
0x82E9, 0x02F8, 0x82FD, 0x82F7, 0x02F2, 0x02D0, 0x82D5,
0x82DF, 0x02DA, 0x82CB, 0x02CE, 0x02C4, 0x82C1, 0x8243,
0x0246, 0x024C, 0x8249, 0x0258, 0x825D, 0x8257, 0x0252,
0x0270, 0x8275, 0x827F, 0x027A, 0x826B, 0x026E, 0x0264,
0x8261, 0x0220, 0x8225, 0x822F, 0x022A, 0x823B, 0x023E,
0x0234, 0x8231, 0x8213, 0x0216, 0x021C, 0x8219, 0x0208,
0x820D, 0x8207, 0x0202 };
#endif




void gen_crc_table()
{
	#ifndef USE_CRC_TABLE
	register unsigned short	i, j;
	register unsigned short	crc_accum;

	/* 0 ~ 255 까지의 CRC를 미리 계산 */
	/* ex) i=2 이면 0x020000 을 polynomial로 CRC 나눗셈 하는 것임 */
	for(i=0; i<256; i++)
	{
		crc_accum = ((unsigned short)i<<8);
		/* CRC나눗셈이 가능하도록 8-bit shift */
		for(j=0; j<8; j++)
		{
			/* 나머지항의 MSB가 1인지 검사 */
			if(crc_accum & 0x8000L)
				crc_accum = (crc_accum << 1) ^ POLYNOMIAL;
				/* 참이면 1-bit shift하고 polynomial을 빼줌(==XOR) */
			else
				crc_accum = (crc_accum << 1);
				/* 거짓이면 1-bit shift만 함*/
		}
		/* 결과적으로 총 16-bit가 shift 되었고 */
		/* 나머지만 남게 됨 */
		crc_table[i] = crc_accum;

		//printf("%03d=%04x, ", i, crc_accum);
		//if(i%7 == 0)
		//	printf("\n");
	}
	#endif
	return;
}


/*
이전에 계산한 CRC 값을 추가된 데이터에 맞춰 갱신함
이전:      ___________
      8005 | XX 00 00
                yy yy ---> CRC

갱신:      ______________
      8005 | XX ZZ 00 00
                yy yy 00
                   ww ww ---> CRC'
*/
unsigned short update_crc(unsigned short crc_accum, unsigned char *data_blk_ptr,unsigned int data_blk_size)
{
	unsigned int i, j;

	for(j=0; j<data_blk_size; j++)
	{
		/* 추가된 데이터 ZZ는                      */
		/* 이전 계산시 나머지항의 상위 바이트와    */
		/* 자리수가 맞으므로 그 둘을 합하고 다시   */
		/* 그 자리까지의 나머지를 구함             */
		i = ((unsigned short)(crc_accum >> 8) ^ *data_blk_ptr++) & 0xff;
		crc_accum = (crc_accum << 8) ^ crc_table[i];
        /* 나머지항의 하위 바이트는 뒤에 0x00 이   */
		/* 추가되어 자리수가 올라가고 앞자리의     */
        /* 나머지와 더해짐 */
	}
	return crc_accum;
}



void CELE_1492_LED_DisplayDlg::OnBnClickedButHelp()
{
	// TODO: Add your control notification handler code here

	User_Help user_help;

	user_help.DoModal();



//	AfxMessageBox(IDS_HELP);

	return;

}

void CELE_1492_LED_DisplayDlg::OnBnClickedButSend()
{
	// TODO: Add your control notification handler code here
	int find = FALSE;
	CString str_error;
	str_error.LoadStringW(IDS_IMAGE_WIDTH_ERROR);

	if(	m_check_image_01.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[0]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("1번")+str_error);
			return;
		}
	}
	if(	m_check_image_02.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[1]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("2번")+str_error);
			return;
		}
	}
	if(	m_check_image_03.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[2]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("3번")+str_error);
			return;
		}
	}
	if(	m_check_image_04.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[3]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("4번")+str_error);
			return;
		}
	}
	if(	m_check_image_05.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[4]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("5번")+str_error);
			return;
		}
	}
	if(	m_check_image_06.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[5]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("6번")+str_error);
			return;
		}
	}
	if(	m_check_image_07.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[6]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("7번")+str_error);
			return;
		}
	}
	if(	m_check_image_08.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[7]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("8번")+str_error);
			return;
		}
	}
	if(	m_check_image_09.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[8]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("9번")+str_error);
			return;
		}
	}
	if(	m_check_image_10.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[9]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("10번")+str_error);
			return;
		}
	}
	if(	m_check_image_11.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[10]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("11번")+str_error);
			return;
		}
	}
	if(	m_check_image_12.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[11]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("12번")+str_error);
			return;
		}
	}
	if(	m_check_image_13.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[12]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("13번")+str_error);
			return;
		}
	}
	if(	m_check_image_14.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[13]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("14번")+str_error);
			return;
		}
	}
	if(	m_check_image_15.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[14]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("15번")+str_error);
			return;
		}
	}
	if(	m_check_image_16.GetCheck() == TRUE)
	{
		if ( 0 < Get_Matrix_Width(&m_led_matrix[15]))		// 이미지가 있는지 확인한다.
		{
			find = TRUE;
		}
		else
		{
			AfxMessageBox(TEXT("16번")+str_error);
			return;
		}
	}


	if(find == FALSE)
	{
		AfxMessageBox(IDS_CHECK_BOX_ERROR);

		return;
	}


	if(!OpenPort(byIndexComPort(m_combo_port_num.GetCurSel()), byIndexBaud(DEF_BAUD), byIndexData(3), byIndexStop(0), byIndexParity(0)))
	{
//		AfxMessageBox(IDS_ERROR_OPEN_COM_PORT);
		return ;
	}

	TRACE("Open Port Num(%d)\n",m_combo_port_num.GetCurSel());

	Sleep(300);


	if(	m_check_image_01.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,0);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}

	if(TRUE == DEMO_VERSION)
	{
		// 데모 버젼이므로 여기서 종료한다.
		// 포트를 종료한다.

		CString str_crack = TEXT("아름이");
		CString str_crack2 = TEXT("가온이");
		CString str_temp;
		int crack = TRUE;

		m_edit_string_box.GetWindowTextW(str_temp);

		if((str_crack2.Compare(str_temp) == 0)||(str_crack.Compare(str_temp) == 0))
		{
			crack = FALSE;
		}

		if(crack == TRUE)
		{
			ClosePort();
			TRACE("Close Port Num(%d)",m_combo_port_num.GetCurSel());
			AfxMessageBox(IDS_DEMO_VERSION);
			return;	
		}
	}


	if(	m_check_image_02.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,1);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_03.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,2);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_04.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,3);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_05.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,4);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_06.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,5);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_07.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,6);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_08.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,7);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_09.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,8);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_10.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,9);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_11.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,10);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_12.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,11);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_13.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,12);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_14.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,13);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_15.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,14);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}
	if(	m_check_image_16.GetCheck() == TRUE)
	{
		// LED Image Data를 전달한다.		16개의 이미지를 모두 전달한다.
		Send_Matrix_Data(m_led_matrix,15);
		Sleep(500);							// Data를 전송하고 500ms 정도 기다렸다가 다음 이미지를 전송한다.
	}

	// 포트를 종료한다.
	ClosePort();
	TRACE("Close Port Num(%d)",m_combo_port_num.GetCurSel());


	CELE_1492_LED_DisplayDlg::SaveFile_ini();

	return;
}


int CELE_1492_LED_DisplayDlg::Get_Matrix_Width(t_LED_Matrix *a_Matrix)
{
	// 이미지를 전송할때와 저장할때 계산하도록 하자.
	// 그정도면 충분하다.
	// 어디가지 이미지가 있는지 판단한다. 그리고 그 값을 width로 저장 


	int cnt = 0;
	int image_start = 0;
	int image_end = 0;
	int res_width = 0;

	for(cnt = 0; cnt< LED_MATRIX_WIDTH; cnt++)
	{
		int find = 0;

		if(a_Matrix->Led_Column[cnt].led00)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led01)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led02)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led03)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led04)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led05)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led06)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led07)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led08)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led09)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led10)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led11)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led12)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led13)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led14)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led15)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led16)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led17)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led18)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led19)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led20)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led21)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led22)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led23)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led24)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led25)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led26)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led27)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led28)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led29)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led30)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led31)		{		find = 1;		}

		if(find == 1)
		{
			image_start = cnt;
			break;
		}

	}

	if(cnt == LED_MATRIX_WIDTH)		// 이미지가 없다
		return 0;



	for(cnt = LED_MATRIX_WIDTH-1; cnt>=0; cnt--)
	{
		int find = 0;

		if(a_Matrix->Led_Column[cnt].led00)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led01)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led02)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led03)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led04)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led05)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led06)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led07)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led08)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led09)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led10)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led11)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led12)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led13)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led14)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led15)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led16)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led17)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led18)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led19)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led20)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led21)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led22)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led23)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led24)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led25)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led26)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led27)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led28)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led29)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led30)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led31)		{		find = 1;		}

		if(find == 1)
		{
			image_end = cnt+1;
			break;
		}

	}


	res_width = image_end - image_start;


	return res_width;
}




// 이미지를 전달하기 위해서 Data만들기
// 실제 이미지가 있는 부분만 전달하자
void CELE_1492_LED_DisplayDlg::Make_Matrix_Data(unsigned char *pBuff,t_LED_Matrix *a_Matrix)
{
	int cnt = 0;
	int image_pos = 0;
	int buff_Max = (120*LED_MATRIX_HEIGHT)/2;
	unsigned char temp = 0;

	int image_start = 0;
	int image_end = 0;






	// 이미지의 시작 포인트를 찾는다.
	for(cnt = 0; cnt< LED_MATRIX_WIDTH; cnt++)
	{
		int find = 0;

		if(a_Matrix->Led_Column[cnt].led00)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led01)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led02)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led03)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led04)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led05)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led06)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led07)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led08)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led09)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led10)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led11)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led12)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led13)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led14)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led15)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led16)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led17)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led18)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led19)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led20)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led21)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led22)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led23)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led24)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led25)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led26)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led27)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led28)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led29)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led30)		{		find = 1;		}
		if(a_Matrix->Led_Column[cnt].led31)		{		find = 1;		}

		if(find == 1)
		{
			image_start = cnt;
			break;
		}

	}

#if 0
	if(cnt == LED_MATRIX_WIDTH)		// 이미지가 없다
	{
		AfxMessageBox(TEXT("Error No Image \r\n Draw Image Please~~."));
		return ;
	}
#endif

	// 이미지의 시작 포인트를 찾았으니 거기서 부터 시작한다.
	for(cnt = image_start; cnt < LED_MATRIX_WIDTH; cnt++)
	{
		temp = a_Matrix->Led_Column[cnt].led00;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led01;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led02;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led03;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led04;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led05;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led06;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led07;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led08;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led09;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led10;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led11;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led12;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led13;
		*pBuff |= temp&0x0f;
		pBuff+=1;
		temp = a_Matrix->Led_Column[cnt].led14;
		*pBuff |= (temp<<4)&0xf0;
		temp = a_Matrix->Led_Column[cnt].led15;
		*pBuff |= temp&0x0f;
		pBuff+=1;

		if(LED_MATRIX_HEIGHT > 16)
		{
			temp = a_Matrix->Led_Column[cnt].led16;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 17)
			{
				temp = a_Matrix->Led_Column[cnt].led17;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 18)
		{
			temp = a_Matrix->Led_Column[cnt].led18;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 19)
			{
				temp = a_Matrix->Led_Column[cnt].led19;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 20)
		{
			temp = a_Matrix->Led_Column[cnt].led20;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 21)
			{
				temp = a_Matrix->Led_Column[cnt].led21;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 22)
		{
			temp = a_Matrix->Led_Column[cnt].led22;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 23)
			{
				temp = a_Matrix->Led_Column[cnt].led23;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 24)
		{
			temp = a_Matrix->Led_Column[cnt].led24;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 25)
			{
				temp = a_Matrix->Led_Column[cnt].led25;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 26)
		{
			temp = a_Matrix->Led_Column[cnt].led26;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 27)
			{
				temp = a_Matrix->Led_Column[cnt].led27;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 28)
		{
			temp = a_Matrix->Led_Column[cnt].led28;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 29)
			{
				temp = a_Matrix->Led_Column[cnt].led29;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}

		if(LED_MATRIX_HEIGHT > 30)
		{
			temp = a_Matrix->Led_Column[cnt].led30;
			*pBuff |= (temp<<4)&0xf0;
			if(LED_MATRIX_HEIGHT > 31)
			{
				temp = a_Matrix->Led_Column[cnt].led31;
				*pBuff |= temp&0x0f;
			}
			pBuff+=1;
		}


	}



#if 0
	//	데이터 확인하기
	for(cnt = 0; cnt < LED_MATRIX_WIDTH*2; cnt+=2)
	{

		for(int cnt1 = 0; cnt1< 8; cnt1++)
		{
			TRACE("%d",(pBuff[cnt+1]>>cnt1)&0x1);
		}
		for(int cnt1 = 0; cnt1< 8; cnt1++)
		{
			TRACE("%d",(pBuff[cnt+0]>>cnt1)&0x1);
		}
	
		TRACE("\n");
	}
#endif


	return;
}



void CELE_1492_LED_DisplayDlg::Send_Matrix_Data(t_LED_Matrix *a_Matrix, int a_Matrix_num)
{

	int matrix_num = a_Matrix_num;
	// Start Code
	BYTE transData[2048];		// 넉넉하게 버퍼를 잡는다.  한개의 LED 이미지를 전송할 분량이다.
	BYTE *pTransData = NULL;

	BYTE startCode[] ="LED";			// 전송 StartCode이다.
	BYTE endCode[] = "\r\n";			// 전송 EndCode이다.
	unsigned short DataLength = 0;		//  총 데이터의 길이를 나타낸다.  Checksum 제외
	int X = 0;
	BYTE cmd = MODEL_NUM;				// 도깨비불 전송 명령어이다. 이것은 모델명을 나타내며 도깨비불은 0x01이다.
	unsigned short checkSum = 0;



	// 현재 전송할 이미지 번호 
	TRACE(" matrix_num = %d \n",matrix_num);

	memset(transData,0x00,sizeof(transData));

	// 총 데이터 길이를 계산한다.
	X = (LED_MATRIX_HEIGHT*120)/2 + 16;
	DataLength =	X + 5;

	TRACE("DataLength = 0x%04x\n",DataLength);


	// 전송할 데이터를 정리한다.
	pTransData = transData;
	memcpy(pTransData,startCode,3);	
	pTransData+=3;					//3
	memcpy(pTransData,&DataLength,sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);	// 5


	memcpy(pTransData,&cmd,sizeof(unsigned char));
	pTransData+=sizeof(unsigned char);


	// 현재 이미지 번호
	BYTE num_temp = matrix_num&0xff;
	*pTransData = num_temp;
	pTransData+=sizeof(unsigned char);

	// Gyro_x
	*pTransData = 0;
	pTransData+=sizeof(unsigned char);
	// Gyro_y
	*pTransData = 0;
	pTransData+=sizeof(unsigned char);
	// Gyro_z
	*pTransData = 0;
	pTransData+=sizeof(unsigned char);

	
	// 이미지 프레임수 
	*pTransData = m_led_matrix[matrix_num].ImageFrame;
	pTransData+=sizeof(unsigned char);

	// 이미지의 가로폭을 계산한다.
	m_led_matrix[matrix_num].ImageSpace =  Get_Matrix_Width(&m_led_matrix[matrix_num]);
	m_led_matrix[matrix_num].Width =  m_led_matrix[matrix_num].ImageSpace + m_led_matrix[matrix_num].FrontDelay + m_led_matrix[matrix_num].RearDelay;
	m_led_matrix[matrix_num].Height = LED_MATRIX_HEIGHT;

	memcpy(pTransData,&m_led_matrix[matrix_num].Width,sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);
	memcpy(pTransData,&m_led_matrix[matrix_num].Height,sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);


	// 이미지 FrontDelay
	memcpy(pTransData,&(m_led_matrix[matrix_num].FrontDelay),sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);

	// 이미지 RearDelay
	memcpy(pTransData,&(m_led_matrix[matrix_num].RearDelay),sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);

	// 실제 이미지 공간
	memcpy(pTransData,&(m_led_matrix[matrix_num].ImageSpace),sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);

	// 전송할 데이터를 만들자.  실제 이미지 공간 만큼만 전달한다.
	Make_Matrix_Data(pTransData,&m_led_matrix[matrix_num]);
	pTransData+=(LED_MATRIX_HEIGHT*120)/2;

	// CheckSum을 만들자
	for(int cnt = 0; cnt< DataLength; cnt++)
	{
		checkSum = checkSum + transData[cnt];
	}
	checkSum = checkSum^0xFFFF;
	TRACE(" checkSum = 0x%04x \n",checkSum);

	pTransData = transData+ DataLength;
	memcpy(pTransData,&checkSum,sizeof(unsigned short));
	pTransData+=sizeof(unsigned short);

	// 종료 코드 전달
	memcpy(pTransData,endCode,2);	
	pTransData+=2;					//2




	//-----------------data 전송을 시작한다.  -----------------

	
	if(DataLength+4 >= 2048)
	{
		AfxMessageBox(_T("Data Send Error  Data length Over !!!"));
		return;
	}

	TRACE("Trans Data \r\n");
	TRACE("{\r\n");

	for(int cnt = 0; cnt < DataLength+4;cnt++)
	{
		if(cnt%16 == 0)
			TRACE("\r\n");

		TRACE("0x%02x, ",transData[cnt]);
	
	}
	TRACE("\r\n}\r\n");



	// 데이터를 모두 모았으니 전송하자 
	WriteComm(transData, DataLength+4);							// Send Start code  //추가된 4는 checkSum과 EndCode이다.






		// CRC Check 하려면 아래 소스 참조 하자 

#if 0

#define Buff_SHARE			(8)
	int cnt = 0;
	int bufNum = 0;
	int bufEtc = 0;
	DWORD ret_value = 0;
	
	unsigned short crc_accum = 0x0000;

	for(cnt = 0; cnt < a_Matrix_num; cnt++)
	{
		BYTE* Send_buff;
		int matrix_size = sizeof(t_LED_Matrix);
		Send_buff = new BYTE[matrix_size];

		memcpy(Send_buff,&m_led_matrix[cnt],matrix_size);

		bufNum = matrix_size/Buff_SHARE;
		bufEtc = matrix_size%Buff_SHARE;

//		TRACE("size  (%d = %d * %d + %d)\n",matrix_size,bufNum, Buff_SHARE ,bufEtc);

		for(int i = 0; i < bufNum; i++)
		{
			ret_value += WriteComm(&Send_buff[i], Buff_SHARE);
		}

		if(bufEtc != 0)
		{
			ret_value += WriteComm(&Send_buff[bufNum*Buff_SHARE], bufEtc);
		}

		crc_accum = update_crc(crc_accum,(unsigned char *)&m_led_matrix[cnt],matrix_size);

		delete [] Send_buff;
	}
	
//	Sleep(500);

	// Send CRC16
	WriteComm((unsigned char*)&crc_accum,2);


	TRACE("Total Size = %d (%d)\n",ret_value,sizeof(m_led_matrix));

	TRACE("CRC16 = 0x%04x\n",crc_accum);

	// CRC Test
	unsigned char temp1 = (unsigned char)((crc_accum>>8)&0xff);
	unsigned char temp2 = (unsigned char)((crc_accum)&0xff);

	crc_accum = update_crc(crc_accum,&temp1,1);
	crc_accum = update_crc(crc_accum,&temp2,1);
	TRACE("CRC16 = 0x%04x\n",crc_accum);
	if(crc_accum == 0x00)
	{
		TRACE("CRC OK\n");
	}
	else
	{
		TRACE("CRC Error\n");
	}
#endif


	return;
}




void CELE_1492_LED_DisplayDlg::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default


	if(ComparePoint(m_matrix_start_pos,m_matrix_end_pos,point) == TRUE)					// Draw Color
	{
		m_mouse_down_up = MOUSE_RIGHT_DOWN;

		
		int selected_color_old = DEFAULT_COLOR;

		// 오른쪽 마우스가 눌렸으면 검은색으로 선택한다.
		selected_color_old = m_selected_color; 
		m_selected_color = CLEAR_COLOR;


		DrawLed(point);

		// Small Matrix 
		int seleced_matrix = m_combo_matrix_sel.GetCurSel();
		CPoint point;

		point.y = m_small_matrix_start_pos.y + (seleced_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
		point.x = m_small_matrix_start_pos.x + (seleced_matrix%4)*SMALL_MATRIX_X_SPACE -1;

		InvalidateSmallMatrix(point);

		// 마우스 오른쪽 키를 눌려서 지우고 난뒤에는 본래 색상으로 되돌려 놓는다.
		m_selected_color = selected_color_old; 

	}


	CDialog::OnRButtonDown(nFlags, point);
}

void CELE_1492_LED_DisplayDlg::OnRButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	m_mouse_down_up = MOUSE_LEFT_UP;

	CDialog::OnRButtonUp(nFlags, point);
}


void CELE_1492_LED_DisplayDlg::Apply_Gothic_12_15x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;

	for(int cnt = 0; cnt<GOTHIC_12_15x16_CHAR_NUM;cnt++)
	{
		if(gothic_12_15x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOTHIC_12_15x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = gothic_12_15x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = gothic_12_15x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =	(temp>>7)&0x01;
		text_Buff[cnt][9] =	(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 8;
	}
	else
	{
		font_width = 15;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

		pLedColumn->led00 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][13]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][14]==1)?m_selected_color : 0)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][15]==1)?m_selected_color : 0)&0xf ;

	}



}




void CELE_1492_LED_DisplayDlg::Apply_Goorim_13_15x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;



	for(int cnt = 0; cnt<GOOLRIM_13_15x16_CHAR_NUM;cnt++)
	{
		if(goolrim_13_15x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOOLRIM_13_15x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = goolrim_13_15x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = goolrim_13_15x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =	(temp>>7)&0x01;
		text_Buff[cnt][9] =	(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 8;
	}
	else
	{
		font_width = 15;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

		pLedColumn->led00 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led00)&0xf ;
		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : pLedColumn->led01)&0xf ;
		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : pLedColumn->led02)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : pLedColumn->led03)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : pLedColumn->led04)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : pLedColumn->led05)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : pLedColumn->led06)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : pLedColumn->led07)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : pLedColumn->led08)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : pLedColumn->led09)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : pLedColumn->led10)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : pLedColumn->led11)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : pLedColumn->led12)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][13]==1)?m_selected_color : pLedColumn->led13)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][14]==1)?m_selected_color : pLedColumn->led14)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][15]==1)?m_selected_color : pLedColumn->led15)&0xf ;

	}



}




void CELE_1492_LED_DisplayDlg::Apply_Goorim_12_16x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;

	for(int cnt = 0; cnt<GOOLRIM_12_16x16_CHAR_NUM;cnt++)
	{
		if(goolrim_12_16x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOOLRIM_12_16x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = goolrim_12_16x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = goolrim_12_16x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =		(temp>>7)&0x01;
		text_Buff[cnt][9] =		(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 8;
	}
	else
	{
		font_width = 14;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

//		pLedColumn->led00 = 0;
		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led01)&0xf ;
		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : pLedColumn->led02)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : pLedColumn->led03)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : pLedColumn->led04)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : pLedColumn->led05)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : pLedColumn->led06)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : pLedColumn->led07)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : pLedColumn->led08)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : pLedColumn->led09)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : pLedColumn->led10)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : pLedColumn->led11)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : pLedColumn->led12)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : pLedColumn->led13)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][13]==1)?m_selected_color : pLedColumn->led14)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][14]==1)?m_selected_color : pLedColumn->led15)&0xf ;

	}



}





void CELE_1492_LED_DisplayDlg::Apply_Goorim_11_16x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;

	for(int cnt = 0; cnt<GOOLRIM_11_16x16_CHAR_NUM;cnt++)
	{
		if(goolrim_11_16x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOOLRIM_11_16x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = goolrim_11_16x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = goolrim_11_16x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =		(temp>>7)&0x01;
		text_Buff[cnt][9] =		(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 7;
	}
	else
	{
		font_width = 13;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

//		pLedColumn->led00 = 0;
//		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led01)&0xf ;
		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led02)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : pLedColumn->led03)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : pLedColumn->led04)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : pLedColumn->led05)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : pLedColumn->led06)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : pLedColumn->led07)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : pLedColumn->led08)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : pLedColumn->led09)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : pLedColumn->led10)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : pLedColumn->led11)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : pLedColumn->led12)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : pLedColumn->led13)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : pLedColumn->led14)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][13]==1)?m_selected_color : pLedColumn->led15)&0xf ;

	}



}



void CELE_1492_LED_DisplayDlg::Apply_Goorim_10_16x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;

	for(int cnt = 0; cnt<GOOLRIM_10_16x16_CHAR_NUM;cnt++)
	{
		if(goolrim_10_16x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOOLRIM_10_16x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = goolrim_10_16x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = goolrim_10_16x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =		(temp>>7)&0x01;
		text_Buff[cnt][9] =		(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 7;
	}
	else
	{
		font_width = 12;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

//		pLedColumn->led00 = 0;
//		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led01)&0xf ;
		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led02)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : pLedColumn->led03)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : pLedColumn->led04)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : pLedColumn->led05)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : pLedColumn->led06)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : pLedColumn->led07)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : pLedColumn->led08)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : pLedColumn->led09)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : pLedColumn->led10)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : pLedColumn->led11)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : pLedColumn->led12)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : pLedColumn->led13)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : pLedColumn->led14)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][13]==1)?m_selected_color : pLedColumn->led15)&0xf ;

	}



}



void CELE_1492_LED_DisplayDlg::Apply_Goorim_9_16x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;

	for(int cnt = 0; cnt<GOOLRIM_9_16x16_CHAR_NUM;cnt++)
	{
		if(goolrim_9_16x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOOLRIM_9_16x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = goolrim_9_16x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = goolrim_9_16x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =		(temp>>7)&0x01;
		text_Buff[cnt][9] =		(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 7;
	}
	else
	{
		font_width = 12;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

//		pLedColumn->led00 = 0;
//		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led01)&0xf ;
//		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led02)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led03)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : pLedColumn->led04)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : pLedColumn->led05)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : pLedColumn->led06)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : pLedColumn->led07)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : pLedColumn->led08)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : pLedColumn->led09)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : pLedColumn->led10)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : pLedColumn->led11)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : pLedColumn->led12)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : pLedColumn->led13)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : pLedColumn->led14)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : pLedColumn->led15)&0xf ;

	}

}




void CELE_1492_LED_DisplayDlg::Apply_Goorim_8_16x16_font(unsigned short char_code, int horizontal_pos)
{
	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

	unsigned int font_pos= 0;

	unsigned char text_Buff[16][16] = {0,};
	unsigned char text_rotate_Buff[16][16] = {0,};

	int font_width = 0;

	for(int cnt = 0; cnt<GOOLRIM_8_16x16_CHAR_NUM;cnt++)
	{
		if(goolrim_8_16x16_fontdata_table[cnt].fontcode == char_code)
		{
			font_pos = cnt;
			break;
		}
	}

	if((font_pos >= GOOLRIM_8_16x16_CHAR_NUM)||(font_pos == 0))
	{
		AfxMessageBox(TEXT("It is not My font"));
		return;
	}

	// 문자 대각선 비틀기 
	memset(text_Buff,0x00,sizeof(unsigned char)*16*16);
	memset(text_rotate_Buff,0x00,sizeof(unsigned char)*16*16);
		
	for(int cnt = 0; cnt< 16 ; cnt++)
	{
		unsigned char temp;
		temp = goolrim_8_16x16_fontdata_table[font_pos].fontdata[cnt*2];
		text_Buff[cnt][0] =	(temp>>7)&0x01;
		text_Buff[cnt][1] =	(temp>>6)&0x01;
		text_Buff[cnt][2] =	(temp>>5)&0x01;
		text_Buff[cnt][3] =	(temp>>4)&0x01;
		text_Buff[cnt][4] =	(temp>>3)&0x01;
		text_Buff[cnt][5] =	(temp>>2)&0x01;
		text_Buff[cnt][6] =	(temp>>1)&0x01;
		text_Buff[cnt][7] =	temp&0x01;

		temp = goolrim_8_16x16_fontdata_table[font_pos].fontdata[cnt*2+1];
		text_Buff[cnt][8] =		(temp>>7)&0x01;
		text_Buff[cnt][9] =		(temp>>6)&0x01;
		text_Buff[cnt][10] =	(temp>>5)&0x01;
		text_Buff[cnt][11] =	(temp>>4)&0x01;
		text_Buff[cnt][12] =	(temp>>3)&0x01;
		text_Buff[cnt][13] =	(temp>>2)&0x01;
		text_Buff[cnt][14] =	(temp>>1)&0x01;
		text_Buff[cnt][15] =	temp&0x01;
		
	}

	// 여기서 이미지를 비튼다.
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			text_rotate_Buff[cnt_1][cnt] = text_Buff[cnt][cnt_1];
		}

	}

	// 이미지 확인
	for(int cnt = 0; cnt< 16; cnt++)
	{
		for(int cnt_1 = 0; cnt_1< 16; cnt_1++)
		{
			TRACE(" %d",text_rotate_Buff[cnt][cnt_1]);
		}

		TRACE("\r\n");
	}

	if(char_code <= 0x7f)
	{
		font_width = 6;
	}
	else
	{
		font_width = 11;
	}


	for(int cnt_x = 0; cnt_x<font_width   ; cnt_x++)
	{
		unsigned char temp = 0;
		t_LED_Column *pLedColumn;

		if(horizontal_pos+cnt_x >= LED_MATRIX_WIDTH)
		{
			break;
		}

		pLedColumn = &m_led_matrix[seleced_matrix].Led_Column[horizontal_pos+cnt_x];

//		pLedColumn->led00 = 0;
//		pLedColumn->led01 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led01)&0xf ;
//		pLedColumn->led02 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led02)&0xf ;
		pLedColumn->led03 = ((text_rotate_Buff[cnt_x][0]==1)?m_selected_color : pLedColumn->led03)&0xf ;
		pLedColumn->led04 = ((text_rotate_Buff[cnt_x][1]==1)?m_selected_color : pLedColumn->led04)&0xf ;
		pLedColumn->led05 = ((text_rotate_Buff[cnt_x][2]==1)?m_selected_color : pLedColumn->led05)&0xf ;
		pLedColumn->led06 = ((text_rotate_Buff[cnt_x][3]==1)?m_selected_color : pLedColumn->led06)&0xf ;
		pLedColumn->led07 = ((text_rotate_Buff[cnt_x][4]==1)?m_selected_color : pLedColumn->led07)&0xf ;
		pLedColumn->led08 = ((text_rotate_Buff[cnt_x][5]==1)?m_selected_color : pLedColumn->led08)&0xf ;
		pLedColumn->led09 = ((text_rotate_Buff[cnt_x][6]==1)?m_selected_color : pLedColumn->led09)&0xf ;
		pLedColumn->led10 = ((text_rotate_Buff[cnt_x][7]==1)?m_selected_color : pLedColumn->led10)&0xf ;
		pLedColumn->led11 = ((text_rotate_Buff[cnt_x][8]==1)?m_selected_color : pLedColumn->led11)&0xf ;
		pLedColumn->led12 = ((text_rotate_Buff[cnt_x][9]==1)?m_selected_color : pLedColumn->led12)&0xf ;
		pLedColumn->led13 = ((text_rotate_Buff[cnt_x][10]==1)?m_selected_color : pLedColumn->led13)&0xf ;
		pLedColumn->led14 = ((text_rotate_Buff[cnt_x][11]==1)?m_selected_color : pLedColumn->led14)&0xf ;
		pLedColumn->led15 = ((text_rotate_Buff[cnt_x][12]==1)?m_selected_color : pLedColumn->led15)&0xf ;

	}

}







void CELE_1492_LED_DisplayDlg::OnBnClickedButApply()
{
	// TODO: Add your control notification handler code here


	int seleced_matrix = m_combo_matrix_sel.GetCurSel();		// 현재 선택된 이미지

//	int font_size = m_combo_text_size.GetCurSel();				// 현재 선택된 폰트 크기

	CString str_font_size;
	m_combo_text_size.GetWindowTextW(str_font_size);

	//  문자를 한글코드로 변환하는 부분 
	wchar_t strWide[1024] = {0,};
	char strAnsi[1024] = {0,};
	CString editText;
	
	unsigned short text_temp;


	m_edit_string_box.GetWindowText(editText);		// editbox에서 문자를 가져온다.


	memset(strWide,0x00,sizeof(wchar_t)*1024);
	memset(strAnsi,0x00,sizeof(char)*1024);
	lstrcpy( strWide, editText );

	// WideCharToMultiByte 함수는 유니코드 문자열을 멀티 바이트로 바꿔줍니다.
//	WideCharToMultiByte( CP_ACP, 0, (wchar_t *) strWide, -1, strAnsi, 1024, NULL, NULL);
	WideCharToMultiByte( CP_ACP, WC_COMPOSITECHECK, (wchar_t *) strWide, -1, strAnsi, 1024, NULL, NULL);


	printf("%s\n\n", strAnsi);

	// 변환을 했으니 가져온 문자와 맵핑해서 화면에 뿌리거나 바로 적용을 하자.


//{
	// 문자 테이블에서 문자를 찾자
	int horizontal_pos =0;
	int str_len = 0;



	for(int cnt = 0; cnt<1024; cnt++)
	{
		if(strAnsi[cnt]== 0x00)
		{
			str_len = cnt;
			break;
		}
	
	}


	for(int cnt= 0; cnt< str_len ; cnt++)
	{
		if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
		{
			text_temp = strAnsi[cnt];
		}
		else
		{
			text_temp  = (unsigned short)((strAnsi[cnt]<<8)&0xff00)|(strAnsi[cnt+1]&0xff);
			cnt++;
		}

		if(str_font_size.Compare(TEXT("11")) == 0)	// font 11
		{
			Apply_Goorim_8_16x16_font(text_temp, horizontal_pos);		// 굴림체 사용
			
			if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
				horizontal_pos+=6;		// 문자 폭 만큼 증가 시킨다.
			else
				horizontal_pos+=11;		// 문자 폭 만큼 증가 시킨다.
		}
		else if(str_font_size.Compare(TEXT("12")) == 0)	// font 12
		{
			Apply_Goorim_9_16x16_font(text_temp, horizontal_pos);		// 굴림체 사용
			
			if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
				horizontal_pos+=7;		// 문자 폭 만큼 증가 시킨다.
			else
				horizontal_pos+=12;		// 문자 폭 만큼 증가 시킨다.
		}
		else if(str_font_size.Compare(TEXT("13")) == 0)	// font 13
		{
			Apply_Goorim_10_16x16_font(text_temp, horizontal_pos);		// 굴림체 사용
			
			if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
				horizontal_pos+=7;		// 문자 폭 만큼 증가 시킨다.
			else
				horizontal_pos+=12;		// 문자 폭 만큼 증가 시킨다.
		
		}
		else if(str_font_size.Compare(TEXT("14")) == 0)  // font 14
		{
			Apply_Goorim_11_16x16_font(text_temp, horizontal_pos);		// 굴림체 사용
			
			if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
				horizontal_pos+=7;		// 문자 폭 만큼 증가 시킨다.
			else
				horizontal_pos+=13;		// 문자 폭 만큼 증가 시킨다.

		}
		else if(str_font_size.Compare(TEXT("15")) == 0)  // font 15
		{
			Apply_Goorim_12_16x16_font(text_temp, horizontal_pos);		// 굴림체 사용
			
			if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
				horizontal_pos+=8;		// 문자 폭 만큼 증가 시킨다.
			else
				horizontal_pos+=14;		// 문자 폭 만큼 증가 시킨다.

		}
		else if(str_font_size.Compare(TEXT("16")) == 0)	// font 16 size 이다.
		{
//			Apply_Gothic_12_15x16_font(text_temp, horizontal_pos);		// 고딕체 사용
			Apply_Goorim_13_15x16_font(text_temp, horizontal_pos);		// 굴림체 사용
			
			if((strAnsi[cnt]<= 0x7f)&&(strAnsi[cnt]>=0))
				horizontal_pos+=8;		// 문자 폭 만큼 증가 시킨다.
			else
				horizontal_pos+=15;		// 문자 폭 만큼 증가 시킨다.
		}


		if(horizontal_pos > (LED_MATRIX_WIDTH-5))
		{
			// 문자 그리는 것을 중단한다.
			break;
		}		

	}

//}

	// 임시저장한다.
	SaveTemporary_LED_Matrix();


	// LED 화면을 다시 그린다. 

	CRect rect;

	rect.left = MATRIX_START_X;
	rect.top = MATRIX_START_Y;
	rect.right = rect.left + (LED_MATRIX_WIDTH*LED_WIDTH);
	rect.bottom = rect.top + (LED_MATRIX_HEIGHT*LED_HEIGHT);

	InvalidateRect(rect,FALSE);	


	// 작은 matrix를 다시 그린다.

	CPoint point;

	point.y = m_small_matrix_start_pos.y + (seleced_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
	point.x = m_small_matrix_start_pos.x + (seleced_matrix%4)*SMALL_MATRIX_X_SPACE -1;

	InvalidateSmallMatrix(point);


}





void CELE_1492_LED_DisplayDlg::OnBnClickedButFileSave2()		// 다른이름으로 저장하기
{
	// TODO: Add your control notification handler code here

    CString filter = TEXT("led 파일(*.led)|*.led ||");

	CFileDialog dlg(FALSE,TEXT(""),TEXT("*.led"),OFN_HIDEREADONLY,filter);
    dlg.m_ofn.lpstrInitialDir=_T(".\\");


	if(IDOK == dlg.DoModal())
	{
		CFile file;
		WCHAR file_path1[512];
		CString strFName = dlg.GetFileName();

		m_edit_filepath = dlg.GetPathName();


		// 새로 가져온 경로로 파일을 저장하자.
		wsprintf(file_path1,m_edit_filepath);

		if(!file.Open(file_path1,CFile::modeCreate | CFile::modeReadWrite))
		{
			AfxMessageBox(TEXT("Save file Error"));
			return;					
		}

		file.Write(m_led_matrix,sizeof(t_LED_Matrix)*MATRIX_MAX_NUM);

		file.Close();

		AfxMessageBox(IDS_SAVE_FILE);
	
	}



}

void CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboFrameNum()
{
	// TODO: Add your control notification handler code here
	int sel_matrix = m_combo_matrix_sel.GetCurSel();

	m_led_matrix[sel_matrix].ImageFrame = m_combo_Frame_num.GetCurSel();

	// 임시저장한다.
	SaveTemporary_LED_Matrix();
}

void CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboDelayTime()
{
	// TODO: Add your control notification handler code here

	int sel_matrix = m_combo_matrix_sel.GetCurSel();

	m_led_matrix[sel_matrix].FrontDelay = m_combo_delay_time.GetCurSel();


	// 임시저장한다.
	SaveTemporary_LED_Matrix();

}




void CELE_1492_LED_DisplayDlg::OnCbnSelchangeComboDelayTimeRear()
{
	// TODO: Add your control notification handler code here

	int sel_matrix = m_combo_matrix_sel.GetCurSel();

	m_led_matrix[sel_matrix].RearDelay = m_combo_delay_time_rear.GetCurSel();

	// 임시저장한다.
	SaveTemporary_LED_Matrix();

}


void CELE_1492_LED_DisplayDlg::OnBnClickedButPositionChange()
{
	// TODO: Add your control notification handler code here

//	// 이미지의 순서를 바꾸기 위한 버튼이다.
//
//	// m_combo_Image_change_front, m_combo_Image_change_rear 변수를 참조한다.

	int front_num = m_combo_Image_change_front.GetCurSel();
	int rear_num = m_combo_Image_change_rear.GetCurSel();

	int find = 0;

	t_LED_Matrix matrix_temp;
	
	if(front_num == rear_num)
	{
		AfxMessageBox(IDS_IMAGE_CHANGE_ERROR);
	}

	memset(&matrix_temp,0x00,sizeof(t_LED_Matrix));

	matrix_temp = m_led_matrix[front_num];
	m_led_matrix[front_num] = m_led_matrix[rear_num];
	m_led_matrix[rear_num] = matrix_temp;



	// 임시저장한다.
	SaveTemporary_LED_Matrix();


	
//	int seleced_matrix = m_combo_matrix_sel.GetCurSel();
	CPoint point;

	point.y = m_small_matrix_start_pos.y + (front_num/4)*SMALL_MATRIX_Y_SPACE -1;
	point.x = m_small_matrix_start_pos.x + (front_num%4)*SMALL_MATRIX_X_SPACE -1;

	InvalidateSmallMatrix(point);

	point.y = m_small_matrix_start_pos.y + (rear_num/4)*SMALL_MATRIX_Y_SPACE -1;
	point.x = m_small_matrix_start_pos.x + (rear_num%4)*SMALL_MATRIX_X_SPACE -1;

	InvalidateSmallMatrix(point);


}



//  이미지가 변경되면 임시로 저장된다. 
// 이미지가 변경되면 저장한다. 그리고 이미지를 파일에서 가져오면 저장한다.
void CELE_1492_LED_DisplayDlg::SaveTemporary_LED_Matrix()
{
	int cur_matrix = m_combo_matrix_sel.GetCurSel();
	int cur_saveCurNum = m_matrix_SaveTemp_curNum[cur_matrix];

	t_LED_Matrix *pMatrix = NULL;
	
	pMatrix = mp_led_matrix_temp[cur_matrix];


	if(pMatrix == NULL)		// 이미지 선택이 잘못되었다.
	{
		AfxMessageBox(IDS_SAVETEMP_LED_SELECT_ERROR);
		return;
	}


	// 두개의 매트릭스가 다른지 비교한다. 
	if((0== cur_saveCurNum) ||(0!= memcmp(&pMatrix[cur_saveCurNum-1],&m_led_matrix[cur_matrix],sizeof(t_LED_Matrix))))
	{		
		// 현재 이미지와 변경된 이미지가 다르므로 저장해둔다.

		if(m_matrix_SaveTemp_curNum[cur_matrix]< REDO_NUM_MAX)
		{
			memcpy(&pMatrix[cur_saveCurNum],&m_led_matrix[cur_matrix],sizeof(t_LED_Matrix));
			m_matrix_SaveTemp_curNum[cur_matrix]+=1;
			m_matrix_SaveTemp_num[cur_matrix]=m_matrix_SaveTemp_curNum[cur_matrix];
		}
		else if(m_matrix_SaveTemp_curNum[cur_matrix]== REDO_NUM_MAX)
		{
			for(int cnt = 0; cnt < REDO_NUM_MAX-1; cnt++)
			{
				memcpy(&pMatrix[cnt],&pMatrix[cnt+1],sizeof(t_LED_Matrix));
			
			}
			memcpy(&pMatrix[cur_saveCurNum-1],&m_led_matrix[cur_matrix],sizeof(t_LED_Matrix));
			m_matrix_SaveTemp_curNum[cur_matrix]=REDO_NUM_MAX;
			m_matrix_SaveTemp_num[cur_matrix]=m_matrix_SaveTemp_curNum[cur_matrix];
		}

//		AfxMessageBox(TEXT("두개가 다르므로 저장한다."));
	
	}
	else
	{
//		AfxMessageBox(TEXT("두개가 동일하다."));
	
	}

	// 임시저장한 데이터가 없거나 하나뿐이라면 버튼을 활성화 하지 않는다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] <= 1)
	{
		m_button_Undo.EnableWindow(FALSE);
	}
	else
	{
		m_button_Undo.EnableWindow(TRUE);
	}

	// 되돌리기를 한적이 있으면 활성화 된다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] < m_matrix_SaveTemp_num[cur_matrix])
	{
		m_button_Redo.EnableWindow(TRUE);
	}
	else
	{
		m_button_Redo.EnableWindow(FALSE);
	}


}




// 수정했던 이미지를 되돌리는 기능이다.
void CELE_1492_LED_DisplayDlg::OnBnClickedButUndo()
{
	// TODO: Add your control notification handler code here


	int cur_matrix = m_combo_matrix_sel.GetCurSel();
	int cur_saveCurNum = m_matrix_SaveTemp_curNum[cur_matrix];

	t_LED_Matrix *pMatrix = NULL;
	
	pMatrix = mp_led_matrix_temp[cur_matrix];


	if(pMatrix == NULL)		// 이미지 선택이 잘못되었다.
	{
		AfxMessageBox(IDS_SAVETEMP_LED_SELECT_ERROR);
		return;
	}


	// 되돌릴 이미지가 있는지 확인한다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] <= 1)
	{
		
		return;	
	}

	memcpy(&m_led_matrix[cur_matrix],&pMatrix[cur_saveCurNum-2],sizeof(t_LED_Matrix));
	m_matrix_SaveTemp_curNum[cur_matrix]-=1;



	// 임시저장한 데이터가 없거나 하나뿐이라면 버튼을 활성화 하지 않는다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] <= 1)
	{
		m_button_Undo.EnableWindow(FALSE);
	}
	else
	{
		m_button_Undo.EnableWindow(TRUE);
	}

	// 되돌리기를 한적이 있으면 활성화 된다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] < m_matrix_SaveTemp_num[cur_matrix])
	{
		m_button_Redo.EnableWindow(TRUE);
	}
	else
	{
		m_button_Redo.EnableWindow(FALSE);
	}



	// 상단의 큰 매트릭스를 다시 그린다.

	CRect rect;

	rect.left = MATRIX_START_X;
	rect.top = MATRIX_START_Y;
	rect.right = rect.left + (LED_MATRIX_WIDTH*LED_WIDTH);
	rect.bottom = rect.top + (LED_MATRIX_HEIGHT*LED_HEIGHT);

	InvalidateRect(rect,FALSE);	



	// 작은 매트릭스를 다시 그린다.
	CPoint point;

	point.y = m_small_matrix_start_pos.y + (cur_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
	point.x = m_small_matrix_start_pos.x + (cur_matrix%4)*SMALL_MATRIX_X_SPACE -1;

	InvalidateSmallMatrix(point);

}



// 이미지를 되돌렸다가 다시 실행하는 기능이다. 잘못 되돌렸을 경우 사용한다.
void CELE_1492_LED_DisplayDlg::OnBnClickedButRedo()
{
	// TODO: Add your control notification handler code here



	int cur_matrix = m_combo_matrix_sel.GetCurSel();
	int cur_saveCurNum = m_matrix_SaveTemp_curNum[cur_matrix];

	t_LED_Matrix *pMatrix = NULL;
	
	pMatrix = mp_led_matrix_temp[cur_matrix];


	if(pMatrix == NULL)		// 이미지 선택이 잘못되었다.
	{
		AfxMessageBox(IDS_SAVETEMP_LED_SELECT_ERROR);
		return;
	}


	// 되돌릴 이미지가 있는지 확인한다.
	if(m_matrix_SaveTemp_num[cur_matrix] <= 1)
	{
		return;	
	}

	if(m_matrix_SaveTemp_curNum[cur_matrix] >= m_matrix_SaveTemp_num[cur_matrix])
	{
		return;
	}


	memcpy(&m_led_matrix[cur_matrix],&pMatrix[cur_saveCurNum],sizeof(t_LED_Matrix));
	m_matrix_SaveTemp_curNum[cur_matrix]+=1;



	// 임시저장한 데이터가 없거나 하나뿐이라면 버튼을 활성화 하지 않는다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] <= 1)
	{
		m_button_Undo.EnableWindow(FALSE);
	}
	else
	{
		m_button_Undo.EnableWindow(TRUE);
	}

	// 되돌리기를 한적이 있으면 활성화 된다.
	if(m_matrix_SaveTemp_curNum[cur_matrix] < m_matrix_SaveTemp_num[cur_matrix])
	{
		m_button_Redo.EnableWindow(TRUE);
	}
	else
	{
		m_button_Redo.EnableWindow(FALSE);
	}



	// 상단의 큰 매트릭스를 다시 그린다.

	CRect rect;

	rect.left = MATRIX_START_X;
	rect.top = MATRIX_START_Y;
	rect.right = rect.left + (LED_MATRIX_WIDTH*LED_WIDTH);
	rect.bottom = rect.top + (LED_MATRIX_HEIGHT*LED_HEIGHT);

	InvalidateRect(rect,FALSE);	



	// 작은 매트릭스를 다시 그린다.
	CPoint point;

	point.y = m_small_matrix_start_pos.y + (cur_matrix/4)*SMALL_MATRIX_Y_SPACE -1;
	point.x = m_small_matrix_start_pos.x + (cur_matrix%4)*SMALL_MATRIX_X_SPACE -1;

	InvalidateSmallMatrix(point);

}



void CELE_1492_LED_DisplayDlg::OnDestroy()
{
	CDialog::OnDestroy();

	// TODO: Add your message handler code here

	for(int cnt = 0; cnt< MATRIX_MAX_NUM;cnt++)
	{
		free(mp_led_matrix_temp[cnt]);
	}
}

void CELE_1492_LED_DisplayDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	OnOK();
}


void CELE_1492_LED_DisplayDlg::OnBnClickedButInfo()
{
	// TODO: Add your control notification handler code here

	CAboutDlg about;

	about.DoModal();

}




void CELE_1492_LED_DisplayDlg::OnClose()
{
	// TODO: Add your message handler code here and/or call default


	int find = FALSE;
	int res = 0;


	for(int cnt = 0; cnt < MATRIX_MAX_NUM; cnt++)
	{
		if(m_matrix_SaveTemp_num[cnt]>1)
		{
			find = TRUE;
			break;
		}
	
	}

	if(find == TRUE)
	{
		res = AfxMessageBox(IDS_EXIT_SAVE_MESSAGE,MB_YESNOCANCEL | MB_ICONQUESTION | MB_DEFBUTTON1 | MB_SYSTEMMODAL);

		if(IDYES == res)
		{
			// 현재 내용을 저장한다.
			OnBnClickedButFileSave();		

			CDialog::OnClose();

		}
		else if(IDCANCEL == res)
		{
			// 취소가 눌려졌으니 아무것도 수행하지 않는다.
		}
		else
		{
			CDialog::OnClose();
		}

	}
	else
	{
		CDialog::OnClose();
	}



}


//  엔터키나 ESC 키가 눌렸을 때 종료 되지 않도록 재정의 한다.

BOOL CELE_1492_LED_DisplayDlg::PreTranslateMessage(MSG* pMsg)
{
	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_ESCAPE)
	{
		return TRUE;
	}

	if(pMsg->message == WM_KEYDOWN && pMsg->wParam == VK_RETURN)
	{
		OnBnClickedButApply();
		return TRUE;
	}


	return CDialog::PreTranslateMessage(pMsg);
}
