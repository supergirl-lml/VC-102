
// MFCTest3View.h : CMFCTest3View ��Ľӿ�
//

#pragma once


class CMFCTest3View : public CView
{
protected: // �������л�����
	CMFCTest3View();
	DECLARE_DYNCREATE(CMFCTest3View)

// ����
public:
	CMFCTest3Doc* GetDocument() const;

// ����
public:
	int count ;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest3View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest3View.cpp �еĵ��԰汾
inline CMFCTest3Doc* CMFCTest3View::GetDocument() const
   { return reinterpret_cast<CMFCTest3Doc*>(m_pDocument); }
#endif

