
// MFCTest9View.h : CMFCTest9View ��Ľӿ�
//

#pragma once


class CMFCTest9View : public CView
{
protected: // �������л�����
	CMFCTest9View();
	DECLARE_DYNCREATE(CMFCTest9View)

// ����
public:
	CMFCTest9Doc* GetDocument() const;

// ����
public:
	int x1, y1;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest9View();
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
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest9View.cpp �еĵ��԰汾
inline CMFCTest9Doc* CMFCTest9View::GetDocument() const
   { return reinterpret_cast<CMFCTest9Doc*>(m_pDocument); }
#endif

