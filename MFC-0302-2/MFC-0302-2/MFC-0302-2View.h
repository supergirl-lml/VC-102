
// MFC-0302-2View.h : CMFC03022View ��Ľӿ�
//

#pragma once


class CMFC03022View : public CView
{
protected: // �������л�����
	CMFC03022View();
	DECLARE_DYNCREATE(CMFC03022View)

// ����
public:
	CMFC03022Doc* GetDocument() const;

// ����
public:
	CRect cr;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC03022View();
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

#ifndef _DEBUG  // MFC-0302-2View.cpp �еĵ��԰汾
inline CMFC03022Doc* CMFC03022View::GetDocument() const
   { return reinterpret_cast<CMFC03022Doc*>(m_pDocument); }
#endif

