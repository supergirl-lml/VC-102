
// MFCTest8View.h : CMFCTest8View ��Ľӿ�
//

#pragma once


class CMFCTest8View : public CView
{
protected: // �������л�����
	CMFCTest8View();
	DECLARE_DYNCREATE(CMFCTest8View)

// ����
public:
	CMFCTest8Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest8View();
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

#ifndef _DEBUG  // MFCTest8View.cpp �еĵ��԰汾
inline CMFCTest8Doc* CMFCTest8View::GetDocument() const
   { return reinterpret_cast<CMFCTest8Doc*>(m_pDocument); }
#endif

