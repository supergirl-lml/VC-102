
// MFC-0421-2Dlg.h : ͷ�ļ�
//

#pragma once


// CMFC04212Dlg �Ի���
class CMFC04212Dlg : public CDialogEx
{
// ����
public:
	CMFC04212Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC04212_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	void  CMFC04212Dlg::foo(CImage& img, int& sx, int& sy, int& w, int& h);
};
