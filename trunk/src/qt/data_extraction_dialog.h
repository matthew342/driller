/* Driller, a data extraction program
 * Copyright (C) 2005-2006 John Millikin
 *
 * data_extraction_dialog.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef DRILLER_QT_DATA_EXTRACTION_DIALOG_H
#define DRILLER_QT_DATA_EXTRACTION_DIALOG_H

#include "ui_DataExtractionDialog.h"
#include "../database.h"

namespace Driller {

class DataExtractionDialog : public QDialog {
  Q_OBJECT
public:
  DataExtractionDialog(QWidget* parent = NULL);
  ~DataExtractionDialog();

  void set_database(const Database& db);

public slots:
  void exec();

protected:
  const Database* db;
  Ui::DataExtractionDialog ui;

protected slots:
  void on_allRows_stateChanged(int state);
};

} // namespace

#endif // DRILLER_QT_DATA_EXTRACTION_DIALOG_H