
// MFCTest12Doc.h : CMFCTest12Doc ��Ľӿ�
//


#pragma once


class CMFCTest12Doc : public CDocument
{
protected: // �������л�����
	CMFCTest12Doc();
	DECLARE_DYNCREATE(CMFCTest12Doc)

// ����
public:

// ����
public:
	bool set;
	CRect cr;
	int flag;
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
	virtual ~CMFCTest12Doc();
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
