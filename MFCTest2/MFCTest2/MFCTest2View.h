
// MFCTest2View.h : CMFCTest2View ��Ľӿ�
//

#pragma once


class CMFCTest2View : public CView
{
protected: // �������л�����
	CMFCTest2View();
	DECLARE_DYNCREATE(CMFCTest2View)

// ����
public:
	CMFCTest2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCTest2View.cpp �еĵ��԰汾
inline CMFCTest2Doc* CMFCTest2View::GetDocument() const
   { return reinterpret_cast<CMFCTest2Doc*>(m_pDocument); }
#endif

