
// MFC-0225-1View.h : CMFC02251View ��Ľӿ�
//

#pragma once


class CMFC02251View : public CView
{
protected: // �������л�����
	CMFC02251View();
	DECLARE_DYNCREATE(CMFC02251View)

// ����
public:
	CMFC02251Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC02251View();
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

#ifndef _DEBUG  // MFC-0225-1View.cpp �еĵ��԰汾
inline CMFC02251Doc* CMFC02251View::GetDocument() const
   { return reinterpret_cast<CMFC02251Doc*>(m_pDocument); }
#endif

