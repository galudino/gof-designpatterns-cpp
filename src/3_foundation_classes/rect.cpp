#include "rect.h"

const rect rect::zero(0, 0);

rect::rect(float x, float y, float w, float h) {}

rect::rect(const point &origin, const point &extent) {}

float rect::width() const { return 0.0; }

void rect::set_width(float) {}

float rect::height() const { return 0.0; }

void rect::set_height(float) {}

float rect::left() const { return 0.0; }

void rect::set_left(float) {}

float rect::bottom() const { return 0.0; }

void rect::set_bottom(float) {}

point rect::origin() const { return m_origin; }

void rect::origin(const point &) {}

point rect::extent() const { return m_extent; }

void rect::set_extent(const point &) {}

void rect::move_to(const point &) {}

void rect::move_by(const point &) {}

bool rect::empty() const { return false; }

bool rect::contains(const point &) const { return false; }
