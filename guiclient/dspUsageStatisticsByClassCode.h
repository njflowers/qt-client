/*
 * This file is part of the xTuple ERP: PostBooks Edition, a free and
 * open source Enterprise Resource Planning software suite,
 * Copyright (c) 1999-2010 by OpenMFG LLC, d/b/a xTuple.
 * It is licensed to you under the Common Public Attribution License
 * version 1.0, the full text of which (including xTuple-specific Exhibits)
 * is available at www.xtuple.com/CPAL.  By using this software, you agree
 * to be bound by its terms.
 */

#ifndef DSPUSAGESTATISTICSBYCLASSCODE_H
#define DSPUSAGESTATISTICSBYCLASSCODE_H

#include "guiclient.h"
#include "xwidget.h"

#include "ui_dspUsageStatisticsByClassCode.h"

class dspUsageStatisticsByClassCode : public XWidget, public Ui::dspUsageStatisticsByClassCode
{
    Q_OBJECT

public:
    dspUsageStatisticsByClassCode(QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = Qt::Window);
    ~dspUsageStatisticsByClassCode();

    virtual void setParams(ParameterList & params);
    virtual void viewTransactions(QString);

public slots:
    virtual void sPrint();
    virtual void sViewAll();
    virtual void sViewReceipt();
    virtual void sViewIssue();
    virtual void sViewSold();
    virtual void sViewScrap();
    virtual void sViewAdjustment();
    virtual void sViewTransfer();
    virtual void sPopulateMenu( QMenu * pMenu, QTreeWidgetItem *, int pColumn );
    virtual void sFillList();

protected slots:
    virtual void languageChange();

};

#endif // DSPUSAGESTATISTICSBYCLASSCODE_H