
// MFCTest8Doc.h : CMFCTest8Doc ��Ľӿ�
//


#pragma once


class CMFCTest8Doc : public CDocument
{
protected: // �������л�����
	CMFCTest8Doc();
	DECLARE_DYNCREATE(CMFCTest8Doc)

// ����
public:

// ����
public:
	CRect A,B,C;
	int a, b;
// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CMFCTest8Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ�����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};