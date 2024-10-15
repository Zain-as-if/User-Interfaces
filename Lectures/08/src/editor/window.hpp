#pragma once

#include <QMainWindow>

class QTextEdit;

class EditorWindow: public QMainWindow  // <1>
{
  public:
    EditorWindow(const QString&);  // <2>

  private:
    QString filename;
    QTextEdit* text;
    void createWindowContent();
    void createFileMenu();
    void createFormatMenu();
};
