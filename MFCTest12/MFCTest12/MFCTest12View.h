
// MFCTest12View.h : CMFCTest12View ��Ľӿ�
//

#pragma once


class CMFCTest12View : public CView
{
protected: // �������л�����
	CMFCTest12View();
	DECLARE_DYNCREATE(CMFCTest12View)

// ����
public:
	CMFCTest12Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest12View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
//	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
//	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest12View.cpp �еĵ��԰汾
inline CMFCTest12Doc* CMFCTest12View::GetDocument() const
   { return reinterpret_cast<CMFCTest12Doc*>(m_pDocument); }
#endif

