
// MFCTest19View.h : CMFCTest19View ��Ľӿ�
//

#pragma once


class CMFCTest19View : public CView
{
protected: // �������л�����
	CMFCTest19View();
	DECLARE_DYNCREATE(CMFCTest19View)

// ����
public:
	CMFCTest19Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest19View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // MFCTest19View.cpp �еĵ��԰汾
inline CMFCTest19Doc* CMFCTest19View::GetDocument() const
   { return reinterpret_cast<CMFCTest19Doc*>(m_pDocument); }
#endif

