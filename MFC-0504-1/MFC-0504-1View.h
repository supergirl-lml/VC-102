
// MFC-0504-1View.h : CMFC05041View ��Ľӿ�
//

#pragma once


class CMFC05041View : public CView
{
protected: // �������л�����
	CMFC05041View();
	DECLARE_DYNCREATE(CMFC05041View)

// ����
public:
	CMFC05041Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC05041View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0504-1View.cpp �еĵ��԰汾
inline CMFC05041Doc* CMFC05041View::GetDocument() const
   { return reinterpret_cast<CMFC05041Doc*>(m_pDocument); }
#endif

