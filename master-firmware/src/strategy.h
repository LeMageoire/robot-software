#ifndef STRATEGY_H
#define STRATEGY_H

#ifdef __cplusplus
extern "C" {
#endif

void strategy_start(void);

bool strategy_goto_avoid(int x_mm, int y_mm, int a_deg, int traj_end_flags);

bool strat_check_distance_to_hand_lower_than(float expected_value);
void strat_pick_cube(point_t xy, float z_start);
bool strat_deposit_cube(float x, float y, int num_cubes_in_tower);

void strat_push_switch_on(float x, float y, float z, float y_push);
void strat_push_the_bee(point_t start, point_t end, float bee_height);

#ifdef __cplusplus
}
#endif

#endif /* STRATEGY_H */
