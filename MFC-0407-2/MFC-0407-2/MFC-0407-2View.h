
// MFC-0407-2View.h : CMFC04072View ��Ľӿ�
//

#pragma once


class CMFC04072View : public CView
{
protected: // �������л�����
	CMFC04072View();
	DECLARE_DYNCREATE(CMFC04072View)

// ����
public:
	CMFC04072Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04072View();
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

#ifndef _DEBUG  // MFC-0407-2View.cpp �еĵ��԰汾
inline CMFC04072Doc* CMFC04072View::GetDocument() const
   { return reinterpret_cast<CMFC04072Doc*>(m_pDocument); }
#endif

