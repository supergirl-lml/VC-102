
// MFC-0302-4View.h : CMFC03024View ��Ľӿ�
//

#pragma once


class CMFC03024View : public CView
{
protected: // �������л�����
	CMFC03024View();
	DECLARE_DYNCREATE(CMFC03024View)

// ����
public:
	CMFC03024Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC03024View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0302-4View.cpp �еĵ��԰汾
inline CMFC03024Doc* CMFC03024View::GetDocument() const
   { return reinterpret_cast<CMFC03024Doc*>(m_pDocument); }
#endif

