
// MFCTest18View.h : CMFCTest18View ��Ľӿ�
//

#pragma once


class CMFCTest18View : public CView
{
protected: // �������л�����
	CMFCTest18View();
	DECLARE_DYNCREATE(CMFCTest18View)

// ����
public:
	CMFCTest18Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest18View();
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

#ifndef _DEBUG  // MFCTest18View.cpp �еĵ��԰汾
inline CMFCTest18Doc* CMFCTest18View::GetDocument() const
   { return reinterpret_cast<CMFCTest18Doc*>(m_pDocument); }
#endif

