
// MFC-0414-3View.h : CMFC04143View ��Ľӿ�
//

#pragma once


class CMFC04143View : public CView
{
protected: // �������л�����
	CMFC04143View();
	DECLARE_DYNCREATE(CMFC04143View)

// ����
public:
	CMFC04143Doc* GetDocument() const;

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
	virtual ~CMFC04143View();
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
	afx_msg void On32771();
};

#ifndef _DEBUG  // MFC-0414-3View.cpp �еĵ��԰汾
inline CMFC04143Doc* CMFC04143View::GetDocument() const
   { return reinterpret_cast<CMFC04143Doc*>(m_pDocument); }
#endif

