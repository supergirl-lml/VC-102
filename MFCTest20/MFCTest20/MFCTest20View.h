
// MFCTest20View.h : CMFCTest20View ��Ľӿ�
//

#pragma once


class CMFCTest20View : public CView
{
protected: // �������л�����
	CMFCTest20View();
	DECLARE_DYNCREATE(CMFCTest20View)

// ����
public:
	CMFCTest20Doc* GetDocument() const;

// ����
public:
	CImage img;
	int rect_w, rect_h;//�ͻ������
	int img_w, img_h;
	int sx, sy;//ͼƬλ��
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCTest20View();
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
};

#ifndef _DEBUG  // MFCTest20View.cpp �еĵ��԰汾
inline CMFCTest20Doc* CMFCTest20View::GetDocument() const
   { return reinterpret_cast<CMFCTest20Doc*>(m_pDocument); }
#endif

