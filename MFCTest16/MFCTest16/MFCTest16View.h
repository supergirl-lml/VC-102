
// MFCTest16View.h : CMFCTest16View ��Ľӿ�
//

#pragma once


class CMFCTest16View : public CView
{
protected: // �������л�����
	CMFCTest16View();
	DECLARE_DYNCREATE(CMFCTest16View)

// ����
public:
	CMFCTest16Doc* GetDocument() const;

// ����
public:
	CBitmap  m_Bitmap;
	int m_nWidth;
	int m_nHeight;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest16View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCTest16View.cpp �еĵ��԰汾
inline CMFCTest16Doc* CMFCTest16View::GetDocument() const
   { return reinterpret_cast<CMFCTest16Doc*>(m_pDocument); }
#endif

