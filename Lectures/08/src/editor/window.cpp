#include "window.hpp"
#include <QtWidgets>

EditorWindow::EditorWindow(const QString& fname): filename(fname)
{
  setWindowTitle("Text Editor");
  createWindowContent();
  createFileMenu();
  createFormatMenu();
}

void EditorWindow::createWindowContent()
{
  text = new QTextEdit();
  text->setFont(QFont("Courier", 12));
  setCentralWidget(text);

  QFile file(filename);
  if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    QTextStream in(&file);
    QString content = in.readAll();
    text->setPlainText(content);
    QString message = "Loaded " + filename;
    statusBar()->showMessage(message);
  }
}

void EditorWindow::createFileMenu()
{
  QMenu* fileMenu = menuBar()->addMenu("&File");

  QAction* open = fileMenu->addAction("&Open");
  open->setShortcuts(QKeySequence::Open);
  open->setStatusTip("Open an existing file");

  QAction* save = fileMenu->addAction("&Save");
  save->setShortcuts(QKeySequence::Save);
  save->setStatusTip("Save current file");

  QAction* quit = fileMenu->addAction("Quit");
  quit->setShortcuts(QKeySequence::Quit);
  quit->setStatusTip("Quit the application");

  connect(quit, SIGNAL(triggered()), qApp, SLOT(quit()));
}

void EditorWindow::createFormatMenu()
{
  QMenu* formatMenu = menuBar()->addMenu("For&mat");

  QAction* larger = formatMenu->addAction("Increase font size");
  larger->setShortcuts(QKeySequence::ZoomIn);

  QAction* smaller = formatMenu->addAction("Reduce font size");
  smaller->setShortcuts(QKeySequence::ZoomOut);
}
