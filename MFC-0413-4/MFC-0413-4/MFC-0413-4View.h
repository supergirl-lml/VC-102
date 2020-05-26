
// MFC-0413-4View.h : CMFC04134View 类的接口
//

#pragma once


class CMFC04134View : public CView
{
protected: // 仅从序列化创建
	CMFC04134View();
	DECLARE_DYNCREATE(CMFC04134View)

// 特性
public:
	CMFC04134Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC04134View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // MFC-0413-4View.cpp 中的调试版本
inline CMFC04134Doc* CMFC04134View::GetDocument() const
   { return reinterpret_cast<CMFC04134Doc*>(m_pDocument); }
#endif

