
// MFC-0413-1View.h : CMFC04131View ��Ľӿ�
//

#pragma once


class CMFC04131View : public CView
{
protected: // �������л�����
	CMFC04131View();
	DECLARE_DYNCREATE(CMFC04131View)

// ����
public:
	CMFC04131Doc* GetDocument() const;

// ����
public:
	int x, y, x1, y1, flag;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04131View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0413-1View.cpp �еĵ��԰汾
inline CMFC04131Doc* CMFC04131View::GetDocument() const
   { return reinterpret_cast<CMFC04131Doc*>(m_pDocument); }
#endif

