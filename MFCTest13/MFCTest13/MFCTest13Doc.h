
// MFCTest13Doc.h : CMFCTest13Doc ��Ľӿ�
//


#pragma once


class CMFCTest13Doc : public CDocument
{
protected: // �������л�����
	CMFCTest13Doc();
	DECLARE_DYNCREATE(CMFCTest13Doc)

// ����
public:
	int x, y, r;
	bool flag;
// ����
public:
	
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
	virtual ~CMFCTest13Doc();
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
