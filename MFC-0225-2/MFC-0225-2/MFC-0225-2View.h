
// MFC-0225-2View.h : CMFC02252View ��Ľӿ�
//

#pragma once


class CMFC02252View : public CView
{
protected: // �������л�����
	CMFC02252View();
	DECLARE_DYNCREATE(CMFC02252View)

// ����
public:
	CMFC02252Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC02252View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0225-2View.cpp �еĵ��԰汾
inline CMFC02252Doc* CMFC02252View::GetDocument() const
   { return reinterpret_cast<CMFC02252Doc*>(m_pDocument); }
#endif

