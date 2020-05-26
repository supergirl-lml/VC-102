
// MFC-0420-5View.h : CMFC04205View 类的接口
//

#pragma once


class CMFC04205View : public CView
{
protected: // 仅从序列化创建
	CMFC04205View();
	DECLARE_DYNCREATE(CMFC04205View)

// 特性
public:
	CMFC04205Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04205View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0420-5View.cpp 中的调试版本
inline CMFC04205Doc* CMFC04205View::GetDocument() const
   { return reinterpret_cast<CMFC04205Doc*>(m_pDocument); }
#endif

