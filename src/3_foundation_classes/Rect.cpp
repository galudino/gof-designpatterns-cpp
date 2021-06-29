#include "Rect.h"

const Rect Rect::Zero(0, 0);

Rect::Rect(Coord x, Coord y, Coord w, Coord h) {}

Rect::Rect(const Point &origin, const Point &extent) {}

Coord Rect::Width() const { return 0.0; }

void Rect::Width(Coord) {}

Coord Rect::Height() const { return 0.0; }

void Rect::Height(Coord) {}

Coord Rect::Left() const { return 0.0; }

void Rect::Left(Coord) {}

Coord Rect::Bottom() const { return 0.0; }

void Rect::Bottom(Coord) {}

Point Rect::Origin() const { return _origin; }

void Rect::Origin(const Point &) {}

Point Rect::Extent() const { return _extent; }

void Rect::Extent(const Point &) {}

void Rect::MoveTo(const Point &) {}

void Rect::MoveBy(const Point &) {}

bool Rect::IsEmpty() const { return false; }

bool Rect::Contains(const Point &) const { return false; }
