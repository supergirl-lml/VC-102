
// MFC-0414-2View.h : CMFC04142View ��Ľӿ�
//

#pragma once


class CMFC04142View : public CView
{
protected: // �������л�����
	CMFC04142View();
	DECLARE_DYNCREATE(CMFC04142View)

// ����
public:
	CMFC04142Doc* GetDocument() const;

// ����
public:
	CString file;
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04142View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFC-0414-2View.cpp �еĵ��԰汾
inline CMFC04142Doc* CMFC04142View::GetDocument() const
   { return reinterpret_cast<CMFC04142Doc*>(m_pDocument); }
#endif

