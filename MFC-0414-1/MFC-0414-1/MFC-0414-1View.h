
// MFC-0414-1View.h : CMFC04141View ��Ľӿ�
//

#pragma once


class CMFC04141View : public CView
{
protected: // �������л�����
	CMFC04141View();
	DECLARE_DYNCREATE(CMFC04141View)

// ����
public:
	CMFC04141Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04141View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0414-1View.cpp �еĵ��԰汾
inline CMFC04141Doc* CMFC04141View::GetDocument() const
   { return reinterpret_cast<CMFC04141Doc*>(m_pDocument); }
#endif

