
// MFC-0420-4View.h : CMFC04204View ��Ľӿ�
//

#pragma once


class CMFC04204View : public CView
{
protected: // �������л�����
	CMFC04204View();
	DECLARE_DYNCREATE(CMFC04204View)

// ����
public:
	CMFC04204Doc* GetDocument() const;

// ����
public:
	int x ;
	int y ;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04204View();
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

#ifndef _DEBUG  // MFC-0420-4View.cpp �еĵ��԰汾
inline CMFC04204Doc* CMFC04204View::GetDocument() const
   { return reinterpret_cast<CMFC04204Doc*>(m_pDocument); }
#endif

