
// MFC-0413-3View.h : CMFC04133View 类的接口
//

#pragma once


class CMFC04133View : public CView
{
protected: // 仅从序列化创建
	CMFC04133View();
	DECLARE_DYNCREATE(CMFC04133View)

// 特性
public:
	CMFC04133Doc* GetDocument() const;

// 操作
public:
	
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04133View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC-0413-3View.cpp 中的调试版本
inline CMFC04133Doc* CMFC04133View::GetDocument() const
   { return reinterpret_cast<CMFC04133Doc*>(m_pDocument); }
#endif

