
// MFC-0302-1View.h : CMFC03021View ��Ľӿ�
//

#pragma once


class CMFC03021View : public CView
{
protected: // �������л�����
	CMFC03021View();
	DECLARE_DYNCREATE(CMFC03021View)

// ����
public:
	CMFC03021Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC03021View();
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

#ifndef _DEBUG  // MFC-0302-1View.cpp �еĵ��԰汾
inline CMFC03021Doc* CMFC03021View::GetDocument() const
   { return reinterpret_cast<CMFC03021Doc*>(m_pDocument); }
#endif

