// ELE_1492_LED_DisplayDlg.h : ��� ����
//

/*
	�Ѱ��� LED�� 4 bit�� �ʿ�
	16���� LED�� ����Ѵ�.

	100*16


*/

// �۲�  Microsoft Sans Serif  9



#pragma once
#include "afxwin.h"

#include "Font_Clean_Gothic_12_15x16.h"		// Font 16


#include "Font_Goolrim_8_16x16_ALL.h"		// Font 11
#include "Font_Goolrim_9_16x16_ALL.h"		// Font 12
#include "Font_Goolrim_10_16x16_ALL.h"		// Font 13
#include "Font_Goolrim_11_16x16_ALL.h"		// Font 14
#include "Font_Goolrim_12_16x16_ALL.h"		// Font 15
#include "Font_Goolrim_13_15x16_ALL.h"		// Font 16




//------------------------------------------------------------------//

#define DEMO_VERSION				FALSE


#define MODEL_NUM					(0x01)			// ��������� �� �ѹ��� 0x01�̴�. 



#define MATRIX_START_X				(21)
#define MATRIX_START_Y				(65)


//#define LED_MATRIX_WIDTH			(75)
#define LED_MATRIX_WIDTH			(100)
#define LED_MATRIX_HEIGHT			(16)


#define LED_WIDTH					(11)			// LED �̹��� ũ���̴�. �̰ͺ��� �۾����� �׸��� ���������.
#define LED_HEIGHT					(11)


#define SMALL_MATRIX_START_X		(95)
#define SMALL_MATRIX_START_Y		(410)

#define LED_SMALL_WIDTH				(2)
#define LED_SMALL_HEIGHT			(2)

//#define SMALL_MATRIX_X_SPACE		(LED_SMALL_WIDTH*LED_MATRIX_WIDTH + 80)
//#define SMALL_MATRIX_Y_SPACE		(LED_SMALL_HEIGHT*LED_MATRIX_HEIGHT + 5)

#define SMALL_MATRIX_X_SPACE		(255)
#define SMALL_MATRIX_Y_SPACE		(40)

#define TEXT_POS_X					(640)
#define TEXT_POS_Y					(280)
#define TEXT_WIDTH					(LED_MATRIX_WIDTH+2)
#define TEXT_HEIGHT					(LED_MATRIX_HEIGHT+2)



#define MATRIX_MAX_NUM				(16)


#define LED_COLOR00					RGB(0,0,0)					// Black
#define LED_COLOR01					RGB(255,255,255)			// white
#define LED_COLOR02					RGB(0,0,255)				// blue
#define LED_COLOR03					RGB(0,255,0)				// green
#define LED_COLOR04					RGB(0,255,255)				// cyan
#define LED_COLOR05					RGB(255,0,0)				// red
#define LED_COLOR06					RGB(255,0,255)				// ����� purple
#define LED_COLOR07					RGB(255,255,0)				// ����� yellow

#define LED_BACK_COLOR				RGB(200,200,200)

#define LED_ROUND					RGB(0,0,0)

#define LED_RED						RGB(255,0,0)
#define LED_GREEN					RGB(0,255,0)
#define LED_BLUE					RGB(0,0,255)



#define SELECED_COLOR_BOX_WIDTH			(LED_WIDTH*3)
#define SELECED_COLOR_BOX_HEIGHT		(LED_HEIGHT*3)


#define PALETTE_BOX_WIDTH				(LED_WIDTH*2)
#define PALETTE_BOX_HEIGHT				(LED_HEIGHT*2)


#define DEFAULT_FILENAME				".\\default.led"
#define INI_FILENAME					".\\led_display.ini"


#define MAX_EDIT_CHAR_NUM				(20)		// ���ڸ� �Է��ϴ� �ִ��� �����̴�.


#define	DEF_BAUD					7	//115200 bps
#define	BUFF_SIZE					4096


#define REDO_NUM_MAX					100			// �ǵ����� ����� �ִ밪�̴�. 
													// �̹����� �׸��ٰ� �Ǽ� �Ͽ��� ��� �ǵ����� ����� �����ϱ� ���ؼ� �߰�


enum{
	MOUSE_LEFT_UP = 0,
	MOUSE_LEFT_DOWN = 1,
	MOUSE_RIGHT_UP = 2,
	MOUSE_RIGHT_DOWN = 3,

};

enum{
	COLOR_BLACK =	0,
	COLOR_WHITE =	1,
	COLOR_BLUE =	2,
	COLOR_GREEN =	3,
	COLOR_CYAN =	4,
	COLOR_RED =		5,
	COLOR_PURPLE =	6,
	COLOR_YELLOW =	7,

};


#define DEFAULT_COLOR			(COLOR_YELLOW)
#define CLEAR_COLOR				(COLOR_BLACK)



typedef struct
{
	unsigned char led00 :4;			// 0~7 ������ ���� ������. 
	unsigned char led01 :4;
	unsigned char led02 :4;
	unsigned char led03 :4;
	unsigned char led04 :4;
	unsigned char led05 :4;
	unsigned char led06 :4;
	unsigned char led07 :4;
	unsigned char led08 :4;
	unsigned char led09 :4;
	unsigned char led10 :4;
	unsigned char led11 :4;
	unsigned char led12 :4;
	unsigned char led13 :4;
	unsigned char led14 :4;
	unsigned char led15 :4;
	unsigned char led16 :4;
	unsigned char led17 :4;
	unsigned char led18 :4;
	unsigned char led19 :4;
	unsigned char led20 :4;
	unsigned char led21 :4;
	unsigned char led22 :4;
	unsigned char led23 :4;
	unsigned char led24 :4;
	unsigned char led25 :4;
	unsigned char led26 :4;
	unsigned char led27 :4;
	unsigned char led28 :4;
	unsigned char led29 :4;
	unsigned char led30 :4;
	unsigned char led31 :4;
}t_LED_Column;


typedef struct
{
	unsigned char ImageFrame;	// �̹����� �ʰ� ��Ÿ���� �̹��� �����Ӽ��� ��Ÿ����.
	unsigned short Width;		// ImageSpace + FrontDelay + RearDelay;
	unsigned short Height;

	unsigned short FrontDelay;	// �̹������� �ð����̸� ��Ÿ����.
	unsigned short RearDelay;	// �̹������� �ð����̸� ��Ÿ����.
	unsigned short ImageSpace;

	t_LED_Column Led_Column[LED_MATRIX_WIDTH];

}t_LED_Matrix;


//----------------------------------------------------------------------//


// CELE_1492_LED_DisplayDlg ��ȭ ����
class CELE_1492_LED_DisplayDlg : public CDialog
{
// �����Դϴ�.
public:
	CELE_1492_LED_DisplayDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_ELE_1492_LED_DISPLAY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;


public:

	// by jjinuri   value
	t_LED_Matrix m_led_matrix[MATRIX_MAX_NUM];	//  Led Matrix�� ���� �����ϰ� �ִ�. 



	CPoint m_mouse_sel_pos;				// Matrix �������� �� ���� �����ϰ� �ִ�. (X: 0~59  Y:0~17)
	int m_selected_color;				// ���õǾ��� Color�� �����ϰ� �ִ�. (0~7)

	BOOL m_mouse_down_up;				// ���콺�� �������ִ��� üũ�Ѵ�. 

	CPoint m_matrix_start_pos;			// ��� ��Ʈ���� ��ġ ����
	CPoint m_matrix_end_pos;

	CPoint m_small_matrix_start_pos;	// �ϴ� ���� ��Ʈ���� ��ġ ����
	CPoint m_small_matrix_end_pos;

	CPoint m_palette_start_pos;			// �ȷ�Ʈ ��ġ ����
	CPoint m_palette_end_pos;

	CPoint m_selected_color_box_pos;	// ���õ� �÷� ��ġ ����

	CPoint m_text_start_pos;			// ���� ��ġ����
	CPoint m_text_end_pos;


	CString m_ini_file_path;			// ini file ��ġ�� ��Ÿ����.


public:
	// by jjinuri   function
	int DrawMatrix(CPaintDC *dc,CPoint a_pos);
	void DrawSmallMatrix(CPaintDC *dc,CPoint a_start_pos, t_LED_Matrix *a_matrix);
	int DrawPalette(CPaintDC *dc,CPoint a_pos);
	int DrawSelectedColorBox(CPaintDC *dc,CPoint a_pos,int a_selected_color);
	int DrawMatrixLed(CPaintDC *dc,CPoint a_pos,t_LED_Matrix *a_matrix);
	int ComparePoint(CPoint start_pos, CPoint end_pos, CPoint input_pos);

	int Get_Matrix_Width(t_LED_Matrix *a_Matrix);	// ��Ʈ������ ���� ����Ѵ�.
	void Make_Matrix_Data(unsigned char *pBuff,t_LED_Matrix *a_Matrix);  // ������ �����͸� �����.


	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()


public:
	CComboBox m_combo_matrix_sel;			// ���õ� LED Image
	CComboBox m_combo_port_num;
	CString m_edit_filepath;
	CEdit m_edit_string_box;
	CString m_comport_state;


public:
	afx_msg void OnBnClickedButFileOpen();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButClear();
	afx_msg void OnBnClickedButFileSave();
	afx_msg void OnCbnSelchangeComboMatrixSel();
	afx_msg void OnEnChangeEditText();
	afx_msg void OnBnClickedButHelp();
	afx_msg void OnBnClickedButSend();
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedButApply();




	void SaveFile_LedData(t_LED_Matrix *a_matrix,int a_ledNum,CString a_filePath);
	void DrawLed(CPoint point);
	int LoadFile_ini();
	void SaveFile_ini();
	void Load_LedSaveFile(CString a_savefile_path);
	void InvalidateSmallMatrix(CPoint point);




	//Serial	UART ����� ���� ����

	OVERLAPPED		m_osRead, m_osWrite;	// Com port Overlapped structure
	CString			m_sPortName;			// Port Name (COM1 ..)
	HANDLE			m_hComm;				// Com Port File Handle
	BOOL			m_bConnected;			// Com Port Open/Close Flag
	BOOL			serial_communication_init; // Initt

	CString			byIndexComPort(int xPort);	// ��Ʈ�̸� �ޱ� 
	DWORD			byIndexBaud(int xBaud);		// ���۷� �ޱ�
	BYTE			byIndexData(int xData);		//������ ��Ʈ �ޱ�
	BYTE			byIndexStop(int xStop);		// �����Ʈ �ޱ� 
	BYTE			byIndexParity(int xParity);	// �縮Ƽ �ޱ�


	BOOL			CheckSerialOpen(); // Check Serial Port Open
	BOOL			OpenPort(CString strPortName, DWORD dwBaud, BYTE byData, BYTE byStop, BYTE byParity ); //Open Port
	void			ClosePort(); //Close Port 
	DWORD			WriteComm(BYTE *pBuff, DWORD nToWrite);//Booting - Write Data
	DWORD			WriteS(CString pBuff, DWORD nToWrite); //Write Data (write operation in Unix/Linux)
	DWORD			ReadComm(BYTE *pBuff, DWORD nToRead);//Booting - Read Data
	CString			ReadS(DWORD nToRead); //Read Data (read operation in Unix/Linux)


//	CString m_status_serial;


public:
	void Send_Matrix_Data(t_LED_Matrix *a_Matrix, int a_Matrix_num);
	int SelectedSmallMatrix(CPoint point);
	int DrawText(CPaintDC *dc,CPoint a_start_pos,CPoint a_end_pos);



public:
	CComboBox m_combo_Frame_num;		// �̹����� Frame Mode�� ��Ÿ����.
	
	CComboBox m_combo_delay_time;		// �̹��� �պκ��� �̹��� ������ ��Ÿ����.
		// �̹����� ���� �����̹��� ���� ������ ��Ÿ����.
	CComboBox m_combo_delay_time_rear;
		// ����� ������ ũ�⸦ �����Ѵ�.
	CComboBox m_combo_text_size;

	// üũ��ư ����// ������ �̹����� üũ�ϴ� üũ�ڽ� ����
	CButton m_check_image_01;
	CButton m_check_image_02;
	CButton m_check_image_03;
	CButton m_check_image_04;
	CButton m_check_image_05;
	CButton m_check_image_06;
	CButton m_check_image_07;
	CButton m_check_image_08;
	CButton m_check_image_09;
	CButton m_check_image_10;
	CButton m_check_image_11;
	CButton m_check_image_12;
	CButton m_check_image_13;
	CButton m_check_image_14;
	CButton m_check_image_15;
	CButton m_check_image_16;

	// �ǵ����� ��� ��ư
	CButton m_button_Undo;
	CButton m_button_Redo;

	afx_msg void OnBnClickedButUndo();
	afx_msg void OnBnClickedButRedo();




	// ��Ʈ ��ȯ�� ���� �Լ����̴�.  ��Ʈ ������ ���� ���� �����ͼ� ȭ�鿡 �����Ѵ�.
	void Apply_Gothic_12_15x16_font(unsigned short char_code, int horizontal_pos);
	void Apply_Goorim_13_15x16_font(unsigned short char_code, int horizontal_pos);
	void Apply_Goorim_12_16x16_font(unsigned short char_code, int horizontal_pos);
	void Apply_Goorim_11_16x16_font(unsigned short char_code, int horizontal_pos);
	void Apply_Goorim_10_16x16_font(unsigned short char_code, int horizontal_pos);
	void Apply_Goorim_9_16x16_font(unsigned short char_code, int horizontal_pos);
	void Apply_Goorim_8_16x16_font(unsigned short char_code, int horizontal_pos);


public:
	// �̹����� ��ġ�� �����ϱ� ���� ����� �����̴�.
	CComboBox m_combo_Image_change_front;
	// �̹��� ��ġ�� �����ϱ� ���ؼ� �����ϴ� ��ȣ ���� ��ȣ�̴�.
	CComboBox m_combo_Image_change_rear;

	afx_msg void OnBnClickedButFileSave2();
	afx_msg void OnCbnSelchangeComboFrameNum();
	afx_msg void OnCbnSelchangeComboDelayTime();
	afx_msg void OnCbnSelchangeComboDelayTimeRear();
	afx_msg void OnBnClickedButPositionChange();
	afx_msg void OnBnClickedButInfo();
	afx_msg void OnClose();
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedOk();


	// ����� �̹����� �ӽ÷� �����صδ� �����̴�. 
	t_LED_Matrix *mp_led_matrix_temp[MATRIX_MAX_NUM];
	int m_matrix_SaveTemp_num[MATRIX_MAX_NUM];
	int m_matrix_SaveTemp_curNum[MATRIX_MAX_NUM];

	void SaveTemporary_LED_Matrix();	// ����� �̹����� �ӽ÷� �����صд�.

	// ����������� ��Ÿ���� �����̴�.
	CStatic m_static_demo_version_text;



	BOOL PreTranslateMessage(MSG* pMsg);// ����Ű�� �������� �ڵ����� ����Ǵ� ���� ���� ���ؼ� �߰��Ͽ���

};
