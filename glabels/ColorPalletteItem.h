/*  ColorPalletteItem.h
 *
 *  Copyright (C) 2014  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef glabels_ColorPalletteItem_h
#define glabels_ColorPalletteItem_h

#include <QPushButton>
#include <QColor>


namespace glabels
{

	///
	/// Barcode Menu Item
	///
	class ColorPalletteItem : public QPushButton
	{
		Q_OBJECT

		/////////////////////////////////
		// Life Cycle
		/////////////////////////////////
	public:
		ColorPalletteItem( int            id,
		                   const QColor&  color,
		                   const QString& tip,
		                   QWidget*       parent = 0 );


		/////////////////////////////////
		// Signals
		/////////////////////////////////
	signals:
		void activated( int id );


		/////////////////////////////////
		// Properties
		/////////////////////////////////
	public:
		void setColor( int            id,
		               const QColor&  color,
		               const QString& tip );


		/////////////////////////////////
		// Slots
		/////////////////////////////////
	private slots:
		void onClicked();


		/////////////////////////////////
		// Private Data
		/////////////////////////////////
	private:
		int     mId;
		QColor  mColor;
		QString mTip;
		
	};


}

#endif // glabels_ColorPalletteItem_h