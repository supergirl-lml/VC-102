
// MFCTest11Doc.h : CMFCTest11Doc ��Ľӿ�
//


#pragma once


class CMFCTest11Doc : public CDocument
{
protected: // �������л�����
	CMFCTest11Doc();
	DECLARE_DYNCREATE(CMFCTest11Doc)

// ����
public:

// ����
public:
	CRect  m_crlRect;
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
	virtual ~CMFCTest11Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
