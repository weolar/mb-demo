#pragma once

// CMbWnd

class CMbWnd : public CWnd {
    DECLARE_DYNAMIC(CMbWnd)

public:
    CMbWnd();
    virtual ~CMbWnd();

    BOOL Create(CRect rcLayout, CWnd *pParenWnd, UINT nID, DWORD dwStyle);

    //__inline operator MbWindow*() { return m_hMb; }
    __inline operator wkeWebView() { return m_hView; }

protected:
    //MbWindow* m_hMb;
    wkeWebView m_hView;

protected:
    DECLARE_MESSAGE_MAP()
};


