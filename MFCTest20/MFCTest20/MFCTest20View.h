
// MFCTest20View.h : CMFCTest20View 类的接口
//

#pragma once


class CMFCTest20View : public CView
{
protected: // 仅从序列化创建
	CMFCTest20View();
	DECLARE_DYNCREATE(CMFCTest20View)

// 特性
public:
	CMFCTest20Doc* GetDocument() const;

// 操作
public:
	bool flag;
	int h, w;
	int sx, sy;//图片位置
	CString filename;
	CImage img;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCTest20View();
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
};

#ifndef _DEBUG  // MFCTest20View.cpp 中的调试版本
inline CMFCTest20Doc* CMFCTest20View::GetDocument() const
   { return reinterpret_cast<CMFCTest20Doc*>(m_pDocument); }
#endif

