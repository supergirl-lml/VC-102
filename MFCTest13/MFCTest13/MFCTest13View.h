
// MFCTest13View.h : CMFCTest13View ��Ľӿ�
//

#pragma once


class CMFCTest13View : public CView
{
protected: // �������л�����
	CMFCTest13View();
	DECLARE_DYNCREATE(CMFCTest13View)

// ����
public:
	CMFCTest13Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32772();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCTest13View.cpp �еĵ��԰汾
inline CMFCTest13Doc* CMFCTest13View::GetDocument() const
   { return reinterpret_cast<CMFCTest13Doc*>(m_pDocument); }
#endif

