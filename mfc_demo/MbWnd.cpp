// MbWnd.cpp : 实现文件
//

#include "stdafx.h"
#include "mb_mfc.h"
#include "MbWnd.h"

// CMbWnd

IMPLEMENT_DYNAMIC(CMbWnd, CWnd)

CMbWnd::CMbWnd()
{

}

CMbWnd::~CMbWnd()
{
}

BEGIN_MESSAGE_MAP(CMbWnd, CWnd)
END_MESSAGE_MAP()


BOOL CMbWnd::Create(CRect rcLayout, CWnd* pParenWnd, UINT nID, DWORD dwStyle)
{
    m_hView = wkeCreateWebWindow(WKE_WINDOW_TYPE_CONTROL, pParenWnd->m_hWnd, rcLayout.left, rcLayout.top, rcLayout.right - rcLayout.left, rcLayout.bottom - rcLayout.top);
    wkeShowWindow(m_hView, TRUE);

    return true;
}

// CMbWnd 消息处理程序