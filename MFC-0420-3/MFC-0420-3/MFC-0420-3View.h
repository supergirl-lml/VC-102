
// MFC-0420-3View.h : CMFC04203View ��Ľӿ�
//

#pragma once


class CMFC04203View : public CView
{
protected: // �������л�����
	CMFC04203View();
	DECLARE_DYNCREATE(CMFC04203View)

// ����
public:
	CMFC04203Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04203View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFC-0420-3View.cpp �еĵ��԰汾
inline CMFC04203Doc* CMFC04203View::GetDocument() const
   { return reinterpret_cast<CMFC04203Doc*>(m_pDocument); }
#endif

