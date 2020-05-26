
// MFC-0420-4View.h : CMFC04204View 类的接口
//

#pragma once


class CMFC04204View : public CView
{
protected: // 仅从序列化创建
	CMFC04204View();
	DECLARE_DYNCREATE(CMFC04204View)

// 特性
public:
	CMFC04204Doc* GetDocument() const;

// 操作
public:
	int x ;
	int y ;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04204View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0420-4View.cpp 中的调试版本
inline CMFC04204Doc* CMFC04204View::GetDocument() const
   { return reinterpret_cast<CMFC04204Doc*>(m_pDocument); }
#endif

