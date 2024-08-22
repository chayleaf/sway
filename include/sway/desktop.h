#include <wlr/types/wlr_compositor.h>

struct sway_container;
struct sway_view;

void desktop_damage_surface(struct wlr_surface *surface, double lx, double ly,
	bool whole);

void desktop_damage_whole_container(struct sway_container *con);

void desktop_damage_box(struct wlr_box *box);

void desktop_damage_view(struct sway_view *view);

void apply_exclusive(struct wlr_box *usable_area,
		uint32_t anchor, int32_t exclusive,
		int32_t margin_top, int32_t margin_right,
		int32_t margin_bottom, int32_t margin_left);
