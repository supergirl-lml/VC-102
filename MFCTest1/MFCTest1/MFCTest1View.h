
// MFCTest1View.h : CMFCTest1View ��Ľӿ�
//

#pragma once


class CMFCTest1View : public CView
{
protected: // �������л�����
	CMFCTest1View();
	DECLARE_DYNCREATE(CMFCTest1View)

// ����
public:
	CMFCTest1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCTest1View.cpp �еĵ��԰汾
inline CMFCTest1Doc* CMFCTest1View::GetDocument() const
   { return reinterpret_cast<CMFCTest1Doc*>(m_pDocument); }
#endif

