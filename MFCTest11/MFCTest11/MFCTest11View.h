
// MFCTest11View.h : CMFCTest11View ��Ľӿ�
//

#pragma once


class CMFCTest11View : public CView
{
protected: // �������л�����
	CMFCTest11View();
	DECLARE_DYNCREATE(CMFCTest11View)

// ����
public:
	CMFCTest11Doc* GetDocument() const;

// ����
public:
	CRect m_tagRec;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest11View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest11View.cpp �еĵ��԰汾
inline CMFCTest11Doc* CMFCTest11View::GetDocument() const
   { return reinterpret_cast<CMFCTest11Doc*>(m_pDocument); }
#endif

