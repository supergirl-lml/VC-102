
// MFCTest10View.h : CMFCTest10View ��Ľӿ�
//

#pragma once


class CMFCTest10View : public CView
{
protected: // �������л�����
	CMFCTest10View();
	DECLARE_DYNCREATE(CMFCTest10View)

// ����
public:
	CMFCTest10Doc* GetDocument() const;

// ����
public:
	int count ,sign;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest10View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest10View.cpp �еĵ��԰汾
inline CMFCTest10Doc* CMFCTest10View::GetDocument() const
   { return reinterpret_cast<CMFCTest10Doc*>(m_pDocument); }
#endif

