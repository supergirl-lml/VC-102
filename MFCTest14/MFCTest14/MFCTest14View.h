
// MFCTest14View.h : CMFCTest14View ��Ľӿ�
//

#pragma once


class CMFCTest14View : public CView
{
protected: // �������л�����
	CMFCTest14View();
	DECLARE_DYNCREATE(CMFCTest14View)

// ����
public:
	CMFCTest14Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest14View();
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
	afx_msg void On32772();
};

#ifndef _DEBUG  // MFCTest14View.cpp �еĵ��԰汾
inline CMFCTest14Doc* CMFCTest14View::GetDocument() const
   { return reinterpret_cast<CMFCTest14Doc*>(m_pDocument); }
#endif

