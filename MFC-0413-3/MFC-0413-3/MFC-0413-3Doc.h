
// MFC-0413-3Doc.h : CMFC04133Doc ��Ľӿ�
//


#pragma once


class CMFC04133Doc : public CDocument
{
protected: // �������л�����
	CMFC04133Doc();
	DECLARE_DYNCREATE(CMFC04133Doc)

// ����
public:
	
// ����
public:
	bool set;
	CRect  cr;
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
	virtual ~CMFC04133Doc();
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
