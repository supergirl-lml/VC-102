
// MFC-0420-5View.h : CMFC04205View ��Ľӿ�
//

#pragma once


class CMFC04205View : public CView
{
protected: // �������л�����
	CMFC04205View();
	DECLARE_DYNCREATE(CMFC04205View)

// ����
public:
	CMFC04205Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04205View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0420-5View.cpp �еĵ��԰汾
inline CMFC04205Doc* CMFC04205View::GetDocument() const
   { return reinterpret_cast<CMFC04205Doc*>(m_pDocument); }
#endif

