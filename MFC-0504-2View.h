
// MFC-0504-2View.h : CMFC05042View ��Ľӿ�
//

#pragma once


class CMFC05042View : public CView
{
protected: // �������л�����
	CMFC05042View();
	DECLARE_DYNCREATE(CMFC05042View)

// ����
public:
	CMFC05042Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC05042View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0504-2View.cpp �еĵ��԰汾
inline CMFC05042Doc* CMFC05042View::GetDocument() const
   { return reinterpret_cast<CMFC05042Doc*>(m_pDocument); }
#endif

