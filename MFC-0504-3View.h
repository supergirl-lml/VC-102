
// MFC-0504-3View.h : CMFC05043View ��Ľӿ�
//

#pragma once


class CMFC05043View : public CView
{
protected: // �������л�����
	CMFC05043View();
	DECLARE_DYNCREATE(CMFC05043View)

// ����
public:
	CMFC05043Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC05043View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0504-3View.cpp �еĵ��԰汾
inline CMFC05043Doc* CMFC05043View::GetDocument() const
   { return reinterpret_cast<CMFC05043Doc*>(m_pDocument); }
#endif

