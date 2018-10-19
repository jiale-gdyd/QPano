#ifndef GWSCROLLAREA_H
#define GWSCROLLAREA_H
#include <QScrollArea>
#include <QObject>
#include <QLabel>
#include <QHBoxLayout>

class GwScrollArea:public QScrollArea
{
	Q_OBJECT
public:
	GwScrollArea(QWidget *parent);
	~GwScrollArea();
	void		setInputImagesList(QStringList imgs);
	void		update();
private:
	const int				childLabelWidth = 150;
	const int				childLabelHeight = 150;
	QScrollArea				*mScrollArea;
	QHBoxLayout				*mHBoxMainLayout;
	QStringList				mImageList;
	std::vector<QLabel*>	mLabelList;

	bool					eventFilter(QObject *watched, QEvent *event);
};

#endif
