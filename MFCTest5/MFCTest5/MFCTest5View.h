
// MFCTest5View.h : CMFCTest5View ��Ľӿ�
//

#pragma once


class CMFCTest5View : public CView
{
protected: // �������л�����
	CMFCTest5View();
	DECLARE_DYNCREATE(CMFCTest5View)

// ����
public:
	CMFCTest5Doc* GetDocument() const;

// ����
public:
	CArray<CRect, CRect&>   ca;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest5View();
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

#ifndef _DEBUG  // MFCTest5View.cpp �еĵ��԰汾
inline CMFCTest5Doc* CMFCTest5View::GetDocument() const
   { return reinterpret_cast<CMFCTest5Doc*>(m_pDocument); }
#endif

