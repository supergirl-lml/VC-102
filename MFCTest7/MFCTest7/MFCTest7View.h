
// MFCTest7View.h : CMFCTest7View ��Ľӿ�
//

#pragma once


class CMFCTest7View : public CView
{
protected: // �������л�����
	CMFCTest7View();
	DECLARE_DYNCREATE(CMFCTest7View)

// ����
public:
	CMFCTest7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest7View();
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

#ifndef _DEBUG  // MFCTest7View.cpp �еĵ��԰汾
inline CMFCTest7Doc* CMFCTest7View::GetDocument() const
   { return reinterpret_cast<CMFCTest7Doc*>(m_pDocument); }
#endif

