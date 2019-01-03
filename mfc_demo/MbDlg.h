
#pragma once

// CMbDlg 对话框
class CMbDlg : public CDialogEx {
    // 构造
public:
    CMbDlg(CWnd* pParent = NULL);	// 标准构造函数

                                    // 对话框数据
    enum { IDD = IDD_MB_MFC_DIALOG };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

                                                      // 实现
protected:
    HICON m_hIcon;
    CMbWnd m_mbWin;

    // 生成的消息映射函数
    virtual BOOL OnInitDialog();
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()
};
