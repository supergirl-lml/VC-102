
// MFCTest24View.h : CMFCTest24View ��Ľӿ�
//

#pragma once


class CMFCTest24View : public CView
{
protected: // �������л�����
	CMFCTest24View();
	DECLARE_DYNCREATE(CMFCTest24View)

// ����
public:
	CMFCTest24Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMultiple();
};

#ifndef _DEBUG  // MFCTest24View.cpp �еĵ��԰汾
inline CMFCTest24Doc* CMFCTest24View::GetDocument() const
   { return reinterpret_cast<CMFCTest24Doc*>(m_pDocument); }
#endif

