
// MFC-0413-4View.h : CMFC04134View ��Ľӿ�
//

#pragma once


class CMFC04134View : public CView
{
protected: // �������л�����
	CMFC04134View();
	DECLARE_DYNCREATE(CMFC04134View)

// ����
public:
	CMFC04134Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04134View();
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

#ifndef _DEBUG  // MFC-0413-4View.cpp �еĵ��԰汾
inline CMFC04134Doc* CMFC04134View::GetDocument() const
   { return reinterpret_cast<CMFC04134Doc*>(m_pDocument); }
#endif

