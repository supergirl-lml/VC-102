
// MFC-0421-1View.h : CMFC04211View ��Ľӿ�
//

#pragma once


class CMFC04211View : public CView
{
protected: // �������л�����
	CMFC04211View();
	DECLARE_DYNCREATE(CMFC04211View)

// ����
public:
	CMFC04211Doc* GetDocument() const;

// ����
public:
	CString filename;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC04211View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // MFC-0421-1View.cpp �еĵ��԰汾
inline CMFC04211Doc* CMFC04211View::GetDocument() const
   { return reinterpret_cast<CMFC04211Doc*>(m_pDocument); }
#endif

