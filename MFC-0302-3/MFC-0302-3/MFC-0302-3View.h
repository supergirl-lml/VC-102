
// MFC-0302-3View.h : CMFC03023View ��Ľӿ�
//

#pragma once


class CMFC03023View : public CView
{
protected: // �������л�����
	CMFC03023View();
	DECLARE_DYNCREATE(CMFC03023View)

// ����
public:
	CMFC03023Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC03023View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC-0302-3View.cpp �еĵ��԰汾
inline CMFC03023Doc* CMFC03023View::GetDocument() const
   { return reinterpret_cast<CMFC03023Doc*>(m_pDocument); }
#endif

