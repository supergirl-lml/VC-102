
// MFCTest15View.h : CMFCTest15View ��Ľӿ�
//

#pragma once


class CMFCTest15View : public CView
{
protected: // �������л�����
	CMFCTest15View();
	DECLARE_DYNCREATE(CMFCTest15View)

// ����
public:
	CMFCTest15Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest15View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void On32771();
};

#ifndef _DEBUG  // MFCTest15View.cpp �еĵ��԰汾
inline CMFCTest15Doc* CMFCTest15View::GetDocument() const
   { return reinterpret_cast<CMFCTest15Doc*>(m_pDocument); }
#endif

