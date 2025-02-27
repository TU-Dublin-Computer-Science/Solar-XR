extends RefCounted
## Description of a finger area.

enum Type {
	THUMB_RIGHT,
	INDEX_RIGHT,
	MIDDLE_RIGHT,
	RING_RIGHT,
	LITTLE_RIGHT,
	THUMB_LEFT,
	INDEX_LEFT,
	MIDDLE_LEFT,
	RING_LEFT,
	LITTLE_LEFT,
}

var type: Type
var area: Area3D
