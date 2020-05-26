
// MFC-0413-3Doc.h : CMFC04133Doc 类的接口
//


#pragma once


class CMFC04133Doc : public CDocument
{
protected: // 仅从序列化创建
	CMFC04133Doc();
	DECLARE_DYNCREATE(CMFC04133Doc)

// 特性
public:
	
// 操作
public:
	bool set;
	CRect  cr;
	int flag;
// 重写
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// 实现
public:
	virtual ~CMFC04133Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// 用于为搜索处理程序设置搜索内容的 Helper 函数
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
