
// MFC-0421-2Dlg.h : 头文件
//

#pragma once


// CMFC04212Dlg 对话框
class CMFC04212Dlg : public CDialogEx
{
// 构造
public:
	CMFC04212Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC04212_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	void  CMFC04212Dlg::foo(CImage& img, int& sx, int& sy, int& w, int& h);
};
