/*
 Copyright (c) 2008-2017, Benoit AUTHEMAN All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the author or Destrat.io nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL AUTHOR BE LIABLE FOR ANY
 DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

//-----------------------------------------------------------------------------
// This file is a part of the QuickQanava software library.
//
// \file	qanCurveEdgeItem.cpp
// \author	benoit@destrat.io
// \date	2017 09 05
//-----------------------------------------------------------------------------

// Qt headers
#include <QBrush>
#include <QPainter>

// QuickQanava headers
#include "./qanCurveEdgeItem.h"
#include "./qanNodeItem.h"          // Resolve forward declaration
#include "./qanGroupItem.h"
#include "./qanGraph.h"

namespace qan { // ::qan

/* Edge Object Management *///-------------------------------------------------
CurveEdgeItem::CurveEdgeItem(QQuickItem* parent) :
    qan::EdgeItem(parent)
{
    setObjectName( QStringLiteral("qan::CurveEdgeItem") );
}

CurveEdgeItem::~CurveEdgeItem() { /* Nil */ }
//-----------------------------------------------------------------------------

/* Curve Control Points Management *///----------------------------------------
void    CurveEdgeItem::updateItem() noexcept
{
    qan::EdgeItem::updateItem();

    // FIXME generate c1/c2

    emit c1Changed();
    emit c2Changed();
}
//-----------------------------------------------------------------------------

} // ::qan
