
// MFC-0413-3View.h : CMFC04133View ��Ľӿ�
//

#pragma once


class CMFC04133View : public CView
{
protected: // �������л�����
	CMFC04133View();
	DECLARE_DYNCREATE(CMFC04133View)

// ����
public:
	CMFC04133Doc* GetDocument() const;

// ����
public:
	
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04133View();
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
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0413-3View.cpp �еĵ��԰汾
inline CMFC04133Doc* CMFC04133View::GetDocument() const
   { return reinterpret_cast<CMFC04133Doc*>(m_pDocument); }
#endif

