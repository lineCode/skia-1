/*
 * Copyright 2017 Google Inc.
 *
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#include "SkSGPath.h"

#include "SkCanvas.h"
#include "SkPaint.h"

namespace sksg {

Path::Path(const SkPath& path) : fPath(path) {}

void Path::onDraw(SkCanvas* canvas, const SkPaint& paint) const {
    canvas->drawPath(fPath, paint);
}

SkRect Path::onComputeBounds() const {
    return fPath.computeTightBounds();
}

} // namespace sksg