
// MFCTest17View.h : CMFCTest17View ��Ľӿ�
//

#pragma once


class CMFCTest17View : public CView
{
protected: // �������л�����
	CMFCTest17View();
	DECLARE_DYNCREATE(CMFCTest17View)

// ����
public:
	CMFCTest17Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int a, b, c;
	POINT m_star, npoint;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest17View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
	afx_msg void On32772();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest17View.cpp �еĵ��԰汾
inline CMFCTest17Doc* CMFCTest17View::GetDocument() const
   { return reinterpret_cast<CMFCTest17Doc*>(m_pDocument); }
#endif

