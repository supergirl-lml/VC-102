
// MFCTest6View.h : CMFCTest6View ��Ľӿ�
//

#pragma once


class CMFCTest6View : public CView
{
protected: // �������л�����
	CMFCTest6View();
	DECLARE_DYNCREATE(CMFCTest6View)

// ����
public:
	CMFCTest6Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest6View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCTest6View.cpp �еĵ��԰汾
inline CMFCTest6Doc* CMFCTest6View::GetDocument() const
   { return reinterpret_cast<CMFCTest6Doc*>(m_pDocument); }
#endif

