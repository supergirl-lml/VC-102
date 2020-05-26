
// MFC-0421-1View.h : CMFC04211View 类的接口
//

#pragma once


class CMFC04211View : public CView
{
protected: // 仅从序列化创建
	CMFC04211View();
	DECLARE_DYNCREATE(CMFC04211View)

// 特性
public:
	CMFC04211Doc* GetDocument() const;

// 操作
public:
	CString filename;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04211View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnFileSaveAs();
};

#ifndef _DEBUG  // MFC-0421-1View.cpp 中的调试版本
inline CMFC04211Doc* CMFC04211View::GetDocument() const
   { return reinterpret_cast<CMFC04211Doc*>(m_pDocument); }
#endif

