
// MFC-0407-1View.h : CMFC04071View ��Ľӿ�
//

#pragma once


class CMFC04071View : public CView
{
protected: // �������л�����
	CMFC04071View();
	DECLARE_DYNCREATE(CMFC04071View)

// ����
public:
	CMFC04071Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04071View();
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

#ifndef _DEBUG  // MFC-0407-1View.cpp �еĵ��԰汾
inline CMFC04071Doc* CMFC04071View::GetDocument() const
   { return reinterpret_cast<CMFC04071Doc*>(m_pDocument); }
#endif

