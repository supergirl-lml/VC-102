
// MFC-0413-1View.h : CMFC04131View 类的接口
//

#pragma once


class CMFC04131View : public CView
{
protected: // 仅从序列化创建
	CMFC04131View();
	DECLARE_DYNCREATE(CMFC04131View)

// 特性
public:
	CMFC04131Doc* GetDocument() const;

// 操作
public:
	int x, y, x1, y1, flag;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04131View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0413-1View.cpp 中的调试版本
inline CMFC04131Doc* CMFC04131View::GetDocument() const
   { return reinterpret_cast<CMFC04131Doc*>(m_pDocument); }
#endif

