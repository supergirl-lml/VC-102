
// MFCTest4View.h : CMFCTest4View ��Ľӿ�
//

#pragma once


class CMFCTest4View : public CView
{
protected: // �������л�����
	CMFCTest4View();
	DECLARE_DYNCREATE(CMFCTest4View)

// ����
public:
	CMFCTest4Doc* GetDocument() const;

// ����
public:
	CRect cr;
	CRect rect;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest4View.cpp �еĵ��԰汾
inline CMFCTest4Doc* CMFCTest4View::GetDocument() const
   { return reinterpret_cast<CMFCTest4Doc*>(m_pDocument); }
#endif

