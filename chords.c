#define COMBO_FOR_CHORD(name, ...) const uint16_t PROGMEM chord_##name[] = {__VA_ARGS__, COMBO_END};

#define CHORD_COMBO(name) [CHORD_##name] = COMBO_ACTION(chord_##name)

#include "personal.c"

#define CHORD_ENUM \
  CHORD_delete_, \
  CHORD_left_cl, \
  CHORD_right_c, \
  CHORD_oneshot, \
  CHORD_excl, \
  CHORD_qmark, \
  CHORD_colon, \
  CHORD_semi, \
  CHORD_cent, \
  CHORD_pound, \
  CHORD_yen, \
  CHORD_euro, \
  CHORD_mid_ell, \
  CHORD_bullet, \
  CHORD_degrees, \
  CHORD_infinit, \
  CHORD_lambda, \
  CHORD_interro, \
  CHORD_ballot_, \
  CHORD_checkma, \
  CHORD_left_ar, \
  CHORD_down_ar, \
  CHORD_up_arro, \
  CHORD_right_a, \
  CHORD__ing, \
  CHORD__n_t, \
  CHORD__ve, \
  CHORD__re, \
  CHORD_the, \
  CHORD_be, \
  CHORD_of, \
  CHORD_and, \
  CHORD_a, \
  CHORD_a1, \
  CHORD_to, \
  CHORD_in, \
  CHORD_he, \
  CHORD_have, \
  CHORD_it, \
  CHORD_that, \
  CHORD_for, \
  CHORD_they, \
  CHORD_i, \
  CHORD_with, \
  CHORD_as, \
  CHORD_not, \
  CHORD_on, \
  CHORD_she, \
  CHORD_at, \
  CHORD_by, \
  CHORD_this, \
  CHORD_we, \
  CHORD_you, \
  CHORD_do, \
  CHORD_but, \
  CHORD_from, \
  CHORD_or, \
  CHORD_which, \
  CHORD_one, \
  CHORD_would, \
  CHORD_all, \
  CHORD_will, \
  CHORD_there, \
  CHORD_say, \
  CHORD_who, \
  CHORD_make, \
  CHORD_when, \
  CHORD_can, \
  CHORD_more, \
  CHORD_if, \
  CHORD_no, \
  CHORD_man, \
  CHORD_out, \
  CHORD_other, \
  CHORD_so, \
  CHORD_what, \
  CHORD_time, \
  CHORD_up, \
  CHORD_go, \
  CHORD_about, \
  CHORD_than, \
  CHORD_into, \
  CHORD_could, \
  CHORD_state, \
  CHORD_only, \
  CHORD_new, \
  CHORD_year, \
  CHORD_some, \
  CHORD_take, \
  CHORD_come, \
  CHORD_these, \
  CHORD_know, \
  CHORD_see, \
  CHORD_use, \
  CHORD_get, \
  CHORD_like, \
  CHORD_then, \
  CHORD_first, \
  CHORD_any, \
  CHORD_work, \
  CHORD_now, \
  CHORD_may, \
  CHORD_such, \
  CHORD_give, \
  CHORD_over, \
  CHORD_think, \
  CHORD_most, \
  CHORD_even, \
  CHORD_find, \
  CHORD_day, \
  CHORD_also, \
  CHORD_after, \
  CHORD_way, \
  CHORD_many, \
  CHORD_must, \
  CHORD_look, \
  CHORD_before, \
  CHORD_great, \
  CHORD_back, \
  CHORD_through, \
  CHORD_long, \
  CHORD_where, \
  CHORD_much, \
  CHORD_should, \
  CHORD_well, \
  CHORD_people, \
  CHORD_down, \
  CHORD_own, \
  CHORD_just, \
  CHORD_because, \
  CHORD_good, \
  CHORD_each, \
  CHORD_those, \
  CHORD_feel, \
  CHORD_seem, \
  CHORD_how, \
  CHORD_high, \
  CHORD_too, \
  CHORD_place, \
  CHORD_little, \
  CHORD_world, \
  CHORD_very, \
  CHORD_still, \
  CHORD_nation, \
  CHORD_hand, \
  CHORD_old, \
  CHORD_life, \
  CHORD_tell, \
  CHORD_write, \
  CHORD_become, \
  CHORD_here, \
  CHORD_show, \
  CHORD_house, \
  CHORD_both, \
  CHORD_between, \
  CHORD_need, \
  CHORD_mean, \
  CHORD_call, \
  CHORD_develop, \
  CHORD_under, \
  CHORD_last, \
  CHORD_right, \
  CHORD_move, \
  CHORD_thing, \
  CHORD_general, \
  CHORD_school, \
  CHORD_never, \
  CHORD_same, \
  CHORD_another, \
  CHORD_begin, \
  CHORD_while, \
  CHORD_number, \
  CHORD_part, \
  CHORD_turn, \
  CHORD_real, \
  CHORD_leave, \
  CHORD_might, \
  CHORD_want, \
  CHORD_point, \
  CHORD_form, \
  CHORD_off, \
  CHORD_child, \
  CHORD_few, \
  CHORD_small, \
  CHORD_since, \
  CHORD_against, \
  CHORD_ask, \
  CHORD_late, \
  CHORD_home, \
  CHORD_interes, \
  CHORD_large, \
  CHORD_person, \
  CHORD_end, \
  CHORD_open, \
  CHORD_public, \
  CHORD_follow, \
  CHORD_during, \
  CHORD_present, \
  CHORD_without, \
  CHORD_again, \
  CHORD_hold, \
  CHORD_govern, \
  CHORD_around, \
  CHORD_possibl, \
  CHORD_head, \
  CHORD_conside, \
  CHORD_word, \
  CHORD_program, \
  CHORD_problem, \
  CHORD_however, \
  CHORD_lead, \
  CHORD_system, \
  CHORD_set, \
  CHORD_order, \
  CHORD_eye, \
  CHORD_plan, \
  CHORD_run, \
  CHORD_keep, \
  CHORD_face, \
  CHORD_fact, \
  CHORD_group, \
  CHORD_play, \
  CHORD_stand, \
  CHORD_increas, \
  CHORD_early, \
  CHORD_course, \
  CHORD_change, \
  CHORD_help, \
  CHORD_line, \
  CHORD_his, \
  CHORD_her, \
  CHORD_an, \
  CHORD_my, \
  CHORD_their, \
  CHORD_me, \
  CHORD_him, \
  CHORD_your, \
  CHORD_its, \
  CHORD_two, \
  CHORD_our, \
  CHORD_us, \
  CHORD_is, \
  CHORD_was, \
  CHORD_are, \
  CHORD_had, \
  CHORD_were, \
  CHORD_said, \
  CHORD_has, \
  CHORD_sound, \
  CHORD_water, \
  CHORD_side, \
  CHORD_made, \
  CHORD_live, \
  CHORD_round, \
  CHORD_came, \
  CHORD_every, \
  CHORD_name, \
  CHORD_sentenc, \
  CHORD_low, \
  CHORD_differ, \
  CHORD_cause, \
  CHORD_boy, \
  CHORD_does, \
  CHORD_air, \
  CHORD_put, \
  CHORD_port, \
  CHORD_spell, \
  CHORD_land, \
  CHORD_big, \
  CHORD_act, \
  CHORD_why, \
  CHORD_men, \
  CHORD_went, \
  CHORD_light, \
  CHORD_kind, \
  CHORD_picture, \
  CHORD_try, \
  CHORD_animal, \
  CHORD_mother, \
  CHORD_build, \
  CHORD_self, \
  CHORD_earth, \
  CHORD_father, \
  CHORD_page, \
  CHORD_country, \
  CHORD_found, \
  CHORD_answer, \
  CHORD_grow, \
  CHORD_study, \
  CHORD_learn, \
  CHORD_plant, \
  CHORD_cover, \
  CHORD_food, \
  CHORD_sun, \
  CHORD_four, \
  CHORD_thought, \
  CHORD_city, \
  CHORD_cross, \
  CHORD_hard, \
  CHORD_far, \
  CHORD_sea, \
  CHORD_draw, \
  CHORD_left, \
  CHORD_press, \
  CHORD_close, \
  CHORD_night, \
  CHORD_north, \
  CHORD_togethe, \
  CHORD_next, \
  CHORD_white, \
  CHORD_childre, \
  CHORD_got, \
  CHORD_walk, \
  CHORD_example, \
  CHORD_always, \
  CHORD_music, \
  CHORD_mark, \
  CHORD_often, \
  CHORD_letter, \
  CHORD_until, \
  CHORD_mile, \
  CHORD_river, \
  CHORD_car, \
  CHORD_feet, \
  CHORD_care, \
  CHORD_second, \
  CHORD_carry, \
  CHORD_science, \
  CHORD_eat, \
  CHORD_friend, \
  CHORD_began, \
  CHORD_idea, \
  CHORD_fish, \
  CHORD_mountai, \
  CHORD_stop, \
  CHORD_once, \
  CHORD_base, \
  CHORD_horse, \
  CHORD_cut, \
  CHORD_sure, \
  CHORD_watch, \
  CHORD_color, \
  CHORD_wood, \
  CHORD_main, \
  CHORD_enough, \
  CHORD_plain, \
  CHORD_girl, \
  CHORD_usual, \
  CHORD_young, \
  CHORD_ready, \
  CHORD_above, \
  CHORD_red, \
  CHORD_list, \
  CHORD_though, \
  CHORD_bird, \
  CHORD_body, \
  CHORD_family, \
  CHORD_direct, \
  CHORD_pose, \
  CHORD_song, \
  CHORD_measure, \
  CHORD_product, \
  CHORD_black, \
  CHORD_short, \
  CHORD_numeral, \
  CHORD_class, \
  CHORD_wind, \
  CHORD_questio, \
  CHORD_happen, \
  CHORD_complet, \
  CHORD_ship, \
  CHORD_half, \
  CHORD_rock, \
  CHORD_fire, \
  CHORD_south, \
  CHORD_told, \
  CHORD_knew, \
  CHORD_pass, \
  CHORD_top, \
  CHORD_whole, \
  CHORD_space, \
  CHORD_best, \
  CHORD_hour, \
  CHORD_better, \
  CHORD_true, \
  CHORD_hundred, \
  CHORD_five, \
  CHORD_six, \
  CHORD_war, \
  CHORD_lay, \
  CHORD_map, \
  CHORD_fly, \
  CHORD_fall, \
  CHORD_cry, \
  CHORD_box, \
  CHORD_noun, \
  CHORD_week, \
  CHORD_oh, \
  CHORD_free, \
  CHORD_dry, \
  CHORD_ago, \
  CHORD_ran, \
  CHORD_hot, \
  CHORD_ball, \
  CHORD_yet, \
  CHORD_am, \
  CHORD_arm, \
  CHORD_ice, \
  CHORD_matter, \
  CHORD_art, \
  CHORD_cell, \
  CHORD_summer, \
  CHORD_leg, \
  CHORD_joy, \
  CHORD_job, \
  CHORD_gas, \
  CHORD_buy, \
  CHORD_cook, \
  CHORD_hill, \
  CHORD_law, \
  CHORD_lie, \
  CHORD_son, \
  CHORD_pay, \
  CHORD_age, \
  CHORD_cool, \
  CHORD_lot, \
  CHORD_key, \
  CHORD_row, \
  CHORD_die, \
  CHORD_oil, \
  CHORD_fit, \
  CHORD_hit, \
  CHORD_rub, \
  CHORD_tie, \
  CHORD_gun, \
  CHORD_nine, \
  CHORD_thank, \
  CHORD_experie, \
  CHORD_led, \
  CHORD_win, \
  CHORD_feed, \
  CHORD_nor, \
  CHORD_fat, \
  CHORD_bar, \
  CHORD_log, \
  CHORD_hey, \
  CHORD_return, \
  CHORD_probabl, \
  CHORD_thanks, \
  CHORD_i_ve, \
  CHORD_per, \
  CHORD_null, \
  CHORD_nil, \
  CHORD_array, \
  CHORD_sort, \
  CHORD_in_the, \
  CHORD_of_the, \
  CHORD_to_be, \
  CHORD_to_the, \
  CHORD_and_the, \
  CHORD_and_i, \
  CHORD_on_the, \
  CHORD_it_is, \
  CHORD_if_you, \
  CHORD_the_wor, \
  CHORD_in_a, \
  CHORD_the_qui, \
  CHORD_elberet, \
  CHORD_http_, \
  CHORD_https_, \
  CHORD_select_, \
  PERSONAL_CHORD_ENUM \
  CHORD_S_the, \
  CHORD_S_be, \
  CHORD_S_of, \
  CHORD_S_and, \
  CHORD_S_a, \
  CHORD_S_to, \
  CHORD_S_in, \
  CHORD_S_he, \
  CHORD_S_have, \
  CHORD_S_it, \
  CHORD_S_that, \
  CHORD_S_for, \
  CHORD_S_they, \
  CHORD_S_with, \
  CHORD_S_as, \
  CHORD_S_not, \
  CHORD_S_on, \
  CHORD_S_she, \
  CHORD_S_at, \
  CHORD_S_by, \
  CHORD_S_this, \
  CHORD_S_we, \
  CHORD_S_you, \
  CHORD_S_do, \
  CHORD_S_but, \
  CHORD_S_from, \
  CHORD_S_or, \
  CHORD_S_which, \
  CHORD_S_one, \
  CHORD_S_would, \
  CHORD_S_all, \
  CHORD_S_will, \
  CHORD_S_there, \
  CHORD_S_say, \
  CHORD_S_who, \
  CHORD_S_make, \
  CHORD_S_when, \
  CHORD_S_can, \
  CHORD_S_more, \
  CHORD_S_if, \
  CHORD_S_no, \
  CHORD_S_man, \
  CHORD_S_out, \
  CHORD_S_other, \
  CHORD_S_so, \
  CHORD_S_what, \
  CHORD_S_time, \
  CHORD_S_up, \
  CHORD_S_go, \
  CHORD_S_about, \
  CHORD_S_than, \
  CHORD_S_into, \
  CHORD_S_could, \
  CHORD_S_state, \
  CHORD_S_only, \
  CHORD_S_new, \
  CHORD_S_year, \
  CHORD_S_some, \
  CHORD_S_take, \
  CHORD_S_come, \
  CHORD_S_these, \
  CHORD_S_know, \
  CHORD_S_see, \
  CHORD_S_use, \
  CHORD_S_get, \
  CHORD_S_like, \
  CHORD_S_then, \
  CHORD_S_first, \
  CHORD_S_any, \
  CHORD_S_work, \
  CHORD_S_now, \
  CHORD_S_may, \
  CHORD_S_such, \
  CHORD_S_give, \
  CHORD_S_over, \
  CHORD_S_think, \
  CHORD_S_most, \
  CHORD_S_even, \
  CHORD_S_find, \
  CHORD_S_day, \
  CHORD_S_also, \
  CHORD_S_after, \
  CHORD_S_way, \
  CHORD_S_many, \
  CHORD_S_must, \
  CHORD_S_look, \
  CHORD_S_before, \
  CHORD_S_great, \
  CHORD_S_back, \
  CHORD_S_through, \
  CHORD_S_long, \
  CHORD_S_where, \
  CHORD_S_much, \
  CHORD_S_should, \
  CHORD_S_well, \
  CHORD_S_people, \
  CHORD_S_down, \
  CHORD_S_own, \
  CHORD_S_just, \
  CHORD_S_because, \
  CHORD_S_good, \
  CHORD_S_each, \
  CHORD_S_those, \
  CHORD_S_feel, \
  CHORD_S_seem, \
  CHORD_S_how, \
  CHORD_S_high, \
  CHORD_S_too, \
  CHORD_S_place, \
  CHORD_S_little, \
  CHORD_S_world, \
  CHORD_S_very, \
  CHORD_S_still, \
  CHORD_S_nation, \
  CHORD_S_hand, \
  CHORD_S_old, \
  CHORD_S_life, \
  CHORD_S_tell, \
  CHORD_S_write, \
  CHORD_S_become, \
  CHORD_S_here, \
  CHORD_S_show, \
  CHORD_S_house, \
  CHORD_S_both, \
  CHORD_S_between, \
  CHORD_S_need, \
  CHORD_S_mean, \
  CHORD_S_call, \
  CHORD_S_develop, \
  CHORD_S_under, \
  CHORD_S_last, \
  CHORD_S_right, \
  CHORD_S_move, \
  CHORD_S_thing, \
  CHORD_S_general, \
  CHORD_S_school, \
  CHORD_S_never, \
  CHORD_S_same, \
  CHORD_S_another, \
  CHORD_S_begin, \
  CHORD_S_while, \
  CHORD_S_number, \
  CHORD_S_part, \
  CHORD_S_turn, \
  CHORD_S_real, \
  CHORD_S_leave, \
  CHORD_S_might, \
  CHORD_S_want, \
  CHORD_S_point, \
  CHORD_S_form, \
  CHORD_S_off, \
  CHORD_S_child, \
  CHORD_S_few, \
  CHORD_S_small, \
  CHORD_S_since, \
  CHORD_S_against, \
  CHORD_S_ask, \
  CHORD_S_late, \
  CHORD_S_home, \
  CHORD_S_interes, \
  CHORD_S_large, \
  CHORD_S_person, \
  CHORD_S_end, \
  CHORD_S_open, \
  CHORD_S_public, \
  CHORD_S_follow, \
  CHORD_S_during, \
  CHORD_S_present, \
  CHORD_S_without, \
  CHORD_S_again, \
  CHORD_S_hold, \
  CHORD_S_govern, \
  CHORD_S_around, \
  CHORD_S_possibl, \
  CHORD_S_head, \
  CHORD_S_conside, \
  CHORD_S_word, \
  CHORD_S_program, \
  CHORD_S_problem, \
  CHORD_S_however, \
  CHORD_S_lead, \
  CHORD_S_system, \
  CHORD_S_set, \
  CHORD_S_order, \
  CHORD_S_eye, \
  CHORD_S_plan, \
  CHORD_S_run, \
  CHORD_S_keep, \
  CHORD_S_face, \
  CHORD_S_fact, \
  CHORD_S_group, \
  CHORD_S_play, \
  CHORD_S_stand, \
  CHORD_S_increas, \
  CHORD_S_early, \
  CHORD_S_course, \
  CHORD_S_change, \
  CHORD_S_help, \
  CHORD_S_line, \
  CHORD_S_his, \
  CHORD_S_her, \
  CHORD_S_an, \
  CHORD_S_my, \
  CHORD_S_their, \
  CHORD_S_me, \
  CHORD_S_him, \
  CHORD_S_your, \
  CHORD_S_its, \
  CHORD_S_two, \
  CHORD_S_our, \
  CHORD_S_us, \
  CHORD_S_is, \
  CHORD_S_was, \
  CHORD_S_are, \
  CHORD_S_had, \
  CHORD_S_were, \
  CHORD_S_said, \
  CHORD_S_has, \
  CHORD_S_sound, \
  CHORD_S_water, \
  CHORD_S_side, \
  CHORD_S_made, \
  CHORD_S_live, \
  CHORD_S_round, \
  CHORD_S_came, \
  CHORD_S_every, \
  CHORD_S_name, \
  CHORD_S_sentenc, \
  CHORD_S_low, \
  CHORD_S_differ, \
  CHORD_S_cause, \
  CHORD_S_boy, \
  CHORD_S_does, \
  CHORD_S_air, \
  CHORD_S_put, \
  CHORD_S_port, \
  CHORD_S_spell, \
  CHORD_S_land, \
  CHORD_S_big, \
  CHORD_S_act, \
  CHORD_S_why, \
  CHORD_S_men, \
  CHORD_S_went, \
  CHORD_S_light, \
  CHORD_S_kind, \
  CHORD_S_picture, \
  CHORD_S_try, \
  CHORD_S_animal, \
  CHORD_S_mother, \
  CHORD_S_build, \
  CHORD_S_self, \
  CHORD_S_earth, \
  CHORD_S_father, \
  CHORD_S_page, \
  CHORD_S_country, \
  CHORD_S_found, \
  CHORD_S_answer, \
  CHORD_S_grow, \
  CHORD_S_study, \
  CHORD_S_learn, \
  CHORD_S_plant, \
  CHORD_S_cover, \
  CHORD_S_food, \
  CHORD_S_sun, \
  CHORD_S_four, \
  CHORD_S_thought, \
  CHORD_S_city, \
  CHORD_S_cross, \
  CHORD_S_hard, \
  CHORD_S_far, \
  CHORD_S_sea, \
  CHORD_S_draw, \
  CHORD_S_left, \
  CHORD_S_press, \
  CHORD_S_close, \
  CHORD_S_night, \
  CHORD_S_north, \
  CHORD_S_togethe, \
  CHORD_S_next, \
  CHORD_S_white, \
  CHORD_S_childre, \
  CHORD_S_got, \
  CHORD_S_walk, \
  CHORD_S_example, \
  CHORD_S_always, \
  CHORD_S_music, \
  CHORD_S_mark, \
  CHORD_S_often, \
  CHORD_S_letter, \
  CHORD_S_until, \
  CHORD_S_mile, \
  CHORD_S_river, \
  CHORD_S_car, \
  CHORD_S_feet, \
  CHORD_S_care, \
  CHORD_S_second, \
  CHORD_S_carry, \
  CHORD_S_science, \
  CHORD_S_eat, \
  CHORD_S_friend, \
  CHORD_S_began, \
  CHORD_S_idea, \
  CHORD_S_fish, \
  CHORD_S_mountai, \
  CHORD_S_stop, \
  CHORD_S_once, \
  CHORD_S_base, \
  CHORD_S_horse, \
  CHORD_S_cut, \
  CHORD_S_sure, \
  CHORD_S_watch, \
  CHORD_S_color, \
  CHORD_S_wood, \
  CHORD_S_main, \
  CHORD_S_enough, \
  CHORD_S_plain, \
  CHORD_S_girl, \
  CHORD_S_usual, \
  CHORD_S_young, \
  CHORD_S_ready, \
  CHORD_S_above, \
  CHORD_S_red, \
  CHORD_S_list, \
  CHORD_S_though, \
  CHORD_S_bird, \
  CHORD_S_body, \
  CHORD_S_family, \
  CHORD_S_direct, \
  CHORD_S_pose, \
  CHORD_S_song, \
  CHORD_S_measure, \
  CHORD_S_product, \
  CHORD_S_black, \
  CHORD_S_short, \
  CHORD_S_numeral, \
  CHORD_S_class, \
  CHORD_S_wind, \
  CHORD_S_questio, \
  CHORD_S_happen, \
  CHORD_S_complet, \
  CHORD_S_ship, \
  CHORD_S_half, \
  CHORD_S_rock, \
  CHORD_S_fire, \
  CHORD_S_south, \
  CHORD_S_told, \
  CHORD_S_knew, \
  CHORD_S_pass, \
  CHORD_S_top, \
  CHORD_S_whole, \
  CHORD_S_space, \
  CHORD_S_best, \
  CHORD_S_hour, \
  CHORD_S_better, \
  CHORD_S_true, \
  CHORD_S_hundred, \
  CHORD_S_five, \
  CHORD_S_six, \
  CHORD_S_war, \
  CHORD_S_lay, \
  CHORD_S_map, \
  CHORD_S_fly, \
  CHORD_S_fall, \
  CHORD_S_cry, \
  CHORD_S_box, \
  CHORD_S_noun, \
  CHORD_S_week, \
  CHORD_S_oh, \
  CHORD_S_free, \
  CHORD_S_dry, \
  CHORD_S_ago, \
  CHORD_S_ran, \
  CHORD_S_hot, \
  CHORD_S_ball, \
  CHORD_S_yet, \
  CHORD_S_am, \
  CHORD_S_arm, \
  CHORD_S_ice, \
  CHORD_S_matter, \
  CHORD_S_art, \
  CHORD_S_cell, \
  CHORD_S_summer, \
  CHORD_S_leg, \
  CHORD_S_joy, \
  CHORD_S_job, \
  CHORD_S_gas, \
  CHORD_S_buy, \
  CHORD_S_cook, \
  CHORD_S_hill, \
  CHORD_S_law, \
  CHORD_S_lie, \
  CHORD_S_son, \
  CHORD_S_pay, \
  CHORD_S_age, \
  CHORD_S_cool, \
  CHORD_S_lot, \
  CHORD_S_key, \
  CHORD_S_row, \
  CHORD_S_die, \
  CHORD_S_oil, \
  CHORD_S_fit, \
  CHORD_S_hit, \
  CHORD_S_rub, \
  CHORD_S_tie, \
  CHORD_S_gun, \
  CHORD_S_nine, \
  CHORD_S_thank, \
  CHORD_S_experie, \
  CHORD_S_led, \
  CHORD_S_win, \
  CHORD_S_feed, \
  CHORD_S_nor, \
  CHORD_S_fat, \
  CHORD_S_bar, \
  CHORD_S_log, \
  CHORD_S_hey, \
  CHORD_S_return, \
  CHORD_S_probabl, \
  CHORD_S_thanks, \
  CHORD_S_per, \
  CHORD_S_null, \
  CHORD_S_nil, \
  CHORD_S_array, \
  CHORD_S_sort, \
  CHORD_S_in_the, \
  CHORD_S_of_the, \
  CHORD_S_to_be, \
  CHORD_S_to_the, \
  CHORD_S_and_the, \
  CHORD_S_and_i, \
  CHORD_S_on_the, \
  CHORD_S_it_is, \
  CHORD_S_if_you, \
  CHORD_S_the_wor, \
  CHORD_S_in_a, \
  CHORD_S_the_qui, \
  CHORD_S_select_, \
  PERSONAL_SHIFTED_ENUM

COMBO_FOR_CHORD(delete_, AT1, AT2);
COMBO_FOR_CHORD(left_cl, AT0, AT1);
COMBO_FOR_CHORD(right_c, AT2, AT3);
COMBO_FOR_CHORD(oneshot, AT0, AT3);
COMBO_FOR_CHORD(excl, A_E, A_d);
COMBO_FOR_CHORD(qmark, A_I, A_c);
COMBO_FOR_CHORD(colon, A_A, A_r);
COMBO_FOR_CHORD(semi, A_A, A_q);
COMBO_FOR_CHORD(cent, S_C, S_Q);
COMBO_FOR_CHORD(pound, S_R, S_J);
COMBO_FOR_CHORD(yen, S_S, S_V);
COMBO_FOR_CHORD(euro, S_T, S_D);
COMBO_FOR_CHORD(mid_ell, S_G, S_K);
COMBO_FOR_CHORD(bullet, S_P, S_T);
COMBO_FOR_CHORD(degrees, S_Y, S_S);
COMBO_FOR_CHORD(infinit, S_W, S_C);
COMBO_FOR_CHORD(lambda, S_L, S_R);
COMBO_FOR_CHORD(interro, S_B, S_G);
COMBO_FOR_CHORD(ballot_, S_M, S_X);
COMBO_FOR_CHORD(checkma, S_N, S_H);
COMBO_FOR_CHORD(left_ar, S_Z, S_M);
COMBO_FOR_CHORD(down_ar, S_F, S_N);
COMBO_FOR_CHORD(up_arro, S_O, S_E);
COMBO_FOR_CHORD(right_a, S_U, S_I);
COMBO_FOR_CHORD(_ing, A_I, A_N, A_G);
COMBO_FOR_CHORD(_n_t, A_N, A_q, A_T);
COMBO_FOR_CHORD(_ve, A_q, A_V, A_E);
COMBO_FOR_CHORD(_re, A_q, A_R, A_E);
COMBO_FOR_CHORD(the, A_T, A_H, A_E);
COMBO_FOR_CHORD(S_the, A_T, A_H, A_E, AT1);
COMBO_FOR_CHORD(be, A_B, A_E, AT0);
COMBO_FOR_CHORD(S_be, A_B, A_E, AT0, AT1);
COMBO_FOR_CHORD(of, A_O, A_F, AT0);
COMBO_FOR_CHORD(S_of, A_O, A_F, AT0, AT1);
COMBO_FOR_CHORD(and, A_A, A_N, A_D);
COMBO_FOR_CHORD(S_and, A_A, A_N, A_D, AT1);
COMBO_FOR_CHORD(a, A_A, AT0);
COMBO_FOR_CHORD(S_a, A_A, AT0, AT1);
COMBO_FOR_CHORD(a1, A_A, AT1);
COMBO_FOR_CHORD(to, A_T, A_O, AT0);
COMBO_FOR_CHORD(S_to, A_T, A_O, AT0, AT1);
COMBO_FOR_CHORD(in, A_I, A_N, AT0);
COMBO_FOR_CHORD(S_in, A_I, A_N, AT0, AT1);
COMBO_FOR_CHORD(he, A_H, A_E, AT0);
COMBO_FOR_CHORD(S_he, A_H, A_E, AT0, AT1);
COMBO_FOR_CHORD(have, A_H, A_A, A_V);
COMBO_FOR_CHORD(S_have, A_H, A_A, A_V, AT1);
COMBO_FOR_CHORD(it, A_I, A_T, AT0);
COMBO_FOR_CHORD(S_it, A_I, A_T, AT0, AT1);
COMBO_FOR_CHORD(that, A_T, A_H, A_A);
COMBO_FOR_CHORD(S_that, A_T, A_H, A_A, AT1);
COMBO_FOR_CHORD(for, A_F, A_O, A_R);
COMBO_FOR_CHORD(S_for, A_F, A_O, A_R, AT1);
COMBO_FOR_CHORD(they, A_T, A_H, A_Y);
COMBO_FOR_CHORD(S_they, A_T, A_H, A_Y, AT1);
COMBO_FOR_CHORD(i, A_I, AT0);
COMBO_FOR_CHORD(with, A_W, A_I, A_H);
COMBO_FOR_CHORD(S_with, A_W, A_I, A_H, AT1);
COMBO_FOR_CHORD(as, A_A, A_S, AT0);
COMBO_FOR_CHORD(S_as, A_A, A_S, AT0, AT1);
COMBO_FOR_CHORD(not, A_N, A_O, A_T);
COMBO_FOR_CHORD(S_not, A_N, A_O, A_T, AT1);
COMBO_FOR_CHORD(on, A_O, A_N, AT0);
COMBO_FOR_CHORD(S_on, A_O, A_N, AT0, AT1);
COMBO_FOR_CHORD(she, A_S, A_H, A_E);
COMBO_FOR_CHORD(S_she, A_S, A_H, A_E, AT1);
COMBO_FOR_CHORD(at, A_A, A_T, AT0);
COMBO_FOR_CHORD(S_at, A_A, A_T, AT0, AT1);
COMBO_FOR_CHORD(by, A_B, A_Y, AT0);
COMBO_FOR_CHORD(S_by, A_B, A_Y, AT0, AT1);
COMBO_FOR_CHORD(this, A_T, A_H, A_S);
COMBO_FOR_CHORD(S_this, A_T, A_H, A_S, AT1);
COMBO_FOR_CHORD(we, A_W, A_E, AT0);
COMBO_FOR_CHORD(S_we, A_W, A_E, AT0, AT1);
COMBO_FOR_CHORD(you, A_Y, A_O, A_U);
COMBO_FOR_CHORD(S_you, A_Y, A_O, A_U, AT1);
COMBO_FOR_CHORD(do, A_D, A_O, AT0);
COMBO_FOR_CHORD(S_do, A_D, A_O, AT0, AT1);
COMBO_FOR_CHORD(but, A_I, A_U, A_T);
COMBO_FOR_CHORD(S_but, A_I, A_U, A_T, AT1);
COMBO_FOR_CHORD(from, A_R, A_O, A_M);
COMBO_FOR_CHORD(S_from, A_R, A_O, A_M, AT1);
COMBO_FOR_CHORD(or, A_O, A_R, AT0);
COMBO_FOR_CHORD(S_or, A_O, A_R, AT0, AT1);
COMBO_FOR_CHORD(which, A_H, A_I, A_C);
COMBO_FOR_CHORD(S_which, A_H, A_I, A_C, AT1);
COMBO_FOR_CHORD(one, A_O, A_N, A_E);
COMBO_FOR_CHORD(S_one, A_O, A_N, A_E, AT1);
COMBO_FOR_CHORD(would, A_W, A_O, A_U);
COMBO_FOR_CHORD(S_would, A_W, A_O, A_U, AT1);
COMBO_FOR_CHORD(all, A_A, A_L, AT0);
COMBO_FOR_CHORD(S_all, A_A, A_L, AT0, AT1);
COMBO_FOR_CHORD(will, A_W, A_I, A_L);
COMBO_FOR_CHORD(S_will, A_W, A_I, A_L, AT1);
COMBO_FOR_CHORD(there, A_T, A_H, A_R);
COMBO_FOR_CHORD(S_there, A_T, A_H, A_R, AT1);
COMBO_FOR_CHORD(say, A_S, A_A, A_Y);
COMBO_FOR_CHORD(S_say, A_S, A_A, A_Y, AT1);
COMBO_FOR_CHORD(who, A_W, A_H, A_O);
COMBO_FOR_CHORD(S_who, A_W, A_H, A_O, AT1);
COMBO_FOR_CHORD(make, A_M, A_A, A_K);
COMBO_FOR_CHORD(S_make, A_M, A_A, A_K, AT1);
COMBO_FOR_CHORD(when, A_W, A_H, A_E);
COMBO_FOR_CHORD(S_when, A_W, A_H, A_E, AT1);
COMBO_FOR_CHORD(can, A_C, A_A, A_N);
COMBO_FOR_CHORD(S_can, A_C, A_A, A_N, AT1);
COMBO_FOR_CHORD(more, A_M, A_R, A_E);
COMBO_FOR_CHORD(S_more, A_M, A_R, A_E, AT1);
COMBO_FOR_CHORD(if, A_I, A_F, AT0);
COMBO_FOR_CHORD(S_if, A_I, A_F, AT0, AT1);
COMBO_FOR_CHORD(no, A_N, A_E, AT0);
COMBO_FOR_CHORD(S_no, A_N, A_E, AT0, AT1);
COMBO_FOR_CHORD(man, A_M, A_A, A_N);
COMBO_FOR_CHORD(S_man, A_M, A_A, A_N, AT1);
COMBO_FOR_CHORD(out, A_O, A_U, A_T);
COMBO_FOR_CHORD(S_out, A_O, A_U, A_T, AT1);
COMBO_FOR_CHORD(other, A_O, A_T, A_R);
COMBO_FOR_CHORD(S_other, A_O, A_T, A_R, AT1);
COMBO_FOR_CHORD(so, A_S, A_O, AT0);
COMBO_FOR_CHORD(S_so, A_S, A_O, AT0, AT1);
COMBO_FOR_CHORD(what, A_W, A_H, A_T);
COMBO_FOR_CHORD(S_what, A_W, A_H, A_T, AT1);
COMBO_FOR_CHORD(time, A_T, A_M, A_E);
COMBO_FOR_CHORD(S_time, A_T, A_M, A_E, AT1);
COMBO_FOR_CHORD(up, A_U, A_P, AT0);
COMBO_FOR_CHORD(S_up, A_U, A_P, AT0, AT1);
COMBO_FOR_CHORD(go, A_G, A_O, AT0);
COMBO_FOR_CHORD(S_go, A_G, A_O, AT0, AT1);
COMBO_FOR_CHORD(about, A_B, A_O, A_U);
COMBO_FOR_CHORD(S_about, A_B, A_O, A_U, AT1);
COMBO_FOR_CHORD(than, A_T, A_A, A_N);
COMBO_FOR_CHORD(S_than, A_T, A_A, A_N, AT1);
COMBO_FOR_CHORD(into, A_I, A_N, A_O);
COMBO_FOR_CHORD(S_into, A_I, A_N, A_O, AT1);
COMBO_FOR_CHORD(could, A_C, A_O, A_U);
COMBO_FOR_CHORD(S_could, A_C, A_O, A_U, AT1);
COMBO_FOR_CHORD(state, A_S, A_T, A_A);
COMBO_FOR_CHORD(S_state, A_S, A_T, A_A, AT1);
COMBO_FOR_CHORD(only, A_O, A_L, A_Y);
COMBO_FOR_CHORD(S_only, A_O, A_L, A_Y, AT1);
COMBO_FOR_CHORD(new, A_N, A_E, A_W);
COMBO_FOR_CHORD(S_new, A_N, A_E, A_W, AT1);
COMBO_FOR_CHORD(year, A_Y, A_E, A_A);
COMBO_FOR_CHORD(S_year, A_Y, A_E, A_A, AT1);
COMBO_FOR_CHORD(some, A_S, A_O, A_M);
COMBO_FOR_CHORD(S_some, A_S, A_O, A_M, AT1);
COMBO_FOR_CHORD(take, A_A, A_K, A_E);
COMBO_FOR_CHORD(S_take, A_A, A_K, A_E, AT1);
COMBO_FOR_CHORD(come, A_C, A_O, A_M);
COMBO_FOR_CHORD(S_come, A_C, A_O, A_M, AT1);
COMBO_FOR_CHORD(these, A_N, A_H, A_S);
COMBO_FOR_CHORD(S_these, A_N, A_H, A_S, AT1);
COMBO_FOR_CHORD(know, A_K, A_N, A_O);
COMBO_FOR_CHORD(S_know, A_K, A_N, A_O, AT1);
COMBO_FOR_CHORD(see, A_S, A_E, A_K);
COMBO_FOR_CHORD(S_see, A_S, A_E, A_K, AT1);
COMBO_FOR_CHORD(use, A_U, A_S, A_E);
COMBO_FOR_CHORD(S_use, A_U, A_S, A_E, AT1);
COMBO_FOR_CHORD(get, A_G, A_E, A_T);
COMBO_FOR_CHORD(S_get, A_G, A_E, A_T, AT1);
COMBO_FOR_CHORD(like, A_I, A_E, AT0);
COMBO_FOR_CHORD(S_like, A_I, A_E, AT0, AT1);
COMBO_FOR_CHORD(then, A_T, A_E, A_N);
COMBO_FOR_CHORD(S_then, A_T, A_E, A_N, AT1);
COMBO_FOR_CHORD(first, A_F, A_R, A_S);
COMBO_FOR_CHORD(S_first, A_F, A_R, A_S, AT1);
COMBO_FOR_CHORD(any, A_A, A_N, A_Y);
COMBO_FOR_CHORD(S_any, A_A, A_N, A_Y, AT1);
COMBO_FOR_CHORD(work, A_O, A_R, A_K);
COMBO_FOR_CHORD(S_work, A_O, A_R, A_K, AT1);
COMBO_FOR_CHORD(now, A_N, A_O, A_W);
COMBO_FOR_CHORD(S_now, A_N, A_O, A_W, AT1);
COMBO_FOR_CHORD(may, A_M, A_A, A_Y);
COMBO_FOR_CHORD(S_may, A_M, A_A, A_Y, AT1);
COMBO_FOR_CHORD(such, A_S, A_C, A_H);
COMBO_FOR_CHORD(S_such, A_S, A_C, A_H, AT1);
COMBO_FOR_CHORD(give, A_G, A_I, A_V);
COMBO_FOR_CHORD(S_give, A_G, A_I, A_V, AT1);
COMBO_FOR_CHORD(over, A_O, A_V, A_R);
COMBO_FOR_CHORD(S_over, A_O, A_V, A_R, AT1);
COMBO_FOR_CHORD(think, A_H, A_I, A_K);
COMBO_FOR_CHORD(S_think, A_H, A_I, A_K, AT1);
COMBO_FOR_CHORD(most, A_M, A_O, A_T);
COMBO_FOR_CHORD(S_most, A_M, A_O, A_T, AT1);
COMBO_FOR_CHORD(even, A_E, A_V, A_N);
COMBO_FOR_CHORD(S_even, A_E, A_V, A_N, AT1);
COMBO_FOR_CHORD(find, A_F, A_I, A_D);
COMBO_FOR_CHORD(S_find, A_F, A_I, A_D, AT1);
COMBO_FOR_CHORD(day, A_A, A_Y, AT0);
COMBO_FOR_CHORD(S_day, A_A, A_Y, AT0, AT1);
COMBO_FOR_CHORD(also, A_A, A_L, A_O);
COMBO_FOR_CHORD(S_also, A_A, A_L, A_O, AT1);
COMBO_FOR_CHORD(after, A_F, A_T, A_R);
COMBO_FOR_CHORD(S_after, A_F, A_T, A_R, AT1);
COMBO_FOR_CHORD(way, A_W, A_A, A_Y);
COMBO_FOR_CHORD(S_way, A_W, A_A, A_Y, AT1);
COMBO_FOR_CHORD(many, A_M, A_N, A_Y);
COMBO_FOR_CHORD(S_many, A_M, A_N, A_Y, AT1);
COMBO_FOR_CHORD(must, A_M, A_U, A_T);
COMBO_FOR_CHORD(S_must, A_M, A_U, A_T, AT1);
COMBO_FOR_CHORD(look, A_L, A_O, A_K);
COMBO_FOR_CHORD(S_look, A_L, A_O, A_K, AT1);
COMBO_FOR_CHORD(before, A_B, A_F, A_O);
COMBO_FOR_CHORD(S_before, A_B, A_F, A_O, AT1);
COMBO_FOR_CHORD(great, A_G, A_R, A_E);
COMBO_FOR_CHORD(S_great, A_G, A_R, A_E, AT1);
COMBO_FOR_CHORD(back, A_B, A_A, A_C);
COMBO_FOR_CHORD(S_back, A_B, A_A, A_C, AT1);
COMBO_FOR_CHORD(through, A_H, A_R, A_G);
COMBO_FOR_CHORD(S_through, A_H, A_R, A_G, AT1);
COMBO_FOR_CHORD(long, A_L, A_O, A_N);
COMBO_FOR_CHORD(S_long, A_L, A_O, A_N, AT1);
COMBO_FOR_CHORD(where, A_W, A_H, A_R);
COMBO_FOR_CHORD(S_where, A_W, A_H, A_R, AT1);
COMBO_FOR_CHORD(much, A_M, A_U, A_C);
COMBO_FOR_CHORD(S_much, A_M, A_U, A_C, AT1);
COMBO_FOR_CHORD(should, A_S, A_O, A_U);
COMBO_FOR_CHORD(S_should, A_S, A_O, A_U, AT1);
COMBO_FOR_CHORD(well, A_W, A_E, A_L);
COMBO_FOR_CHORD(S_well, A_W, A_E, A_L, AT1);
COMBO_FOR_CHORD(people, A_P, A_E, A_L);
COMBO_FOR_CHORD(S_people, A_P, A_E, A_L, AT1);
COMBO_FOR_CHORD(down, A_D, A_W, A_N);
COMBO_FOR_CHORD(S_down, A_D, A_W, A_N, AT1);
COMBO_FOR_CHORD(own, A_O, A_W, A_F);
COMBO_FOR_CHORD(S_own, A_O, A_W, A_F, AT1);
COMBO_FOR_CHORD(just, A_U, A_S, A_T);
COMBO_FOR_CHORD(S_just, A_U, A_S, A_T, AT1);
COMBO_FOR_CHORD(because, A_B, A_E, A_A);
COMBO_FOR_CHORD(S_because, A_B, A_E, A_A, AT1);
COMBO_FOR_CHORD(good, A_V, A_O, A_D);
COMBO_FOR_CHORD(S_good, A_V, A_O, A_D, AT1);
COMBO_FOR_CHORD(each, A_A, A_C, A_H);
COMBO_FOR_CHORD(S_each, A_A, A_C, A_H, AT1);
COMBO_FOR_CHORD(those, A_T, A_O, A_S);
COMBO_FOR_CHORD(S_those, A_T, A_O, A_S, AT1);
COMBO_FOR_CHORD(feel, A_F, A_E, A_L);
COMBO_FOR_CHORD(S_feel, A_F, A_E, A_L, AT1);
COMBO_FOR_CHORD(seem, A_S, A_E, A_M);
COMBO_FOR_CHORD(S_seem, A_S, A_E, A_M, AT1);
COMBO_FOR_CHORD(how, A_H, A_O, A_U);
COMBO_FOR_CHORD(S_how, A_H, A_O, A_U, AT1);
COMBO_FOR_CHORD(high, A_H, A_I, A_G);
COMBO_FOR_CHORD(S_high, A_H, A_I, A_G, AT1);
COMBO_FOR_CHORD(too, A_T, A_O, A_F);
COMBO_FOR_CHORD(S_too, A_T, A_O, A_F, AT1);
COMBO_FOR_CHORD(place, A_P, A_C, A_E);
COMBO_FOR_CHORD(S_place, A_P, A_C, A_E, AT1);
COMBO_FOR_CHORD(little, A_L, A_I, A_T);
COMBO_FOR_CHORD(S_little, A_L, A_I, A_T, AT1);
COMBO_FOR_CHORD(world, A_W, A_L, A_D);
COMBO_FOR_CHORD(S_world, A_W, A_L, A_D, AT1);
COMBO_FOR_CHORD(very, A_V, A_E, A_R);
COMBO_FOR_CHORD(S_very, A_V, A_E, A_R, AT1);
COMBO_FOR_CHORD(still, A_S, A_T, A_L);
COMBO_FOR_CHORD(S_still, A_S, A_T, A_L, AT1);
COMBO_FOR_CHORD(nation, A_A, A_T, A_I);
COMBO_FOR_CHORD(S_nation, A_A, A_T, A_I, AT1);
COMBO_FOR_CHORD(hand, A_H, A_N, A_D);
COMBO_FOR_CHORD(S_hand, A_H, A_N, A_D, AT1);
COMBO_FOR_CHORD(old, A_O, A_L, A_D);
COMBO_FOR_CHORD(S_old, A_O, A_L, A_D, AT1);
COMBO_FOR_CHORD(life, A_L, A_I, A_F);
COMBO_FOR_CHORD(S_life, A_L, A_I, A_F, AT1);
COMBO_FOR_CHORD(tell, A_T, A_E, A_L);
COMBO_FOR_CHORD(S_tell, A_T, A_E, A_L, AT1);
COMBO_FOR_CHORD(write, A_R, A_I, A_E);
COMBO_FOR_CHORD(S_write, A_R, A_I, A_E, AT1);
COMBO_FOR_CHORD(become, A_C, A_M, A_E);
COMBO_FOR_CHORD(S_become, A_C, A_M, A_E, AT1);
COMBO_FOR_CHORD(here, A_H, A_R, AT0);
COMBO_FOR_CHORD(S_here, A_H, A_R, AT0, AT1);
COMBO_FOR_CHORD(show, A_S, A_H, AT0);
COMBO_FOR_CHORD(S_show, A_S, A_H, AT0, AT1);
COMBO_FOR_CHORD(house, A_O, A_S, A_E);
COMBO_FOR_CHORD(S_house, A_O, A_S, A_E, AT1);
COMBO_FOR_CHORD(both, A_B, A_O, A_H);
COMBO_FOR_CHORD(S_both, A_B, A_O, A_H, AT1);
COMBO_FOR_CHORD(between, A_B, A_E, A_N);
COMBO_FOR_CHORD(S_between, A_B, A_E, A_N, AT1);
COMBO_FOR_CHORD(need, A_T, A_N, A_D);
COMBO_FOR_CHORD(S_need, A_T, A_N, A_D, AT1);
COMBO_FOR_CHORD(mean, A_M, A_N, AT0);
COMBO_FOR_CHORD(S_mean, A_M, A_N, AT0, AT1);
COMBO_FOR_CHORD(call, A_C, A_A, A_L);
COMBO_FOR_CHORD(S_call, A_C, A_A, A_L, AT1);
COMBO_FOR_CHORD(develop, A_D, A_E, A_V);
COMBO_FOR_CHORD(S_develop, A_D, A_E, A_V, AT1);
COMBO_FOR_CHORD(under, A_U, A_N, A_D);
COMBO_FOR_CHORD(S_under, A_U, A_N, A_D, AT1);
COMBO_FOR_CHORD(last, A_L, A_A, A_S);
COMBO_FOR_CHORD(S_last, A_L, A_A, A_S, AT1);
COMBO_FOR_CHORD(right, A_R, A_I, A_T);
COMBO_FOR_CHORD(S_right, A_R, A_I, A_T, AT1);
COMBO_FOR_CHORD(move, A_M, A_V, A_E);
COMBO_FOR_CHORD(S_move, A_M, A_V, A_E, AT1);
COMBO_FOR_CHORD(thing, A_T, A_I, A_N);
COMBO_FOR_CHORD(S_thing, A_T, A_I, A_N, AT1);
COMBO_FOR_CHORD(general, A_G, A_E, A_N);
COMBO_FOR_CHORD(S_general, A_G, A_E, A_N, AT1);
COMBO_FOR_CHORD(school, A_S, A_H, A_L);
COMBO_FOR_CHORD(S_school, A_S, A_H, A_L, AT1);
COMBO_FOR_CHORD(never, A_N, A_V, A_R);
COMBO_FOR_CHORD(S_never, A_N, A_V, A_R, AT1);
COMBO_FOR_CHORD(same, A_S, A_A, A_M);
COMBO_FOR_CHORD(S_same, A_S, A_A, A_M, AT1);
COMBO_FOR_CHORD(another, A_A, A_H, A_R);
COMBO_FOR_CHORD(S_another, A_A, A_H, A_R, AT1);
COMBO_FOR_CHORD(begin, A_E, A_G, A_I);
COMBO_FOR_CHORD(S_begin, A_E, A_G, A_I, AT1);
COMBO_FOR_CHORD(while, A_H, A_I, A_E);
COMBO_FOR_CHORD(S_while, A_H, A_I, A_E, AT1);
COMBO_FOR_CHORD(number, A_N, A_E, A_R);
COMBO_FOR_CHORD(S_number, A_N, A_E, A_R, AT1);
COMBO_FOR_CHORD(part, A_P, A_A, A_R);
COMBO_FOR_CHORD(S_part, A_P, A_A, A_R, AT1);
COMBO_FOR_CHORD(turn, A_T, A_U, A_N);
COMBO_FOR_CHORD(S_turn, A_T, A_U, A_N, AT1);
COMBO_FOR_CHORD(real, A_E, A_A, A_L);
COMBO_FOR_CHORD(S_real, A_E, A_A, A_L, AT1);
COMBO_FOR_CHORD(leave, A_E, A_A, A_V);
COMBO_FOR_CHORD(S_leave, A_E, A_A, A_V, AT1);
COMBO_FOR_CHORD(might, A_M, A_I, A_T);
COMBO_FOR_CHORD(S_might, A_M, A_I, A_T, AT1);
COMBO_FOR_CHORD(want, A_W, A_A, A_T);
COMBO_FOR_CHORD(S_want, A_W, A_A, A_T, AT1);
COMBO_FOR_CHORD(point, A_P, A_O, A_I);
COMBO_FOR_CHORD(S_point, A_P, A_O, A_I, AT1);
COMBO_FOR_CHORD(form, A_F, A_R, AT0);
COMBO_FOR_CHORD(S_form, A_F, A_R, AT0, AT1);
COMBO_FOR_CHORD(off, A_O, A_F, A_K);
COMBO_FOR_CHORD(S_off, A_O, A_F, A_K, AT1);
COMBO_FOR_CHORD(child, A_C, A_I, A_D);
COMBO_FOR_CHORD(S_child, A_C, A_I, A_D, AT1);
COMBO_FOR_CHORD(few, A_F, A_E, A_W);
COMBO_FOR_CHORD(S_few, A_F, A_E, A_W, AT1);
COMBO_FOR_CHORD(small, A_M, A_A, A_L);
COMBO_FOR_CHORD(S_small, A_M, A_A, A_L, AT1);
COMBO_FOR_CHORD(since, A_S, A_I, A_E);
COMBO_FOR_CHORD(S_since, A_S, A_I, A_E, AT1);
COMBO_FOR_CHORD(against, A_A, A_G, A_N);
COMBO_FOR_CHORD(S_against, A_A, A_G, A_N, AT1);
COMBO_FOR_CHORD(ask, A_A, A_S, A_K);
COMBO_FOR_CHORD(S_ask, A_A, A_S, A_K, AT1);
COMBO_FOR_CHORD(late, A_L, A_A, A_T);
COMBO_FOR_CHORD(S_late, A_L, A_A, A_T, AT1);
COMBO_FOR_CHORD(home, A_G, A_M, A_E);
COMBO_FOR_CHORD(S_home, A_G, A_M, A_E, AT1);
COMBO_FOR_CHORD(interes, A_I, A_N, A_R);
COMBO_FOR_CHORD(S_interes, A_I, A_N, A_R, AT1);
COMBO_FOR_CHORD(large, A_A, A_R, A_G);
COMBO_FOR_CHORD(S_large, A_A, A_R, A_G, AT1);
COMBO_FOR_CHORD(person, A_P, A_S, A_N);
COMBO_FOR_CHORD(S_person, A_P, A_S, A_N, AT1);
COMBO_FOR_CHORD(end, A_E, A_N, A_D);
COMBO_FOR_CHORD(S_end, A_E, A_N, A_D, AT1);
COMBO_FOR_CHORD(open, A_O, A_P, A_N);
COMBO_FOR_CHORD(S_open, A_O, A_P, A_N, AT1);
COMBO_FOR_CHORD(public, A_P, A_L, A_I);
COMBO_FOR_CHORD(S_public, A_P, A_L, A_I, AT1);
COMBO_FOR_CHORD(follow, A_F, A_O, A_L);
COMBO_FOR_CHORD(S_follow, A_F, A_O, A_L, AT1);
COMBO_FOR_CHORD(during, A_D, A_R, A_N);
COMBO_FOR_CHORD(S_during, A_D, A_R, A_N, AT1);
COMBO_FOR_CHORD(present, A_R, A_N, A_T);
COMBO_FOR_CHORD(S_present, A_R, A_N, A_T, AT1);
COMBO_FOR_CHORD(without, A_I, A_T, A_O);
COMBO_FOR_CHORD(S_without, A_I, A_T, A_O, AT1);
COMBO_FOR_CHORD(again, A_A, A_G, A_I);
COMBO_FOR_CHORD(S_again, A_A, A_G, A_I, AT1);
COMBO_FOR_CHORD(hold, A_H, A_D, AT0);
COMBO_FOR_CHORD(S_hold, A_H, A_D, AT0, AT1);
COMBO_FOR_CHORD(govern, A_G, A_R, A_N);
COMBO_FOR_CHORD(S_govern, A_G, A_R, A_N, AT1);
COMBO_FOR_CHORD(around, A_A, A_R, A_D);
COMBO_FOR_CHORD(S_around, A_A, A_R, A_D, AT1);
COMBO_FOR_CHORD(possibl, A_P, A_S, A_E);
COMBO_FOR_CHORD(S_possibl, A_P, A_S, A_E, AT1);
COMBO_FOR_CHORD(head, A_H, A_E, A_D);
COMBO_FOR_CHORD(S_head, A_H, A_E, A_D, AT1);
COMBO_FOR_CHORD(conside, A_C, A_N, A_D);
COMBO_FOR_CHORD(S_conside, A_C, A_N, A_D, AT1);
COMBO_FOR_CHORD(word, A_W, A_R, A_D);
COMBO_FOR_CHORD(S_word, A_W, A_R, A_D, AT1);
COMBO_FOR_CHORD(program, A_R, A_G, A_M);
COMBO_FOR_CHORD(S_program, A_R, A_G, A_M, AT1);
COMBO_FOR_CHORD(problem, A_L, A_E, A_M);
COMBO_FOR_CHORD(S_problem, A_L, A_E, A_M, AT1);
COMBO_FOR_CHORD(however, A_H, A_E, A_V);
COMBO_FOR_CHORD(S_however, A_H, A_E, A_V, AT1);
COMBO_FOR_CHORD(lead, A_E, A_A, A_D);
COMBO_FOR_CHORD(S_lead, A_E, A_A, A_D, AT1);
COMBO_FOR_CHORD(system, A_S, A_Y, A_T);
COMBO_FOR_CHORD(S_system, A_S, A_Y, A_T, AT1);
COMBO_FOR_CHORD(set, A_S, A_E, A_T);
COMBO_FOR_CHORD(S_set, A_S, A_E, A_T, AT1);
COMBO_FOR_CHORD(order, A_O, A_R, A_D);
COMBO_FOR_CHORD(S_order, A_O, A_R, A_D, AT1);
COMBO_FOR_CHORD(eye, A_E, A_Y, A_X);
COMBO_FOR_CHORD(S_eye, A_E, A_Y, A_X, AT1);
COMBO_FOR_CHORD(plan, A_P, A_L, A_N);
COMBO_FOR_CHORD(S_plan, A_P, A_L, A_N, AT1);
COMBO_FOR_CHORD(run, A_R, A_U, A_N);
COMBO_FOR_CHORD(S_run, A_R, A_U, A_N, AT1);
COMBO_FOR_CHORD(keep, A_E, A_P, AT0);
COMBO_FOR_CHORD(S_keep, A_E, A_P, AT0, AT1);
COMBO_FOR_CHORD(face, A_F, A_A, A_C);
COMBO_FOR_CHORD(S_face, A_F, A_A, A_C, AT1);
COMBO_FOR_CHORD(fact, A_F, A_C, A_T);
COMBO_FOR_CHORD(S_fact, A_F, A_C, A_T, AT1);
COMBO_FOR_CHORD(group, A_G, A_O, A_U);
COMBO_FOR_CHORD(S_group, A_G, A_O, A_U, AT1);
COMBO_FOR_CHORD(play, A_P, A_L, A_Y);
COMBO_FOR_CHORD(S_play, A_P, A_L, A_Y, AT1);
COMBO_FOR_CHORD(stand, A_S, A_N, A_D);
COMBO_FOR_CHORD(S_stand, A_S, A_N, A_D, AT1);
COMBO_FOR_CHORD(increas, A_I, A_N, A_C);
COMBO_FOR_CHORD(S_increas, A_I, A_N, A_C, AT1);
COMBO_FOR_CHORD(early, A_E, A_L, A_Y);
COMBO_FOR_CHORD(S_early, A_E, A_L, A_Y, AT1);
COMBO_FOR_CHORD(course, A_O, A_R, A_S);
COMBO_FOR_CHORD(S_course, A_O, A_R, A_S, AT1);
COMBO_FOR_CHORD(change, A_C, A_H, A_E);
COMBO_FOR_CHORD(S_change, A_C, A_H, A_E, AT1);
COMBO_FOR_CHORD(help, A_H, A_L, A_P);
COMBO_FOR_CHORD(S_help, A_H, A_L, A_P, AT1);
COMBO_FOR_CHORD(line, A_L, A_N, A_E);
COMBO_FOR_CHORD(S_line, A_L, A_N, A_E, AT1);
COMBO_FOR_CHORD(his, A_H, A_I, A_S);
COMBO_FOR_CHORD(S_his, A_H, A_I, A_S, AT1);
COMBO_FOR_CHORD(her, A_H, A_E, A_R);
COMBO_FOR_CHORD(S_her, A_H, A_E, A_R, AT1);
COMBO_FOR_CHORD(an, A_A, A_N, AT0);
COMBO_FOR_CHORD(S_an, A_A, A_N, AT0, AT1);
COMBO_FOR_CHORD(my, A_M, A_Y, AT0);
COMBO_FOR_CHORD(S_my, A_M, A_Y, AT0, AT1);
COMBO_FOR_CHORD(their, A_H, A_I, A_R);
COMBO_FOR_CHORD(S_their, A_H, A_I, A_R, AT1);
COMBO_FOR_CHORD(me, A_M, A_E, AT0);
COMBO_FOR_CHORD(S_me, A_M, A_E, AT0, AT1);
COMBO_FOR_CHORD(him, A_B, A_I, A_M);
COMBO_FOR_CHORD(S_him, A_B, A_I, A_M, AT1);
COMBO_FOR_CHORD(your, A_Y, A_O, A_R);
COMBO_FOR_CHORD(S_your, A_Y, A_O, A_R, AT1);
COMBO_FOR_CHORD(its, A_I, A_T, A_S);
COMBO_FOR_CHORD(S_its, A_I, A_T, A_S, AT1);
COMBO_FOR_CHORD(two, A_T, A_W, A_O);
COMBO_FOR_CHORD(S_two, A_T, A_W, A_O, AT1);
COMBO_FOR_CHORD(our, A_O, A_U, A_R);
COMBO_FOR_CHORD(S_our, A_O, A_U, A_R, AT1);
COMBO_FOR_CHORD(us, A_U, A_S, AT0);
COMBO_FOR_CHORD(S_us, A_U, A_S, AT0, AT1);
COMBO_FOR_CHORD(is, A_I, A_S, AT0);
COMBO_FOR_CHORD(S_is, A_I, A_S, AT0, AT1);
COMBO_FOR_CHORD(was, A_W, A_A, A_S);
COMBO_FOR_CHORD(S_was, A_W, A_A, A_S, AT1);
COMBO_FOR_CHORD(are, A_A, A_R, A_E);
COMBO_FOR_CHORD(S_are, A_A, A_R, A_E, AT1);
COMBO_FOR_CHORD(had, A_H, A_A, A_D);
COMBO_FOR_CHORD(S_had, A_H, A_A, A_D, AT1);
COMBO_FOR_CHORD(were, A_W, A_E, A_R);
COMBO_FOR_CHORD(S_were, A_W, A_E, A_R, AT1);
COMBO_FOR_CHORD(said, A_S, A_A, A_I);
COMBO_FOR_CHORD(S_said, A_S, A_A, A_I, AT1);
COMBO_FOR_CHORD(has, A_H, A_A, A_S);
COMBO_FOR_CHORD(S_has, A_H, A_A, A_S, AT1);
COMBO_FOR_CHORD(sound, A_S, A_U, A_D);
COMBO_FOR_CHORD(S_sound, A_S, A_U, A_D, AT1);
COMBO_FOR_CHORD(water, A_W, A_T, A_R);
COMBO_FOR_CHORD(S_water, A_W, A_T, A_R, AT1);
COMBO_FOR_CHORD(side, A_S, A_I, A_D);
COMBO_FOR_CHORD(S_side, A_S, A_I, A_D, AT1);
COMBO_FOR_CHORD(made, A_M, A_D, A_E);
COMBO_FOR_CHORD(S_made, A_M, A_D, A_E, AT1);
COMBO_FOR_CHORD(live, A_L, A_I, A_V);
COMBO_FOR_CHORD(S_live, A_L, A_I, A_V, AT1);
COMBO_FOR_CHORD(round, A_O, A_U, A_D);
COMBO_FOR_CHORD(S_round, A_O, A_U, A_D, AT1);
COMBO_FOR_CHORD(came, A_C, A_A, A_M);
COMBO_FOR_CHORD(S_came, A_C, A_A, A_M, AT1);
COMBO_FOR_CHORD(every, A_E, A_R, A_Y);
COMBO_FOR_CHORD(S_every, A_E, A_R, A_Y, AT1);
COMBO_FOR_CHORD(name, A_N, A_A, A_E);
COMBO_FOR_CHORD(S_name, A_N, A_A, A_E, AT1);
COMBO_FOR_CHORD(sentenc, A_S, A_E, A_N);
COMBO_FOR_CHORD(S_sentenc, A_S, A_E, A_N, AT1);
COMBO_FOR_CHORD(low, A_L, A_O, A_W);
COMBO_FOR_CHORD(S_low, A_L, A_O, A_W, AT1);
COMBO_FOR_CHORD(differ, A_D, A_F, A_R);
COMBO_FOR_CHORD(S_differ, A_D, A_F, A_R, AT1);
COMBO_FOR_CHORD(cause, A_C, A_A, A_S);
COMBO_FOR_CHORD(S_cause, A_C, A_A, A_S, AT1);
COMBO_FOR_CHORD(boy, A_B, A_O, A_Y);
COMBO_FOR_CHORD(S_boy, A_B, A_O, A_Y, AT1);
COMBO_FOR_CHORD(does, A_D, A_E, A_S);
COMBO_FOR_CHORD(S_does, A_D, A_E, A_S, AT1);
COMBO_FOR_CHORD(air, A_A, A_I, A_R);
COMBO_FOR_CHORD(S_air, A_A, A_I, A_R, AT1);
COMBO_FOR_CHORD(put, A_P, A_U, A_T);
COMBO_FOR_CHORD(S_put, A_P, A_U, A_T, AT1);
COMBO_FOR_CHORD(port, A_P, A_O, A_R);
COMBO_FOR_CHORD(S_port, A_P, A_O, A_R, AT1);
COMBO_FOR_CHORD(spell, A_S, A_P, A_L);
COMBO_FOR_CHORD(S_spell, A_S, A_P, A_L, AT1);
COMBO_FOR_CHORD(land, A_L, A_N, A_D);
COMBO_FOR_CHORD(S_land, A_L, A_N, A_D, AT1);
COMBO_FOR_CHORD(big, A_B, A_I, A_G);
COMBO_FOR_CHORD(S_big, A_B, A_I, A_G, AT1);
COMBO_FOR_CHORD(act, A_A, A_C, A_T);
COMBO_FOR_CHORD(S_act, A_A, A_C, A_T, AT1);
COMBO_FOR_CHORD(why, A_W, A_H, A_Y);
COMBO_FOR_CHORD(S_why, A_W, A_H, A_Y, AT1);
COMBO_FOR_CHORD(men, A_M, A_E, A_N);
COMBO_FOR_CHORD(S_men, A_M, A_E, A_N, AT1);
COMBO_FOR_CHORD(went, A_W, A_N, A_T);
COMBO_FOR_CHORD(S_went, A_W, A_N, A_T, AT1);
COMBO_FOR_CHORD(light, A_L, A_I, A_G);
COMBO_FOR_CHORD(S_light, A_L, A_I, A_G, AT1);
COMBO_FOR_CHORD(kind, A_I, A_N, A_D);
COMBO_FOR_CHORD(S_kind, A_I, A_N, A_D, AT1);
COMBO_FOR_CHORD(picture, A_P, A_I, A_C);
COMBO_FOR_CHORD(S_picture, A_P, A_I, A_C, AT1);
COMBO_FOR_CHORD(try, A_T, A_R, A_Y);
COMBO_FOR_CHORD(S_try, A_T, A_R, A_Y, AT1);
COMBO_FOR_CHORD(animal, A_A, A_N, A_L);
COMBO_FOR_CHORD(S_animal, A_A, A_N, A_L, AT1);
COMBO_FOR_CHORD(mother, A_M, A_T, A_R);
COMBO_FOR_CHORD(S_mother, A_M, A_T, A_R, AT1);
COMBO_FOR_CHORD(build, A_B, A_U, A_L);
COMBO_FOR_CHORD(S_build, A_B, A_U, A_L, AT1);
COMBO_FOR_CHORD(self, A_S, A_L, A_F);
COMBO_FOR_CHORD(S_self, A_S, A_L, A_F, AT1);
COMBO_FOR_CHORD(earth, A_E, A_A, A_H);
COMBO_FOR_CHORD(S_earth, A_E, A_A, A_H, AT1);
COMBO_FOR_CHORD(father, A_F, A_A, A_E);
COMBO_FOR_CHORD(S_father, A_F, A_A, A_E, AT1);
COMBO_FOR_CHORD(page, A_P, A_A, A_E);
COMBO_FOR_CHORD(S_page, A_P, A_A, A_E, AT1);
COMBO_FOR_CHORD(country, A_C, A_U, A_Y);
COMBO_FOR_CHORD(S_country, A_C, A_U, A_Y, AT1);
COMBO_FOR_CHORD(found, A_F, A_U, A_D);
COMBO_FOR_CHORD(S_found, A_F, A_U, A_D, AT1);
COMBO_FOR_CHORD(answer, A_A, A_N, A_S);
COMBO_FOR_CHORD(S_answer, A_A, A_N, A_S, AT1);
COMBO_FOR_CHORD(grow, A_G, A_R, A_W);
COMBO_FOR_CHORD(S_grow, A_G, A_R, A_W, AT1);
COMBO_FOR_CHORD(study, A_T, A_U, A_Y);
COMBO_FOR_CHORD(S_study, A_T, A_U, A_Y, AT1);
COMBO_FOR_CHORD(learn, A_L, A_E, A_R);
COMBO_FOR_CHORD(S_learn, A_L, A_E, A_R, AT1);
COMBO_FOR_CHORD(plant, A_P, A_L, A_T);
COMBO_FOR_CHORD(S_plant, A_P, A_L, A_T, AT1);
COMBO_FOR_CHORD(cover, A_C, A_O, A_V);
COMBO_FOR_CHORD(S_cover, A_C, A_O, A_V, AT1);
COMBO_FOR_CHORD(food, A_F, A_O, A_D);
COMBO_FOR_CHORD(S_food, A_F, A_O, A_D, AT1);
COMBO_FOR_CHORD(sun, A_S, A_U, A_N);
COMBO_FOR_CHORD(S_sun, A_S, A_U, A_N, AT1);
COMBO_FOR_CHORD(four, A_F, A_O, A_U);
COMBO_FOR_CHORD(S_four, A_F, A_O, A_U, AT1);
COMBO_FOR_CHORD(thought, A_T, A_H, A_U);
COMBO_FOR_CHORD(S_thought, A_T, A_H, A_U, AT1);
COMBO_FOR_CHORD(city, A_C, A_T, A_Y);
COMBO_FOR_CHORD(S_city, A_C, A_T, A_Y, AT1);
COMBO_FOR_CHORD(cross, A_C, A_R, A_S);
COMBO_FOR_CHORD(S_cross, A_C, A_R, A_S, AT1);
COMBO_FOR_CHORD(hard, A_H, A_R, A_D);
COMBO_FOR_CHORD(S_hard, A_H, A_R, A_D, AT1);
COMBO_FOR_CHORD(far, A_F, A_A, A_R);
COMBO_FOR_CHORD(S_far, A_F, A_A, A_R, AT1);
COMBO_FOR_CHORD(sea, A_S, A_E, A_A);
COMBO_FOR_CHORD(S_sea, A_S, A_E, A_A, AT1);
COMBO_FOR_CHORD(draw, A_D, A_A, A_W);
COMBO_FOR_CHORD(S_draw, A_D, A_A, A_W, AT1);
COMBO_FOR_CHORD(left, A_L, A_F, A_T);
COMBO_FOR_CHORD(S_left, A_L, A_F, A_T, AT1);
COMBO_FOR_CHORD(press, A_P, A_R, A_S);
COMBO_FOR_CHORD(S_press, A_P, A_R, A_S, AT1);
COMBO_FOR_CHORD(close, A_C, A_O, A_S);
COMBO_FOR_CHORD(S_close, A_C, A_O, A_S, AT1);
COMBO_FOR_CHORD(night, A_N, A_G, A_H);
COMBO_FOR_CHORD(S_night, A_N, A_G, A_H, AT1);
COMBO_FOR_CHORD(north, A_N, A_R, A_H);
COMBO_FOR_CHORD(S_north, A_N, A_R, A_H, AT1);
COMBO_FOR_CHORD(togethe, A_O, A_G, A_H);
COMBO_FOR_CHORD(S_togethe, A_O, A_G, A_H, AT1);
COMBO_FOR_CHORD(next, A_E, A_X, A_T);
COMBO_FOR_CHORD(S_next, A_E, A_X, A_T, AT1);
COMBO_FOR_CHORD(white, A_W, A_I, A_E);
COMBO_FOR_CHORD(S_white, A_W, A_I, A_E, AT1);
COMBO_FOR_CHORD(childre, A_H, A_I, A_D);
COMBO_FOR_CHORD(S_childre, A_H, A_I, A_D, AT1);
COMBO_FOR_CHORD(got, A_G, A_O, A_T);
COMBO_FOR_CHORD(S_got, A_G, A_O, A_T, AT1);
COMBO_FOR_CHORD(walk, A_W, A_A, AT0);
COMBO_FOR_CHORD(S_walk, A_W, A_A, AT0, AT1);
COMBO_FOR_CHORD(example, A_M, A_P, A_L);
COMBO_FOR_CHORD(S_example, A_M, A_P, A_L, AT1);
COMBO_FOR_CHORD(always, A_L, A_W, A_Y);
COMBO_FOR_CHORD(S_always, A_L, A_W, A_Y, AT1);
COMBO_FOR_CHORD(music, A_M, A_S, A_C);
COMBO_FOR_CHORD(S_music, A_M, A_S, A_C, AT1);
COMBO_FOR_CHORD(mark, A_M, A_R, A_K);
COMBO_FOR_CHORD(S_mark, A_M, A_R, A_K, AT1);
COMBO_FOR_CHORD(often, A_O, A_T, A_E);
COMBO_FOR_CHORD(S_often, A_O, A_T, A_E, AT1);
COMBO_FOR_CHORD(letter, A_L, A_T, A_R);
COMBO_FOR_CHORD(S_letter, A_L, A_T, A_R, AT1);
COMBO_FOR_CHORD(until, A_N, A_T, A_L);
COMBO_FOR_CHORD(S_until, A_N, A_T, A_L, AT1);
COMBO_FOR_CHORD(mile, A_M, A_I, A_E);
COMBO_FOR_CHORD(S_mile, A_M, A_I, A_E, AT1);
COMBO_FOR_CHORD(river, A_R, A_I, A_V);
COMBO_FOR_CHORD(S_river, A_R, A_I, A_V, AT1);
COMBO_FOR_CHORD(car, A_C, A_A, A_R);
COMBO_FOR_CHORD(S_car, A_C, A_A, A_R, AT1);
COMBO_FOR_CHORD(feet, A_F, A_E, A_T);
COMBO_FOR_CHORD(S_feet, A_F, A_E, A_T, AT1);
COMBO_FOR_CHORD(care, A_C, A_R, A_E);
COMBO_FOR_CHORD(S_care, A_C, A_R, A_E, AT1);
COMBO_FOR_CHORD(second, A_S, A_E, A_C);
COMBO_FOR_CHORD(S_second, A_S, A_E, A_C, AT1);
COMBO_FOR_CHORD(carry, A_C, A_A, A_Y);
COMBO_FOR_CHORD(S_carry, A_C, A_A, A_Y, AT1);
COMBO_FOR_CHORD(science, A_S, A_C, A_I);
COMBO_FOR_CHORD(S_science, A_S, A_C, A_I, AT1);
COMBO_FOR_CHORD(eat, A_E, A_A, A_T);
COMBO_FOR_CHORD(S_eat, A_E, A_A, A_T, AT1);
COMBO_FOR_CHORD(friend, A_R, A_I, A_D);
COMBO_FOR_CHORD(S_friend, A_R, A_I, A_D, AT1);
COMBO_FOR_CHORD(began, A_B, A_G, A_N);
COMBO_FOR_CHORD(S_began, A_B, A_G, A_N, AT1);
COMBO_FOR_CHORD(idea, A_I, A_D, A_A);
COMBO_FOR_CHORD(S_idea, A_I, A_D, A_A, AT1);
COMBO_FOR_CHORD(fish, A_F, A_I, A_S);
COMBO_FOR_CHORD(S_fish, A_F, A_I, A_S, AT1);
COMBO_FOR_CHORD(mountai, A_O, A_A, A_T);
COMBO_FOR_CHORD(S_mountai, A_O, A_A, A_T, AT1);
COMBO_FOR_CHORD(stop, A_S, A_T, A_P);
COMBO_FOR_CHORD(S_stop, A_S, A_T, A_P, AT1);
COMBO_FOR_CHORD(once, A_N, A_C, A_E);
COMBO_FOR_CHORD(S_once, A_N, A_C, A_E, AT1);
COMBO_FOR_CHORD(base, A_B, A_A, A_S);
COMBO_FOR_CHORD(S_base, A_B, A_A, A_S, AT1);
COMBO_FOR_CHORD(horse, A_H, A_R, A_S);
COMBO_FOR_CHORD(S_horse, A_H, A_R, A_S, AT1);
COMBO_FOR_CHORD(cut, A_C, A_U, A_T);
COMBO_FOR_CHORD(S_cut, A_C, A_U, A_T, AT1);
COMBO_FOR_CHORD(sure, A_S, A_U, A_R);
COMBO_FOR_CHORD(S_sure, A_S, A_U, A_R, AT1);
COMBO_FOR_CHORD(watch, A_W, A_A, A_H);
COMBO_FOR_CHORD(S_watch, A_W, A_A, A_H, AT1);
COMBO_FOR_CHORD(color, A_C, A_O, A_R);
COMBO_FOR_CHORD(S_color, A_C, A_O, A_R, AT1);
COMBO_FOR_CHORD(wood, A_W, A_O, A_D);
COMBO_FOR_CHORD(S_wood, A_W, A_O, A_D, AT1);
COMBO_FOR_CHORD(main, A_M, A_I, A_N);
COMBO_FOR_CHORD(S_main, A_M, A_I, A_N, AT1);
COMBO_FOR_CHORD(enough, A_N, A_O, A_G);
COMBO_FOR_CHORD(S_enough, A_N, A_O, A_G, AT1);
COMBO_FOR_CHORD(plain, A_P, A_A, A_I);
COMBO_FOR_CHORD(S_plain, A_P, A_A, A_I, AT1);
COMBO_FOR_CHORD(girl, A_G, A_I, A_R);
COMBO_FOR_CHORD(S_girl, A_G, A_I, A_R, AT1);
COMBO_FOR_CHORD(usual, A_U, A_S, A_L);
COMBO_FOR_CHORD(S_usual, A_U, A_S, A_L, AT1);
COMBO_FOR_CHORD(young, A_Y, A_O, A_G);
COMBO_FOR_CHORD(S_young, A_Y, A_O, A_G, AT1);
COMBO_FOR_CHORD(ready, A_E, A_D, A_Y);
COMBO_FOR_CHORD(S_ready, A_E, A_D, A_Y, AT1);
COMBO_FOR_CHORD(above, A_A, A_B, A_V);
COMBO_FOR_CHORD(S_above, A_A, A_B, A_V, AT1);
COMBO_FOR_CHORD(red, A_R, A_E, A_D);
COMBO_FOR_CHORD(S_red, A_R, A_E, A_D, AT1);
COMBO_FOR_CHORD(list, A_L, A_I, A_S);
COMBO_FOR_CHORD(S_list, A_L, A_I, A_S, AT1);
COMBO_FOR_CHORD(though, A_H, A_U, A_G);
COMBO_FOR_CHORD(S_though, A_H, A_U, A_G, AT1);
COMBO_FOR_CHORD(bird, A_B, A_I, A_R);
COMBO_FOR_CHORD(S_bird, A_B, A_I, A_R, AT1);
COMBO_FOR_CHORD(body, A_O, A_D, A_Y);
COMBO_FOR_CHORD(S_body, A_O, A_D, A_Y, AT1);
COMBO_FOR_CHORD(family, A_F, A_A, A_Y);
COMBO_FOR_CHORD(S_family, A_F, A_A, A_Y, AT1);
COMBO_FOR_CHORD(direct, A_D, A_R, A_C);
COMBO_FOR_CHORD(S_direct, A_D, A_R, A_C, AT1);
COMBO_FOR_CHORD(pose, A_P, A_O, A_S);
COMBO_FOR_CHORD(S_pose, A_P, A_O, A_S, AT1);
COMBO_FOR_CHORD(song, A_S, A_N, A_G);
COMBO_FOR_CHORD(S_song, A_S, A_N, A_G, AT1);
COMBO_FOR_CHORD(measure, A_A, A_S, A_U);
COMBO_FOR_CHORD(S_measure, A_A, A_S, A_U, AT1);
COMBO_FOR_CHORD(product, A_R, A_D, A_U);
COMBO_FOR_CHORD(S_product, A_R, A_D, A_U, AT1);
COMBO_FOR_CHORD(black, A_B, A_L, A_C);
COMBO_FOR_CHORD(S_black, A_B, A_L, A_C, AT1);
COMBO_FOR_CHORD(short, A_H, A_O, A_R);
COMBO_FOR_CHORD(S_short, A_H, A_O, A_R, AT1);
COMBO_FOR_CHORD(numeral, A_U, A_M, A_A);
COMBO_FOR_CHORD(S_numeral, A_U, A_M, A_A, AT1);
COMBO_FOR_CHORD(class, A_C, A_L, A_S);
COMBO_FOR_CHORD(S_class, A_C, A_L, A_S, AT1);
COMBO_FOR_CHORD(wind, A_W, A_I, A_D);
COMBO_FOR_CHORD(S_wind, A_W, A_I, A_D, AT1);
COMBO_FOR_CHORD(questio, A_Q, A_E, A_N);
COMBO_FOR_CHORD(S_questio, A_Q, A_E, A_N, AT1);
COMBO_FOR_CHORD(happen, A_H, A_A, A_P);
COMBO_FOR_CHORD(S_happen, A_H, A_A, A_P, AT1);
COMBO_FOR_CHORD(complet, A_C, A_M, A_T);
COMBO_FOR_CHORD(S_complet, A_C, A_M, A_T, AT1);
COMBO_FOR_CHORD(ship, A_S, A_H, A_P);
COMBO_FOR_CHORD(S_ship, A_S, A_H, A_P, AT1);
COMBO_FOR_CHORD(half, A_H, A_A, A_L);
COMBO_FOR_CHORD(S_half, A_H, A_A, A_L, AT1);
COMBO_FOR_CHORD(rock, A_R, A_C, A_K);
COMBO_FOR_CHORD(S_rock, A_R, A_C, A_K, AT1);
COMBO_FOR_CHORD(fire, A_F, A_I, A_R);
COMBO_FOR_CHORD(S_fire, A_F, A_I, A_R, AT1);
COMBO_FOR_CHORD(south, A_S, A_U, A_H);
COMBO_FOR_CHORD(S_south, A_S, A_U, A_H, AT1);
COMBO_FOR_CHORD(told, A_T, A_L, A_D);
COMBO_FOR_CHORD(S_told, A_T, A_L, A_D, AT1);
COMBO_FOR_CHORD(knew, A_K, A_N, A_E);
COMBO_FOR_CHORD(S_knew, A_K, A_N, A_E, AT1);
COMBO_FOR_CHORD(pass, A_P, A_A, A_S);
COMBO_FOR_CHORD(S_pass, A_P, A_A, A_S, AT1);
COMBO_FOR_CHORD(top, A_T, A_O, A_P);
COMBO_FOR_CHORD(S_top, A_T, A_O, A_P, AT1);
COMBO_FOR_CHORD(whole, A_W, A_H, A_L);
COMBO_FOR_CHORD(S_whole, A_W, A_H, A_L, AT1);
COMBO_FOR_CHORD(space, A_S, A_P, A_C);
COMBO_FOR_CHORD(S_space, A_S, A_P, A_C, AT1);
COMBO_FOR_CHORD(best, A_B, A_E, A_S);
COMBO_FOR_CHORD(S_best, A_B, A_E, A_S, AT1);
COMBO_FOR_CHORD(hour, A_H, A_U, A_R);
COMBO_FOR_CHORD(S_hour, A_H, A_U, A_R, AT1);
COMBO_FOR_CHORD(better, A_B, A_E, A_R);
COMBO_FOR_CHORD(S_better, A_B, A_E, A_R, AT1);
COMBO_FOR_CHORD(true, A_T, A_R, A_U);
COMBO_FOR_CHORD(S_true, A_T, A_R, A_U, AT1);
COMBO_FOR_CHORD(hundred, A_H, A_U, A_E);
COMBO_FOR_CHORD(S_hundred, A_H, A_U, A_E, AT1);
COMBO_FOR_CHORD(five, A_F, A_I, A_V);
COMBO_FOR_CHORD(S_five, A_F, A_I, A_V, AT1);
COMBO_FOR_CHORD(six, A_S, A_I, A_X);
COMBO_FOR_CHORD(S_six, A_S, A_I, A_X, AT1);
COMBO_FOR_CHORD(war, A_W, A_A, A_R);
COMBO_FOR_CHORD(S_war, A_W, A_A, A_R, AT1);
COMBO_FOR_CHORD(lay, A_L, A_A, A_Y);
COMBO_FOR_CHORD(S_lay, A_L, A_A, A_Y, AT1);
COMBO_FOR_CHORD(map, A_M, A_A, A_P);
COMBO_FOR_CHORD(S_map, A_M, A_A, A_P, AT1);
COMBO_FOR_CHORD(fly, A_F, A_L, A_Y);
COMBO_FOR_CHORD(S_fly, A_F, A_L, A_Y, AT1);
COMBO_FOR_CHORD(fall, A_F, A_A, A_L);
COMBO_FOR_CHORD(S_fall, A_F, A_A, A_L, AT1);
COMBO_FOR_CHORD(cry, A_C, A_R, A_Y);
COMBO_FOR_CHORD(S_cry, A_C, A_R, A_Y, AT1);
COMBO_FOR_CHORD(box, A_B, A_O, A_X);
COMBO_FOR_CHORD(S_box, A_B, A_O, A_X, AT1);
COMBO_FOR_CHORD(noun, A_N, A_O, A_U);
COMBO_FOR_CHORD(S_noun, A_N, A_O, A_U, AT1);
COMBO_FOR_CHORD(week, A_W, A_E, A_K);
COMBO_FOR_CHORD(S_week, A_W, A_E, A_K, AT1);
COMBO_FOR_CHORD(oh, A_O, A_H, AT0);
COMBO_FOR_CHORD(S_oh, A_O, A_H, AT0, AT1);
COMBO_FOR_CHORD(free, A_F, A_R, A_E);
COMBO_FOR_CHORD(S_free, A_F, A_R, A_E, AT1);
COMBO_FOR_CHORD(dry, A_D, A_R, A_Y);
COMBO_FOR_CHORD(S_dry, A_D, A_R, A_Y, AT1);
COMBO_FOR_CHORD(ago, A_A, A_G, A_O);
COMBO_FOR_CHORD(S_ago, A_A, A_G, A_O, AT1);
COMBO_FOR_CHORD(ran, A_R, A_A, A_N);
COMBO_FOR_CHORD(S_ran, A_R, A_A, A_N, AT1);
COMBO_FOR_CHORD(hot, A_H, A_O, A_T);
COMBO_FOR_CHORD(S_hot, A_H, A_O, A_T, AT1);
COMBO_FOR_CHORD(ball, A_B, A_A, A_L);
COMBO_FOR_CHORD(S_ball, A_B, A_A, A_L, AT1);
COMBO_FOR_CHORD(yet, A_Y, A_E, A_T);
COMBO_FOR_CHORD(S_yet, A_Y, A_E, A_T, AT1);
COMBO_FOR_CHORD(am, A_A, A_M, AT0);
COMBO_FOR_CHORD(S_am, A_A, A_M, AT0, AT1);
COMBO_FOR_CHORD(arm, A_A, A_R, A_M);
COMBO_FOR_CHORD(S_arm, A_A, A_R, A_M, AT1);
COMBO_FOR_CHORD(ice, A_I, A_C, A_E);
COMBO_FOR_CHORD(S_ice, A_I, A_C, A_E, AT1);
COMBO_FOR_CHORD(matter, A_M, A_A, A_T);
COMBO_FOR_CHORD(S_matter, A_M, A_A, A_T, AT1);
COMBO_FOR_CHORD(art, A_A, A_R, A_T);
COMBO_FOR_CHORD(S_art, A_A, A_R, A_T, AT1);
COMBO_FOR_CHORD(cell, A_C, A_E, A_L);
COMBO_FOR_CHORD(S_cell, A_C, A_E, A_L, AT1);
COMBO_FOR_CHORD(summer, A_S, A_M, A_R);
COMBO_FOR_CHORD(S_summer, A_S, A_M, A_R, AT1);
COMBO_FOR_CHORD(leg, A_L, A_E, A_G);
COMBO_FOR_CHORD(S_leg, A_L, A_E, A_G, AT1);
COMBO_FOR_CHORD(joy, A_J, A_O, A_Y);
COMBO_FOR_CHORD(S_joy, A_J, A_O, A_Y, AT1);
COMBO_FOR_CHORD(job, A_J, A_O, A_B);
COMBO_FOR_CHORD(S_job, A_J, A_O, A_B, AT1);
COMBO_FOR_CHORD(gas, A_G, A_A, A_S);
COMBO_FOR_CHORD(S_gas, A_G, A_A, A_S, AT1);
COMBO_FOR_CHORD(buy, A_B, A_U, A_Y);
COMBO_FOR_CHORD(S_buy, A_B, A_U, A_Y, AT1);
COMBO_FOR_CHORD(cook, A_C, A_O, A_K);
COMBO_FOR_CHORD(S_cook, A_C, A_O, A_K, AT1);
COMBO_FOR_CHORD(hill, A_H, A_I, A_L);
COMBO_FOR_CHORD(S_hill, A_H, A_I, A_L, AT1);
COMBO_FOR_CHORD(law, A_L, A_A, A_W);
COMBO_FOR_CHORD(S_law, A_L, A_A, A_W, AT1);
COMBO_FOR_CHORD(lie, A_L, A_I, A_E);
COMBO_FOR_CHORD(S_lie, A_L, A_I, A_E, AT1);
COMBO_FOR_CHORD(son, A_S, A_O, A_N);
COMBO_FOR_CHORD(S_son, A_S, A_O, A_N, AT1);
COMBO_FOR_CHORD(pay, A_P, A_A, A_Y);
COMBO_FOR_CHORD(S_pay, A_P, A_A, A_Y, AT1);
COMBO_FOR_CHORD(age, A_A, A_G, A_E);
COMBO_FOR_CHORD(S_age, A_A, A_G, A_E, AT1);
COMBO_FOR_CHORD(cool, A_C, A_O, A_L);
COMBO_FOR_CHORD(S_cool, A_C, A_O, A_L, AT1);
COMBO_FOR_CHORD(lot, A_L, A_O, A_T);
COMBO_FOR_CHORD(S_lot, A_L, A_O, A_T, AT1);
COMBO_FOR_CHORD(key, A_K, A_E, A_Y);
COMBO_FOR_CHORD(S_key, A_K, A_E, A_Y, AT1);
COMBO_FOR_CHORD(row, A_R, A_O, A_W);
COMBO_FOR_CHORD(S_row, A_R, A_O, A_W, AT1);
COMBO_FOR_CHORD(die, A_D, A_I, A_E);
COMBO_FOR_CHORD(S_die, A_D, A_I, A_E, AT1);
COMBO_FOR_CHORD(oil, A_O, A_I, A_L);
COMBO_FOR_CHORD(S_oil, A_O, A_I, A_L, AT1);
COMBO_FOR_CHORD(fit, A_F, A_I, A_T);
COMBO_FOR_CHORD(S_fit, A_F, A_I, A_T, AT1);
COMBO_FOR_CHORD(hit, A_H, A_I, A_T);
COMBO_FOR_CHORD(S_hit, A_H, A_I, A_T, AT1);
COMBO_FOR_CHORD(rub, A_R, A_U, A_B);
COMBO_FOR_CHORD(S_rub, A_R, A_U, A_B, AT1);
COMBO_FOR_CHORD(tie, A_T, A_I, A_E);
COMBO_FOR_CHORD(S_tie, A_T, A_I, A_E, AT1);
COMBO_FOR_CHORD(gun, A_G, A_U, A_N);
COMBO_FOR_CHORD(S_gun, A_G, A_U, A_N, AT1);
COMBO_FOR_CHORD(nine, A_N, A_I, A_E);
COMBO_FOR_CHORD(S_nine, A_N, A_I, A_E, AT1);
COMBO_FOR_CHORD(thank, A_H, A_A, A_K);
COMBO_FOR_CHORD(S_thank, A_H, A_A, A_K, AT1);
COMBO_FOR_CHORD(experie, A_E, A_X, A_P);
COMBO_FOR_CHORD(S_experie, A_E, A_X, A_P, AT1);
COMBO_FOR_CHORD(led, A_L, A_E, A_D);
COMBO_FOR_CHORD(S_led, A_L, A_E, A_D, AT1);
COMBO_FOR_CHORD(win, A_W, A_I, A_N);
COMBO_FOR_CHORD(S_win, A_W, A_I, A_N, AT1);
COMBO_FOR_CHORD(feed, A_F, A_E, A_D);
COMBO_FOR_CHORD(S_feed, A_F, A_E, A_D, AT1);
COMBO_FOR_CHORD(nor, A_N, A_O, A_R);
COMBO_FOR_CHORD(S_nor, A_N, A_O, A_R, AT1);
COMBO_FOR_CHORD(fat, A_F, A_A, A_T);
COMBO_FOR_CHORD(S_fat, A_F, A_A, A_T, AT1);
COMBO_FOR_CHORD(bar, A_B, A_A, A_R);
COMBO_FOR_CHORD(S_bar, A_B, A_A, A_R, AT1);
COMBO_FOR_CHORD(log, A_L, A_O, A_G);
COMBO_FOR_CHORD(S_log, A_L, A_O, A_G, AT1);
COMBO_FOR_CHORD(hey, A_H, A_E, A_Y);
COMBO_FOR_CHORD(S_hey, A_H, A_E, A_Y, AT1);
COMBO_FOR_CHORD(return, A_R, A_E, A_T);
COMBO_FOR_CHORD(S_return, A_R, A_E, A_T, AT1);
COMBO_FOR_CHORD(probabl, A_P, A_B, A_L, A_Y);
COMBO_FOR_CHORD(S_probabl, A_P, A_B, A_L, A_Y, AT1);
COMBO_FOR_CHORD(thanks, A_T, A_N, A_S);
COMBO_FOR_CHORD(S_thanks, A_T, A_N, A_S, AT1);
COMBO_FOR_CHORD(i_ve, A_I, A_V, A_E);
COMBO_FOR_CHORD(per, A_P, A_E, A_R);
COMBO_FOR_CHORD(S_per, A_P, A_E, A_R, AT1);
COMBO_FOR_CHORD(null, A_N, A_U, A_L);
COMBO_FOR_CHORD(S_null, A_N, A_U, A_L, AT1);
COMBO_FOR_CHORD(nil, A_N, A_I, A_L);
COMBO_FOR_CHORD(S_nil, A_N, A_I, A_L, AT1);
COMBO_FOR_CHORD(array, A_A, A_R, A_Y);
COMBO_FOR_CHORD(S_array, A_A, A_R, A_Y, AT1);
COMBO_FOR_CHORD(sort, A_S, A_R, A_T);
COMBO_FOR_CHORD(S_sort, A_S, A_R, A_T, AT1);
COMBO_FOR_CHORD(in_the, A_I, A_N, A_T, A_E);
COMBO_FOR_CHORD(S_in_the, A_I, A_N, A_T, A_E, AT1);
COMBO_FOR_CHORD(of_the, A_O, A_T, A_E, AT0);
COMBO_FOR_CHORD(S_of_the, A_O, A_T, A_E, AT0, AT1);
COMBO_FOR_CHORD(to_be, A_O, A_B, A_E, AT0);
COMBO_FOR_CHORD(S_to_be, A_O, A_B, A_E, AT0, AT1);
COMBO_FOR_CHORD(to_the, A_T, A_H, A_E, AT0);
COMBO_FOR_CHORD(S_to_the, A_T, A_H, A_E, AT0, AT1);
COMBO_FOR_CHORD(and_the, A_A, A_N, A_T, A_H);
COMBO_FOR_CHORD(S_and_the, A_A, A_N, A_T, A_H, AT1);
COMBO_FOR_CHORD(and_i, A_A, A_N, A_D, A_I);
COMBO_FOR_CHORD(S_and_i, A_A, A_N, A_D, A_I, AT1);
COMBO_FOR_CHORD(on_the, A_O, A_N, A_H, A_E);
COMBO_FOR_CHORD(S_on_the, A_O, A_N, A_H, A_E, AT1);
COMBO_FOR_CHORD(it_is, A_I, A_T, A_S, AT0);
COMBO_FOR_CHORD(S_it_is, A_I, A_T, A_S, AT0, AT1);
COMBO_FOR_CHORD(if_you, A_F, A_Y, A_O, A_U);
COMBO_FOR_CHORD(S_if_you, A_F, A_Y, A_O, A_U, AT1);
COMBO_FOR_CHORD(the_wor, A_T, A_H, A_E, A_W);
COMBO_FOR_CHORD(S_the_wor, A_T, A_H, A_E, A_W, AT1);
COMBO_FOR_CHORD(in_a, A_I, A_N, A_A, AT0);
COMBO_FOR_CHORD(S_in_a, A_I, A_N, A_A, AT0, AT1);
COMBO_FOR_CHORD(the_qui, A_B, A_Q, A_X, A_q);
COMBO_FOR_CHORD(S_the_qui, A_B, A_Q, A_X, A_q, AT1);
COMBO_FOR_CHORD(elberet, A_E, A_L, A_B, A_H);
COMBO_FOR_CHORD(http_, A_H, A_T, A_P);
COMBO_FOR_CHORD(https_, A_H, A_T, A_P, A_S);
COMBO_FOR_CHORD(select_, A_S, A_T, A_F, A_R);
COMBO_FOR_CHORD(S_select_, A_S, A_T, A_F, A_R, AT1);

#define CHORD_COMBOS \
  CHORD_COMBO(delete_), \
  CHORD_COMBO(left_cl), \
  CHORD_COMBO(right_c), \
  CHORD_COMBO(oneshot), \
  CHORD_COMBO(excl), \
  CHORD_COMBO(qmark), \
  CHORD_COMBO(colon), \
  CHORD_COMBO(semi), \
  CHORD_COMBO(cent), \
  CHORD_COMBO(pound), \
  CHORD_COMBO(yen), \
  CHORD_COMBO(euro), \
  CHORD_COMBO(mid_ell), \
  CHORD_COMBO(bullet), \
  CHORD_COMBO(degrees), \
  CHORD_COMBO(infinit), \
  CHORD_COMBO(lambda), \
  CHORD_COMBO(interro), \
  CHORD_COMBO(ballot_), \
  CHORD_COMBO(checkma), \
  CHORD_COMBO(left_ar), \
  CHORD_COMBO(down_ar), \
  CHORD_COMBO(up_arro), \
  CHORD_COMBO(right_a), \
  CHORD_COMBO(_ing), \
  CHORD_COMBO(_n_t), \
  CHORD_COMBO(_ve), \
  CHORD_COMBO(_re), \
  CHORD_COMBO(the), \
  CHORD_COMBO(S_the), \
  CHORD_COMBO(be), \
  CHORD_COMBO(S_be), \
  CHORD_COMBO(of), \
  CHORD_COMBO(S_of), \
  CHORD_COMBO(and), \
  CHORD_COMBO(S_and), \
  CHORD_COMBO(a), \
  CHORD_COMBO(S_a), \
  CHORD_COMBO(a1), \
  CHORD_COMBO(to), \
  CHORD_COMBO(S_to), \
  CHORD_COMBO(in), \
  CHORD_COMBO(S_in), \
  CHORD_COMBO(he), \
  CHORD_COMBO(S_he), \
  CHORD_COMBO(have), \
  CHORD_COMBO(S_have), \
  CHORD_COMBO(it), \
  CHORD_COMBO(S_it), \
  CHORD_COMBO(that), \
  CHORD_COMBO(S_that), \
  CHORD_COMBO(for), \
  CHORD_COMBO(S_for), \
  CHORD_COMBO(they), \
  CHORD_COMBO(S_they), \
  CHORD_COMBO(i), \
  CHORD_COMBO(with), \
  CHORD_COMBO(S_with), \
  CHORD_COMBO(as), \
  CHORD_COMBO(S_as), \
  CHORD_COMBO(not), \
  CHORD_COMBO(S_not), \
  CHORD_COMBO(on), \
  CHORD_COMBO(S_on), \
  CHORD_COMBO(she), \
  CHORD_COMBO(S_she), \
  CHORD_COMBO(at), \
  CHORD_COMBO(S_at), \
  CHORD_COMBO(by), \
  CHORD_COMBO(S_by), \
  CHORD_COMBO(this), \
  CHORD_COMBO(S_this), \
  CHORD_COMBO(we), \
  CHORD_COMBO(S_we), \
  CHORD_COMBO(you), \
  CHORD_COMBO(S_you), \
  CHORD_COMBO(do), \
  CHORD_COMBO(S_do), \
  CHORD_COMBO(but), \
  CHORD_COMBO(S_but), \
  CHORD_COMBO(from), \
  CHORD_COMBO(S_from), \
  CHORD_COMBO(or), \
  CHORD_COMBO(S_or), \
  CHORD_COMBO(which), \
  CHORD_COMBO(S_which), \
  CHORD_COMBO(one), \
  CHORD_COMBO(S_one), \
  CHORD_COMBO(would), \
  CHORD_COMBO(S_would), \
  CHORD_COMBO(all), \
  CHORD_COMBO(S_all), \
  CHORD_COMBO(will), \
  CHORD_COMBO(S_will), \
  CHORD_COMBO(there), \
  CHORD_COMBO(S_there), \
  CHORD_COMBO(say), \
  CHORD_COMBO(S_say), \
  CHORD_COMBO(who), \
  CHORD_COMBO(S_who), \
  CHORD_COMBO(make), \
  CHORD_COMBO(S_make), \
  CHORD_COMBO(when), \
  CHORD_COMBO(S_when), \
  CHORD_COMBO(can), \
  CHORD_COMBO(S_can), \
  CHORD_COMBO(more), \
  CHORD_COMBO(S_more), \
  CHORD_COMBO(if), \
  CHORD_COMBO(S_if), \
  CHORD_COMBO(no), \
  CHORD_COMBO(S_no), \
  CHORD_COMBO(man), \
  CHORD_COMBO(S_man), \
  CHORD_COMBO(out), \
  CHORD_COMBO(S_out), \
  CHORD_COMBO(other), \
  CHORD_COMBO(S_other), \
  CHORD_COMBO(so), \
  CHORD_COMBO(S_so), \
  CHORD_COMBO(what), \
  CHORD_COMBO(S_what), \
  CHORD_COMBO(time), \
  CHORD_COMBO(S_time), \
  CHORD_COMBO(up), \
  CHORD_COMBO(S_up), \
  CHORD_COMBO(go), \
  CHORD_COMBO(S_go), \
  CHORD_COMBO(about), \
  CHORD_COMBO(S_about), \
  CHORD_COMBO(than), \
  CHORD_COMBO(S_than), \
  CHORD_COMBO(into), \
  CHORD_COMBO(S_into), \
  CHORD_COMBO(could), \
  CHORD_COMBO(S_could), \
  CHORD_COMBO(state), \
  CHORD_COMBO(S_state), \
  CHORD_COMBO(only), \
  CHORD_COMBO(S_only), \
  CHORD_COMBO(new), \
  CHORD_COMBO(S_new), \
  CHORD_COMBO(year), \
  CHORD_COMBO(S_year), \
  CHORD_COMBO(some), \
  CHORD_COMBO(S_some), \
  CHORD_COMBO(take), \
  CHORD_COMBO(S_take), \
  CHORD_COMBO(come), \
  CHORD_COMBO(S_come), \
  CHORD_COMBO(these), \
  CHORD_COMBO(S_these), \
  CHORD_COMBO(know), \
  CHORD_COMBO(S_know), \
  CHORD_COMBO(see), \
  CHORD_COMBO(S_see), \
  CHORD_COMBO(use), \
  CHORD_COMBO(S_use), \
  CHORD_COMBO(get), \
  CHORD_COMBO(S_get), \
  CHORD_COMBO(like), \
  CHORD_COMBO(S_like), \
  CHORD_COMBO(then), \
  CHORD_COMBO(S_then), \
  CHORD_COMBO(first), \
  CHORD_COMBO(S_first), \
  CHORD_COMBO(any), \
  CHORD_COMBO(S_any), \
  CHORD_COMBO(work), \
  CHORD_COMBO(S_work), \
  CHORD_COMBO(now), \
  CHORD_COMBO(S_now), \
  CHORD_COMBO(may), \
  CHORD_COMBO(S_may), \
  CHORD_COMBO(such), \
  CHORD_COMBO(S_such), \
  CHORD_COMBO(give), \
  CHORD_COMBO(S_give), \
  CHORD_COMBO(over), \
  CHORD_COMBO(S_over), \
  CHORD_COMBO(think), \
  CHORD_COMBO(S_think), \
  CHORD_COMBO(most), \
  CHORD_COMBO(S_most), \
  CHORD_COMBO(even), \
  CHORD_COMBO(S_even), \
  CHORD_COMBO(find), \
  CHORD_COMBO(S_find), \
  CHORD_COMBO(day), \
  CHORD_COMBO(S_day), \
  CHORD_COMBO(also), \
  CHORD_COMBO(S_also), \
  CHORD_COMBO(after), \
  CHORD_COMBO(S_after), \
  CHORD_COMBO(way), \
  CHORD_COMBO(S_way), \
  CHORD_COMBO(many), \
  CHORD_COMBO(S_many), \
  CHORD_COMBO(must), \
  CHORD_COMBO(S_must), \
  CHORD_COMBO(look), \
  CHORD_COMBO(S_look), \
  CHORD_COMBO(before), \
  CHORD_COMBO(S_before), \
  CHORD_COMBO(great), \
  CHORD_COMBO(S_great), \
  CHORD_COMBO(back), \
  CHORD_COMBO(S_back), \
  CHORD_COMBO(through), \
  CHORD_COMBO(S_through), \
  CHORD_COMBO(long), \
  CHORD_COMBO(S_long), \
  CHORD_COMBO(where), \
  CHORD_COMBO(S_where), \
  CHORD_COMBO(much), \
  CHORD_COMBO(S_much), \
  CHORD_COMBO(should), \
  CHORD_COMBO(S_should), \
  CHORD_COMBO(well), \
  CHORD_COMBO(S_well), \
  CHORD_COMBO(people), \
  CHORD_COMBO(S_people), \
  CHORD_COMBO(down), \
  CHORD_COMBO(S_down), \
  CHORD_COMBO(own), \
  CHORD_COMBO(S_own), \
  CHORD_COMBO(just), \
  CHORD_COMBO(S_just), \
  CHORD_COMBO(because), \
  CHORD_COMBO(S_because), \
  CHORD_COMBO(good), \
  CHORD_COMBO(S_good), \
  CHORD_COMBO(each), \
  CHORD_COMBO(S_each), \
  CHORD_COMBO(those), \
  CHORD_COMBO(S_those), \
  CHORD_COMBO(feel), \
  CHORD_COMBO(S_feel), \
  CHORD_COMBO(seem), \
  CHORD_COMBO(S_seem), \
  CHORD_COMBO(how), \
  CHORD_COMBO(S_how), \
  CHORD_COMBO(high), \
  CHORD_COMBO(S_high), \
  CHORD_COMBO(too), \
  CHORD_COMBO(S_too), \
  CHORD_COMBO(place), \
  CHORD_COMBO(S_place), \
  CHORD_COMBO(little), \
  CHORD_COMBO(S_little), \
  CHORD_COMBO(world), \
  CHORD_COMBO(S_world), \
  CHORD_COMBO(very), \
  CHORD_COMBO(S_very), \
  CHORD_COMBO(still), \
  CHORD_COMBO(S_still), \
  CHORD_COMBO(nation), \
  CHORD_COMBO(S_nation), \
  CHORD_COMBO(hand), \
  CHORD_COMBO(S_hand), \
  CHORD_COMBO(old), \
  CHORD_COMBO(S_old), \
  CHORD_COMBO(life), \
  CHORD_COMBO(S_life), \
  CHORD_COMBO(tell), \
  CHORD_COMBO(S_tell), \
  CHORD_COMBO(write), \
  CHORD_COMBO(S_write), \
  CHORD_COMBO(become), \
  CHORD_COMBO(S_become), \
  CHORD_COMBO(here), \
  CHORD_COMBO(S_here), \
  CHORD_COMBO(show), \
  CHORD_COMBO(S_show), \
  CHORD_COMBO(house), \
  CHORD_COMBO(S_house), \
  CHORD_COMBO(both), \
  CHORD_COMBO(S_both), \
  CHORD_COMBO(between), \
  CHORD_COMBO(S_between), \
  CHORD_COMBO(need), \
  CHORD_COMBO(S_need), \
  CHORD_COMBO(mean), \
  CHORD_COMBO(S_mean), \
  CHORD_COMBO(call), \
  CHORD_COMBO(S_call), \
  CHORD_COMBO(develop), \
  CHORD_COMBO(S_develop), \
  CHORD_COMBO(under), \
  CHORD_COMBO(S_under), \
  CHORD_COMBO(last), \
  CHORD_COMBO(S_last), \
  CHORD_COMBO(right), \
  CHORD_COMBO(S_right), \
  CHORD_COMBO(move), \
  CHORD_COMBO(S_move), \
  CHORD_COMBO(thing), \
  CHORD_COMBO(S_thing), \
  CHORD_COMBO(general), \
  CHORD_COMBO(S_general), \
  CHORD_COMBO(school), \
  CHORD_COMBO(S_school), \
  CHORD_COMBO(never), \
  CHORD_COMBO(S_never), \
  CHORD_COMBO(same), \
  CHORD_COMBO(S_same), \
  CHORD_COMBO(another), \
  CHORD_COMBO(S_another), \
  CHORD_COMBO(begin), \
  CHORD_COMBO(S_begin), \
  CHORD_COMBO(while), \
  CHORD_COMBO(S_while), \
  CHORD_COMBO(number), \
  CHORD_COMBO(S_number), \
  CHORD_COMBO(part), \
  CHORD_COMBO(S_part), \
  CHORD_COMBO(turn), \
  CHORD_COMBO(S_turn), \
  CHORD_COMBO(real), \
  CHORD_COMBO(S_real), \
  CHORD_COMBO(leave), \
  CHORD_COMBO(S_leave), \
  CHORD_COMBO(might), \
  CHORD_COMBO(S_might), \
  CHORD_COMBO(want), \
  CHORD_COMBO(S_want), \
  CHORD_COMBO(point), \
  CHORD_COMBO(S_point), \
  CHORD_COMBO(form), \
  CHORD_COMBO(S_form), \
  CHORD_COMBO(off), \
  CHORD_COMBO(S_off), \
  CHORD_COMBO(child), \
  CHORD_COMBO(S_child), \
  CHORD_COMBO(few), \
  CHORD_COMBO(S_few), \
  CHORD_COMBO(small), \
  CHORD_COMBO(S_small), \
  CHORD_COMBO(since), \
  CHORD_COMBO(S_since), \
  CHORD_COMBO(against), \
  CHORD_COMBO(S_against), \
  CHORD_COMBO(ask), \
  CHORD_COMBO(S_ask), \
  CHORD_COMBO(late), \
  CHORD_COMBO(S_late), \
  CHORD_COMBO(home), \
  CHORD_COMBO(S_home), \
  CHORD_COMBO(interes), \
  CHORD_COMBO(S_interes), \
  CHORD_COMBO(large), \
  CHORD_COMBO(S_large), \
  CHORD_COMBO(person), \
  CHORD_COMBO(S_person), \
  CHORD_COMBO(end), \
  CHORD_COMBO(S_end), \
  CHORD_COMBO(open), \
  CHORD_COMBO(S_open), \
  CHORD_COMBO(public), \
  CHORD_COMBO(S_public), \
  CHORD_COMBO(follow), \
  CHORD_COMBO(S_follow), \
  CHORD_COMBO(during), \
  CHORD_COMBO(S_during), \
  CHORD_COMBO(present), \
  CHORD_COMBO(S_present), \
  CHORD_COMBO(without), \
  CHORD_COMBO(S_without), \
  CHORD_COMBO(again), \
  CHORD_COMBO(S_again), \
  CHORD_COMBO(hold), \
  CHORD_COMBO(S_hold), \
  CHORD_COMBO(govern), \
  CHORD_COMBO(S_govern), \
  CHORD_COMBO(around), \
  CHORD_COMBO(S_around), \
  CHORD_COMBO(possibl), \
  CHORD_COMBO(S_possibl), \
  CHORD_COMBO(head), \
  CHORD_COMBO(S_head), \
  CHORD_COMBO(conside), \
  CHORD_COMBO(S_conside), \
  CHORD_COMBO(word), \
  CHORD_COMBO(S_word), \
  CHORD_COMBO(program), \
  CHORD_COMBO(S_program), \
  CHORD_COMBO(problem), \
  CHORD_COMBO(S_problem), \
  CHORD_COMBO(however), \
  CHORD_COMBO(S_however), \
  CHORD_COMBO(lead), \
  CHORD_COMBO(S_lead), \
  CHORD_COMBO(system), \
  CHORD_COMBO(S_system), \
  CHORD_COMBO(set), \
  CHORD_COMBO(S_set), \
  CHORD_COMBO(order), \
  CHORD_COMBO(S_order), \
  CHORD_COMBO(eye), \
  CHORD_COMBO(S_eye), \
  CHORD_COMBO(plan), \
  CHORD_COMBO(S_plan), \
  CHORD_COMBO(run), \
  CHORD_COMBO(S_run), \
  CHORD_COMBO(keep), \
  CHORD_COMBO(S_keep), \
  CHORD_COMBO(face), \
  CHORD_COMBO(S_face), \
  CHORD_COMBO(fact), \
  CHORD_COMBO(S_fact), \
  CHORD_COMBO(group), \
  CHORD_COMBO(S_group), \
  CHORD_COMBO(play), \
  CHORD_COMBO(S_play), \
  CHORD_COMBO(stand), \
  CHORD_COMBO(S_stand), \
  CHORD_COMBO(increas), \
  CHORD_COMBO(S_increas), \
  CHORD_COMBO(early), \
  CHORD_COMBO(S_early), \
  CHORD_COMBO(course), \
  CHORD_COMBO(S_course), \
  CHORD_COMBO(change), \
  CHORD_COMBO(S_change), \
  CHORD_COMBO(help), \
  CHORD_COMBO(S_help), \
  CHORD_COMBO(line), \
  CHORD_COMBO(S_line), \
  CHORD_COMBO(his), \
  CHORD_COMBO(S_his), \
  CHORD_COMBO(her), \
  CHORD_COMBO(S_her), \
  CHORD_COMBO(an), \
  CHORD_COMBO(S_an), \
  CHORD_COMBO(my), \
  CHORD_COMBO(S_my), \
  CHORD_COMBO(their), \
  CHORD_COMBO(S_their), \
  CHORD_COMBO(me), \
  CHORD_COMBO(S_me), \
  CHORD_COMBO(him), \
  CHORD_COMBO(S_him), \
  CHORD_COMBO(your), \
  CHORD_COMBO(S_your), \
  CHORD_COMBO(its), \
  CHORD_COMBO(S_its), \
  CHORD_COMBO(two), \
  CHORD_COMBO(S_two), \
  CHORD_COMBO(our), \
  CHORD_COMBO(S_our), \
  CHORD_COMBO(us), \
  CHORD_COMBO(S_us), \
  CHORD_COMBO(is), \
  CHORD_COMBO(S_is), \
  CHORD_COMBO(was), \
  CHORD_COMBO(S_was), \
  CHORD_COMBO(are), \
  CHORD_COMBO(S_are), \
  CHORD_COMBO(had), \
  CHORD_COMBO(S_had), \
  CHORD_COMBO(were), \
  CHORD_COMBO(S_were), \
  CHORD_COMBO(said), \
  CHORD_COMBO(S_said), \
  CHORD_COMBO(has), \
  CHORD_COMBO(S_has), \
  CHORD_COMBO(sound), \
  CHORD_COMBO(S_sound), \
  CHORD_COMBO(water), \
  CHORD_COMBO(S_water), \
  CHORD_COMBO(side), \
  CHORD_COMBO(S_side), \
  CHORD_COMBO(made), \
  CHORD_COMBO(S_made), \
  CHORD_COMBO(live), \
  CHORD_COMBO(S_live), \
  CHORD_COMBO(round), \
  CHORD_COMBO(S_round), \
  CHORD_COMBO(came), \
  CHORD_COMBO(S_came), \
  CHORD_COMBO(every), \
  CHORD_COMBO(S_every), \
  CHORD_COMBO(name), \
  CHORD_COMBO(S_name), \
  CHORD_COMBO(sentenc), \
  CHORD_COMBO(S_sentenc), \
  CHORD_COMBO(low), \
  CHORD_COMBO(S_low), \
  CHORD_COMBO(differ), \
  CHORD_COMBO(S_differ), \
  CHORD_COMBO(cause), \
  CHORD_COMBO(S_cause), \
  CHORD_COMBO(boy), \
  CHORD_COMBO(S_boy), \
  CHORD_COMBO(does), \
  CHORD_COMBO(S_does), \
  CHORD_COMBO(air), \
  CHORD_COMBO(S_air), \
  CHORD_COMBO(put), \
  CHORD_COMBO(S_put), \
  CHORD_COMBO(port), \
  CHORD_COMBO(S_port), \
  CHORD_COMBO(spell), \
  CHORD_COMBO(S_spell), \
  CHORD_COMBO(land), \
  CHORD_COMBO(S_land), \
  CHORD_COMBO(big), \
  CHORD_COMBO(S_big), \
  CHORD_COMBO(act), \
  CHORD_COMBO(S_act), \
  CHORD_COMBO(why), \
  CHORD_COMBO(S_why), \
  CHORD_COMBO(men), \
  CHORD_COMBO(S_men), \
  CHORD_COMBO(went), \
  CHORD_COMBO(S_went), \
  CHORD_COMBO(light), \
  CHORD_COMBO(S_light), \
  CHORD_COMBO(kind), \
  CHORD_COMBO(S_kind), \
  CHORD_COMBO(picture), \
  CHORD_COMBO(S_picture), \
  CHORD_COMBO(try), \
  CHORD_COMBO(S_try), \
  CHORD_COMBO(animal), \
  CHORD_COMBO(S_animal), \
  CHORD_COMBO(mother), \
  CHORD_COMBO(S_mother), \
  CHORD_COMBO(build), \
  CHORD_COMBO(S_build), \
  CHORD_COMBO(self), \
  CHORD_COMBO(S_self), \
  CHORD_COMBO(earth), \
  CHORD_COMBO(S_earth), \
  CHORD_COMBO(father), \
  CHORD_COMBO(S_father), \
  CHORD_COMBO(page), \
  CHORD_COMBO(S_page), \
  CHORD_COMBO(country), \
  CHORD_COMBO(S_country), \
  CHORD_COMBO(found), \
  CHORD_COMBO(S_found), \
  CHORD_COMBO(answer), \
  CHORD_COMBO(S_answer), \
  CHORD_COMBO(grow), \
  CHORD_COMBO(S_grow), \
  CHORD_COMBO(study), \
  CHORD_COMBO(S_study), \
  CHORD_COMBO(learn), \
  CHORD_COMBO(S_learn), \
  CHORD_COMBO(plant), \
  CHORD_COMBO(S_plant), \
  CHORD_COMBO(cover), \
  CHORD_COMBO(S_cover), \
  CHORD_COMBO(food), \
  CHORD_COMBO(S_food), \
  CHORD_COMBO(sun), \
  CHORD_COMBO(S_sun), \
  CHORD_COMBO(four), \
  CHORD_COMBO(S_four), \
  CHORD_COMBO(thought), \
  CHORD_COMBO(S_thought), \
  CHORD_COMBO(city), \
  CHORD_COMBO(S_city), \
  CHORD_COMBO(cross), \
  CHORD_COMBO(S_cross), \
  CHORD_COMBO(hard), \
  CHORD_COMBO(S_hard), \
  CHORD_COMBO(far), \
  CHORD_COMBO(S_far), \
  CHORD_COMBO(sea), \
  CHORD_COMBO(S_sea), \
  CHORD_COMBO(draw), \
  CHORD_COMBO(S_draw), \
  CHORD_COMBO(left), \
  CHORD_COMBO(S_left), \
  CHORD_COMBO(press), \
  CHORD_COMBO(S_press), \
  CHORD_COMBO(close), \
  CHORD_COMBO(S_close), \
  CHORD_COMBO(night), \
  CHORD_COMBO(S_night), \
  CHORD_COMBO(north), \
  CHORD_COMBO(S_north), \
  CHORD_COMBO(togethe), \
  CHORD_COMBO(S_togethe), \
  CHORD_COMBO(next), \
  CHORD_COMBO(S_next), \
  CHORD_COMBO(white), \
  CHORD_COMBO(S_white), \
  CHORD_COMBO(childre), \
  CHORD_COMBO(S_childre), \
  CHORD_COMBO(got), \
  CHORD_COMBO(S_got), \
  CHORD_COMBO(walk), \
  CHORD_COMBO(S_walk), \
  CHORD_COMBO(example), \
  CHORD_COMBO(S_example), \
  CHORD_COMBO(always), \
  CHORD_COMBO(S_always), \
  CHORD_COMBO(music), \
  CHORD_COMBO(S_music), \
  CHORD_COMBO(mark), \
  CHORD_COMBO(S_mark), \
  CHORD_COMBO(often), \
  CHORD_COMBO(S_often), \
  CHORD_COMBO(letter), \
  CHORD_COMBO(S_letter), \
  CHORD_COMBO(until), \
  CHORD_COMBO(S_until), \
  CHORD_COMBO(mile), \
  CHORD_COMBO(S_mile), \
  CHORD_COMBO(river), \
  CHORD_COMBO(S_river), \
  CHORD_COMBO(car), \
  CHORD_COMBO(S_car), \
  CHORD_COMBO(feet), \
  CHORD_COMBO(S_feet), \
  CHORD_COMBO(care), \
  CHORD_COMBO(S_care), \
  CHORD_COMBO(second), \
  CHORD_COMBO(S_second), \
  CHORD_COMBO(carry), \
  CHORD_COMBO(S_carry), \
  CHORD_COMBO(science), \
  CHORD_COMBO(S_science), \
  CHORD_COMBO(eat), \
  CHORD_COMBO(S_eat), \
  CHORD_COMBO(friend), \
  CHORD_COMBO(S_friend), \
  CHORD_COMBO(began), \
  CHORD_COMBO(S_began), \
  CHORD_COMBO(idea), \
  CHORD_COMBO(S_idea), \
  CHORD_COMBO(fish), \
  CHORD_COMBO(S_fish), \
  CHORD_COMBO(mountai), \
  CHORD_COMBO(S_mountai), \
  CHORD_COMBO(stop), \
  CHORD_COMBO(S_stop), \
  CHORD_COMBO(once), \
  CHORD_COMBO(S_once), \
  CHORD_COMBO(base), \
  CHORD_COMBO(S_base), \
  CHORD_COMBO(horse), \
  CHORD_COMBO(S_horse), \
  CHORD_COMBO(cut), \
  CHORD_COMBO(S_cut), \
  CHORD_COMBO(sure), \
  CHORD_COMBO(S_sure), \
  CHORD_COMBO(watch), \
  CHORD_COMBO(S_watch), \
  CHORD_COMBO(color), \
  CHORD_COMBO(S_color), \
  CHORD_COMBO(wood), \
  CHORD_COMBO(S_wood), \
  CHORD_COMBO(main), \
  CHORD_COMBO(S_main), \
  CHORD_COMBO(enough), \
  CHORD_COMBO(S_enough), \
  CHORD_COMBO(plain), \
  CHORD_COMBO(S_plain), \
  CHORD_COMBO(girl), \
  CHORD_COMBO(S_girl), \
  CHORD_COMBO(usual), \
  CHORD_COMBO(S_usual), \
  CHORD_COMBO(young), \
  CHORD_COMBO(S_young), \
  CHORD_COMBO(ready), \
  CHORD_COMBO(S_ready), \
  CHORD_COMBO(above), \
  CHORD_COMBO(S_above), \
  CHORD_COMBO(red), \
  CHORD_COMBO(S_red), \
  CHORD_COMBO(list), \
  CHORD_COMBO(S_list), \
  CHORD_COMBO(though), \
  CHORD_COMBO(S_though), \
  CHORD_COMBO(bird), \
  CHORD_COMBO(S_bird), \
  CHORD_COMBO(body), \
  CHORD_COMBO(S_body), \
  CHORD_COMBO(family), \
  CHORD_COMBO(S_family), \
  CHORD_COMBO(direct), \
  CHORD_COMBO(S_direct), \
  CHORD_COMBO(pose), \
  CHORD_COMBO(S_pose), \
  CHORD_COMBO(song), \
  CHORD_COMBO(S_song), \
  CHORD_COMBO(measure), \
  CHORD_COMBO(S_measure), \
  CHORD_COMBO(product), \
  CHORD_COMBO(S_product), \
  CHORD_COMBO(black), \
  CHORD_COMBO(S_black), \
  CHORD_COMBO(short), \
  CHORD_COMBO(S_short), \
  CHORD_COMBO(numeral), \
  CHORD_COMBO(S_numeral), \
  CHORD_COMBO(class), \
  CHORD_COMBO(S_class), \
  CHORD_COMBO(wind), \
  CHORD_COMBO(S_wind), \
  CHORD_COMBO(questio), \
  CHORD_COMBO(S_questio), \
  CHORD_COMBO(happen), \
  CHORD_COMBO(S_happen), \
  CHORD_COMBO(complet), \
  CHORD_COMBO(S_complet), \
  CHORD_COMBO(ship), \
  CHORD_COMBO(S_ship), \
  CHORD_COMBO(half), \
  CHORD_COMBO(S_half), \
  CHORD_COMBO(rock), \
  CHORD_COMBO(S_rock), \
  CHORD_COMBO(fire), \
  CHORD_COMBO(S_fire), \
  CHORD_COMBO(south), \
  CHORD_COMBO(S_south), \
  CHORD_COMBO(told), \
  CHORD_COMBO(S_told), \
  CHORD_COMBO(knew), \
  CHORD_COMBO(S_knew), \
  CHORD_COMBO(pass), \
  CHORD_COMBO(S_pass), \
  CHORD_COMBO(top), \
  CHORD_COMBO(S_top), \
  CHORD_COMBO(whole), \
  CHORD_COMBO(S_whole), \
  CHORD_COMBO(space), \
  CHORD_COMBO(S_space), \
  CHORD_COMBO(best), \
  CHORD_COMBO(S_best), \
  CHORD_COMBO(hour), \
  CHORD_COMBO(S_hour), \
  CHORD_COMBO(better), \
  CHORD_COMBO(S_better), \
  CHORD_COMBO(true), \
  CHORD_COMBO(S_true), \
  CHORD_COMBO(hundred), \
  CHORD_COMBO(S_hundred), \
  CHORD_COMBO(five), \
  CHORD_COMBO(S_five), \
  CHORD_COMBO(six), \
  CHORD_COMBO(S_six), \
  CHORD_COMBO(war), \
  CHORD_COMBO(S_war), \
  CHORD_COMBO(lay), \
  CHORD_COMBO(S_lay), \
  CHORD_COMBO(map), \
  CHORD_COMBO(S_map), \
  CHORD_COMBO(fly), \
  CHORD_COMBO(S_fly), \
  CHORD_COMBO(fall), \
  CHORD_COMBO(S_fall), \
  CHORD_COMBO(cry), \
  CHORD_COMBO(S_cry), \
  CHORD_COMBO(box), \
  CHORD_COMBO(S_box), \
  CHORD_COMBO(noun), \
  CHORD_COMBO(S_noun), \
  CHORD_COMBO(week), \
  CHORD_COMBO(S_week), \
  CHORD_COMBO(oh), \
  CHORD_COMBO(S_oh), \
  CHORD_COMBO(free), \
  CHORD_COMBO(S_free), \
  CHORD_COMBO(dry), \
  CHORD_COMBO(S_dry), \
  CHORD_COMBO(ago), \
  CHORD_COMBO(S_ago), \
  CHORD_COMBO(ran), \
  CHORD_COMBO(S_ran), \
  CHORD_COMBO(hot), \
  CHORD_COMBO(S_hot), \
  CHORD_COMBO(ball), \
  CHORD_COMBO(S_ball), \
  CHORD_COMBO(yet), \
  CHORD_COMBO(S_yet), \
  CHORD_COMBO(am), \
  CHORD_COMBO(S_am), \
  CHORD_COMBO(arm), \
  CHORD_COMBO(S_arm), \
  CHORD_COMBO(ice), \
  CHORD_COMBO(S_ice), \
  CHORD_COMBO(matter), \
  CHORD_COMBO(S_matter), \
  CHORD_COMBO(art), \
  CHORD_COMBO(S_art), \
  CHORD_COMBO(cell), \
  CHORD_COMBO(S_cell), \
  CHORD_COMBO(summer), \
  CHORD_COMBO(S_summer), \
  CHORD_COMBO(leg), \
  CHORD_COMBO(S_leg), \
  CHORD_COMBO(joy), \
  CHORD_COMBO(S_joy), \
  CHORD_COMBO(job), \
  CHORD_COMBO(S_job), \
  CHORD_COMBO(gas), \
  CHORD_COMBO(S_gas), \
  CHORD_COMBO(buy), \
  CHORD_COMBO(S_buy), \
  CHORD_COMBO(cook), \
  CHORD_COMBO(S_cook), \
  CHORD_COMBO(hill), \
  CHORD_COMBO(S_hill), \
  CHORD_COMBO(law), \
  CHORD_COMBO(S_law), \
  CHORD_COMBO(lie), \
  CHORD_COMBO(S_lie), \
  CHORD_COMBO(son), \
  CHORD_COMBO(S_son), \
  CHORD_COMBO(pay), \
  CHORD_COMBO(S_pay), \
  CHORD_COMBO(age), \
  CHORD_COMBO(S_age), \
  CHORD_COMBO(cool), \
  CHORD_COMBO(S_cool), \
  CHORD_COMBO(lot), \
  CHORD_COMBO(S_lot), \
  CHORD_COMBO(key), \
  CHORD_COMBO(S_key), \
  CHORD_COMBO(row), \
  CHORD_COMBO(S_row), \
  CHORD_COMBO(die), \
  CHORD_COMBO(S_die), \
  CHORD_COMBO(oil), \
  CHORD_COMBO(S_oil), \
  CHORD_COMBO(fit), \
  CHORD_COMBO(S_fit), \
  CHORD_COMBO(hit), \
  CHORD_COMBO(S_hit), \
  CHORD_COMBO(rub), \
  CHORD_COMBO(S_rub), \
  CHORD_COMBO(tie), \
  CHORD_COMBO(S_tie), \
  CHORD_COMBO(gun), \
  CHORD_COMBO(S_gun), \
  CHORD_COMBO(nine), \
  CHORD_COMBO(S_nine), \
  CHORD_COMBO(thank), \
  CHORD_COMBO(S_thank), \
  CHORD_COMBO(experie), \
  CHORD_COMBO(S_experie), \
  CHORD_COMBO(led), \
  CHORD_COMBO(S_led), \
  CHORD_COMBO(win), \
  CHORD_COMBO(S_win), \
  CHORD_COMBO(feed), \
  CHORD_COMBO(S_feed), \
  CHORD_COMBO(nor), \
  CHORD_COMBO(S_nor), \
  CHORD_COMBO(fat), \
  CHORD_COMBO(S_fat), \
  CHORD_COMBO(bar), \
  CHORD_COMBO(S_bar), \
  CHORD_COMBO(log), \
  CHORD_COMBO(S_log), \
  CHORD_COMBO(hey), \
  CHORD_COMBO(S_hey), \
  CHORD_COMBO(return), \
  CHORD_COMBO(S_return), \
  CHORD_COMBO(probabl), \
  CHORD_COMBO(S_probabl), \
  CHORD_COMBO(thanks), \
  CHORD_COMBO(S_thanks), \
  CHORD_COMBO(i_ve), \
  CHORD_COMBO(per), \
  CHORD_COMBO(S_per), \
  CHORD_COMBO(null), \
  CHORD_COMBO(S_null), \
  CHORD_COMBO(nil), \
  CHORD_COMBO(S_nil), \
  CHORD_COMBO(array), \
  CHORD_COMBO(S_array), \
  CHORD_COMBO(sort), \
  CHORD_COMBO(S_sort), \
  CHORD_COMBO(in_the), \
  CHORD_COMBO(S_in_the), \
  CHORD_COMBO(of_the), \
  CHORD_COMBO(S_of_the), \
  CHORD_COMBO(to_be), \
  CHORD_COMBO(S_to_be), \
  CHORD_COMBO(to_the), \
  CHORD_COMBO(S_to_the), \
  CHORD_COMBO(and_the), \
  CHORD_COMBO(S_and_the), \
  CHORD_COMBO(and_i), \
  CHORD_COMBO(S_and_i), \
  CHORD_COMBO(on_the), \
  CHORD_COMBO(S_on_the), \
  CHORD_COMBO(it_is), \
  CHORD_COMBO(S_it_is), \
  CHORD_COMBO(if_you), \
  CHORD_COMBO(S_if_you), \
  CHORD_COMBO(the_wor), \
  CHORD_COMBO(S_the_wor), \
  CHORD_COMBO(in_a), \
  CHORD_COMBO(S_in_a), \
  CHORD_COMBO(the_qui), \
  CHORD_COMBO(S_the_qui), \
  CHORD_COMBO(elberet), \
  CHORD_COMBO(http_), \
  CHORD_COMBO(https_), \
  CHORD_COMBO(select_), \
  CHORD_COMBO(S_select_), \
  PERSONAL_CHORD_COMBOS

bool releasedWithinTapThreshold = true;
deferred_token chord_token = INVALID_DEFERRED_TOKEN;
uint16_t prev_chord_length;
bool prev_chord_space = false;
bool prev_chord_skipsentence = false;
bool chord_shifted;

#define CHORD_FUNC_RELEASE \
  void process_chord_release(uint16_t combo_index) { \
    cancel_deferred_exec(chord_token); \
   \
    bool space = true; \
    char *append = NULL; \
    prev_chord_length = last_chord_length; \
    last_chord_length = 0; \
   \
    uint8_t mods = get_mods(); \
    uint8_t oneshot_mods = get_oneshot_mods(); \
   \
    del_mods(MOD_MASK_SHIFT); \
    del_weak_mods(MOD_MASK_SHIFT); \
    del_oneshot_mods(MOD_MASK_SHIFT); \
   \
    switch(combo_index) { \
      case CHORD_delete_: \
        last_chord_length = prev_chord_length; \
        space = false; \
        if (releasedWithinTapThreshold) { \
          if (prev_chord_length) { \
            for (uint16_t i = 0; i < prev_chord_length; i++) { \
              tap_code16(KC_BSPC); \
            } \
            last_chord_length = 0; \
          } \
          else { \
            tap_code16(LALT(KC_BSPC)); \
          } \
          prev_chord_skipsentence = false; \
          prev_chord_space = false; \
        } \
        break; \
      case CHORD_left_cl: \
        last_chord_length = prev_chord_length; \
        space = false; \
        if (releasedWithinTapThreshold) { \
          tap_code16(KC_MS_BTN1); \
        } \
        break; \
      case CHORD_oneshot: \
        last_chord_length = prev_chord_length; \
        space = false; \
        clear_oneshot_layer_state(ONESHOT_PRESSED); \
        break; \
      PERSONAL_RELEASE_CASES \
      default: \
        set_mods(mods); \
        set_oneshot_mods(oneshot_mods); \
        last_chord_length = prev_chord_length; \
        return; \
    } \
   \
    if (append != NULL) { \
      if (chord_shifted && append[0] >= 'a' && append[0] <= 'z') { \
        add_oneshot_mods(MOD_MASK_SHIFT); \
      } \
      SEND_STRING(append); \
      last_chord_length += strlen(append); \
    } \
   \
    prev_chord_space = space; \
    if (space) { \
      tap_code(KC_SPC); \
      last_chord_length++; \
    } \
   \
    if (releasedWithinTapThreshold) { \
      emit_virt_combo(last_chord, chord_shifted, VIRT_CHORD_ENDED_TAP); \
    } \
   \
    set_mods(mods); \
    set_oneshot_mods(oneshot_mods); \
  }

#define CHORD_FUNC_HOLD \
  uint32_t process_chord_hold(uint32_t trigger_time, void* cb_arg) { \
    uint16_t combo_index = last_chord; \
   \
    releasedWithinTapThreshold = false; \
   \
    char *append = NULL; \
    bool space = true; \
    last_chord_length = 0; \
   \
    uint8_t mods = get_mods(); \
    uint8_t oneshot_mods = 0; \
    del_mods(MOD_MASK_SHIFT); \
    del_weak_mods(MOD_MASK_SHIFT); \
    del_oneshot_mods(MOD_MASK_SHIFT); \
   \
    switch(combo_index) { \
      case CHORD_delete_: \
        space = false; \
        last_chord_length = prev_chord_length; \
        oneshot_mods = MOD_LCTL | MOD_LALT | MOD_LGUI; \
        break; \
      case CHORD_left_cl: \
        space = false; \
        last_chord_length = prev_chord_length; \
        register_mods(MOD_LGUI); \
        tap_code16(KC_MS_BTN1); \
        unregister_mods(MOD_LGUI); \
        break; \
      PERSONAL_HOLD_CASES \
      default: \
        set_mods(mods); \
        set_oneshot_mods(oneshot_mods); \
        last_chord_length = prev_chord_length; \
        return 0; \
    } \
   \
    if (append != NULL) { \
      if (chord_shifted && append[0] >= 'a' && append[0] <= 'z') { \
        add_oneshot_mods(MOD_MASK_SHIFT); \
      } \
      SEND_STRING(append); \
      last_chord_length += strlen(append); \
    } \
   \
    prev_chord_space = space; \
    if (space) { \
      tap_code(KC_SPC); \
      last_chord_length++; \
    } \
   \
    emit_virt_combo(last_chord, chord_shifted, VIRT_CHORD_ENDED_HOLD); \
    set_mods(mods); \
    set_oneshot_mods(oneshot_mods); \
    return 0; \
  }

#define CHORD_FUNC_TAP \
  void process_chord_event(uint16_t combo_index, bool pressed) { \
    if (!pressed) { \
      process_chord_release(combo_index); \
      return; \
    } \
   \
    releasedWithinTapThreshold = true; \
    prev_chord_length = last_chord_length; \
    prev_chord_skipsentence = false; \
   \
    last_chord_length = 0; \
    last_chord = combo_index; \
    last_chord_cycle = 0; \
   \
    char *append = NULL; \
    bool space = true; \
    bool scheduleTimer = false; \
   \
    uint8_t mods = get_mods(); \
    uint8_t oneshot_mods = 0; \
    bool mod_shifted = (mods | get_weak_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT; \
    del_mods(MOD_MASK_SHIFT); \
    del_weak_mods(MOD_MASK_SHIFT); \
    del_oneshot_mods(MOD_MASK_SHIFT); \
   \
    bool combo_shifted = combo_index >= CHORD_S_the; \
    chord_shifted = mod_shifted || combo_shifted; \
   \
    switch(combo_index) { \
      case CHORD_right_c: \
        space = false; \
        last_chord_length = prev_chord_length; \
        tap_code16(KC_MS_BTN2); \
        break; \
      case CHORD_oneshot: \
        space = false; \
        last_chord_length = prev_chord_length; \
        set_oneshot_layer(FUNCTION, ONESHOT_START); \
        break; \
      case CHORD_excl: \
        last_chord_length = 1; \
        if (prev_chord_length && !prev_chord_skipsentence) { \
          if (prev_chord_space) { \
            tap_code16(KC_BSPC); \
          } \
          space = prev_chord_space; \
          oneshot_mods = MOD_MASK_SHIFT; \
        } else { \
          space = false; \
        } \
        SEND_STRING("!"); \
        break; \
      case CHORD_qmark: \
        last_chord_length = 1; \
        if (prev_chord_length && !prev_chord_skipsentence) { \
          if (prev_chord_space) { \
            tap_code16(KC_BSPC); \
          } \
          space = prev_chord_space; \
          oneshot_mods = MOD_MASK_SHIFT; \
        } else { \
          space = false; \
        } \
        SEND_STRING("?"); \
        break; \
      case CHORD_colon: \
        last_chord_length = 1; \
        if (prev_chord_length && !prev_chord_skipsentence) { \
          if (prev_chord_space) { \
            tap_code16(KC_BSPC); \
          } \
          space = prev_chord_space; \
        } else { \
          space = false; \
        } \
        SEND_STRING(":"); \
        break; \
      case CHORD_semi: \
        last_chord_length = 1; \
        if (prev_chord_length && !prev_chord_skipsentence) { \
          if (prev_chord_space) { \
            tap_code16(KC_BSPC); \
          } \
          space = prev_chord_space; \
        } else { \
          space = false; \
        } \
        SEND_STRING(";"); \
        break; \
      case CHORD_cent: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("¢"); \
        break; \
      case CHORD_pound: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("£"); \
        break; \
      case CHORD_yen: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("¥"); \
        break; \
      case CHORD_euro: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("€"); \
        break; \
      case CHORD_mid_ell: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("⋯"); \
        break; \
      case CHORD_bullet: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("•"); \
        break; \
      case CHORD_degrees: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("°"); \
        break; \
      case CHORD_infinit: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("∞"); \
        break; \
      case CHORD_lambda: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("λ"); \
        break; \
      case CHORD_interro: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("‽"); \
        break; \
      case CHORD_ballot_: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("✗"); \
        break; \
      case CHORD_checkma: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("✔"); \
        break; \
      case CHORD_left_ar: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("←"); \
        break; \
      case CHORD_down_ar: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("↓"); \
        break; \
      case CHORD_up_arro: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("↑"); \
        break; \
      case CHORD_right_a: \
        last_chord_length = 1; \
        space = false; \
        send_unicode_string("→"); \
        break; \
      case CHORD__ing: \
        last_chord_length = 2; \
        tap_code16(KC_BSPC); \
        SEND_STRING("ing"); \
        break; \
      case CHORD__n_t: \
        last_chord_length = 2; \
        tap_code16(KC_BSPC); \
        SEND_STRING("n't"); \
        break; \
      case CHORD__ve: \
        last_chord_length = 2; \
        tap_code16(KC_BSPC); \
        SEND_STRING("'ve"); \
        break; \
      case CHORD__re: \
        last_chord_length = 2; \
        tap_code16(KC_BSPC); \
        SEND_STRING("'re"); \
        break; \
      case CHORD_the: \
      case CHORD_S_the: \
        append = "the"; \
        break; \
      case CHORD_be: \
      case CHORD_S_be: \
        append = "be"; \
        break; \
      case CHORD_of: \
      case CHORD_S_of: \
        append = "of"; \
        break; \
      case CHORD_and: \
      case CHORD_S_and: \
        append = "and"; \
        break; \
      case CHORD_a: \
      case CHORD_S_a: \
        append = "a"; \
        break; \
      case CHORD_a1: \
        last_chord_length = 1; \
        SEND_STRING("A"); \
        break; \
      case CHORD_to: \
      case CHORD_S_to: \
        append = "to"; \
        break; \
      case CHORD_in: \
      case CHORD_S_in: \
        append = "in"; \
        break; \
      case CHORD_he: \
      case CHORD_S_he: \
        append = "he"; \
        break; \
      case CHORD_have: \
      case CHORD_S_have: \
        append = "have"; \
        break; \
      case CHORD_it: \
      case CHORD_S_it: \
        append = "it"; \
        break; \
      case CHORD_that: \
      case CHORD_S_that: \
        append = "that"; \
        break; \
      case CHORD_for: \
      case CHORD_S_for: \
        append = "for"; \
        break; \
      case CHORD_they: \
      case CHORD_S_they: \
        append = "they"; \
        break; \
      case CHORD_i: \
        last_chord_length = 1; \
        SEND_STRING("I"); \
        break; \
      case CHORD_with: \
      case CHORD_S_with: \
        append = "with"; \
        break; \
      case CHORD_as: \
      case CHORD_S_as: \
        append = "as"; \
        break; \
      case CHORD_not: \
      case CHORD_S_not: \
        append = "not"; \
        break; \
      case CHORD_on: \
      case CHORD_S_on: \
        append = "on"; \
        break; \
      case CHORD_she: \
      case CHORD_S_she: \
        append = "she"; \
        break; \
      case CHORD_at: \
      case CHORD_S_at: \
        append = "at"; \
        break; \
      case CHORD_by: \
      case CHORD_S_by: \
        append = "by"; \
        break; \
      case CHORD_this: \
      case CHORD_S_this: \
        append = "this"; \
        break; \
      case CHORD_we: \
      case CHORD_S_we: \
        append = "we"; \
        break; \
      case CHORD_you: \
      case CHORD_S_you: \
        append = "you"; \
        break; \
      case CHORD_do: \
      case CHORD_S_do: \
        append = "do"; \
        break; \
      case CHORD_but: \
      case CHORD_S_but: \
        append = "but"; \
        break; \
      case CHORD_from: \
      case CHORD_S_from: \
        append = "from"; \
        break; \
      case CHORD_or: \
      case CHORD_S_or: \
        append = "or"; \
        break; \
      case CHORD_which: \
      case CHORD_S_which: \
        append = "which"; \
        break; \
      case CHORD_one: \
      case CHORD_S_one: \
        append = "one"; \
        break; \
      case CHORD_would: \
      case CHORD_S_would: \
        append = "would"; \
        break; \
      case CHORD_all: \
      case CHORD_S_all: \
        append = "all"; \
        break; \
      case CHORD_will: \
      case CHORD_S_will: \
        append = "will"; \
        break; \
      case CHORD_there: \
      case CHORD_S_there: \
        append = "there"; \
        break; \
      case CHORD_say: \
      case CHORD_S_say: \
        append = "say"; \
        break; \
      case CHORD_who: \
      case CHORD_S_who: \
        append = "who"; \
        break; \
      case CHORD_make: \
      case CHORD_S_make: \
        append = "make"; \
        break; \
      case CHORD_when: \
      case CHORD_S_when: \
        append = "when"; \
        break; \
      case CHORD_can: \
      case CHORD_S_can: \
        append = "can"; \
        break; \
      case CHORD_more: \
      case CHORD_S_more: \
        append = "more"; \
        break; \
      case CHORD_if: \
      case CHORD_S_if: \
        append = "if"; \
        break; \
      case CHORD_no: \
      case CHORD_S_no: \
        append = "no"; \
        break; \
      case CHORD_man: \
      case CHORD_S_man: \
        append = "man"; \
        break; \
      case CHORD_out: \
      case CHORD_S_out: \
        append = "out"; \
        break; \
      case CHORD_other: \
      case CHORD_S_other: \
        append = "other"; \
        break; \
      case CHORD_so: \
      case CHORD_S_so: \
        append = "so"; \
        break; \
      case CHORD_what: \
      case CHORD_S_what: \
        append = "what"; \
        break; \
      case CHORD_time: \
      case CHORD_S_time: \
        append = "time"; \
        break; \
      case CHORD_up: \
      case CHORD_S_up: \
        append = "up"; \
        break; \
      case CHORD_go: \
      case CHORD_S_go: \
        append = "go"; \
        break; \
      case CHORD_about: \
      case CHORD_S_about: \
        append = "about"; \
        break; \
      case CHORD_than: \
      case CHORD_S_than: \
        append = "than"; \
        break; \
      case CHORD_into: \
      case CHORD_S_into: \
        append = "into"; \
        break; \
      case CHORD_could: \
      case CHORD_S_could: \
        append = "could"; \
        break; \
      case CHORD_state: \
      case CHORD_S_state: \
        append = "state"; \
        break; \
      case CHORD_only: \
      case CHORD_S_only: \
        append = "only"; \
        break; \
      case CHORD_new: \
      case CHORD_S_new: \
        append = "new"; \
        break; \
      case CHORD_year: \
      case CHORD_S_year: \
        append = "year"; \
        break; \
      case CHORD_some: \
      case CHORD_S_some: \
        append = "some"; \
        break; \
      case CHORD_take: \
      case CHORD_S_take: \
        append = "take"; \
        break; \
      case CHORD_come: \
      case CHORD_S_come: \
        append = "come"; \
        break; \
      case CHORD_these: \
      case CHORD_S_these: \
        append = "these"; \
        break; \
      case CHORD_know: \
      case CHORD_S_know: \
        append = "know"; \
        break; \
      case CHORD_see: \
      case CHORD_S_see: \
        append = "see"; \
        break; \
      case CHORD_use: \
      case CHORD_S_use: \
        append = "use"; \
        break; \
      case CHORD_get: \
      case CHORD_S_get: \
        append = "get"; \
        break; \
      case CHORD_like: \
      case CHORD_S_like: \
        append = "like"; \
        break; \
      case CHORD_then: \
      case CHORD_S_then: \
        append = "then"; \
        break; \
      case CHORD_first: \
      case CHORD_S_first: \
        append = "first"; \
        break; \
      case CHORD_any: \
      case CHORD_S_any: \
        append = "any"; \
        break; \
      case CHORD_work: \
      case CHORD_S_work: \
        append = "work"; \
        break; \
      case CHORD_now: \
      case CHORD_S_now: \
        append = "now"; \
        break; \
      case CHORD_may: \
      case CHORD_S_may: \
        append = "may"; \
        break; \
      case CHORD_such: \
      case CHORD_S_such: \
        append = "such"; \
        break; \
      case CHORD_give: \
      case CHORD_S_give: \
        append = "give"; \
        break; \
      case CHORD_over: \
      case CHORD_S_over: \
        append = "over"; \
        break; \
      case CHORD_think: \
      case CHORD_S_think: \
        append = "think"; \
        break; \
      case CHORD_most: \
      case CHORD_S_most: \
        append = "most"; \
        break; \
      case CHORD_even: \
      case CHORD_S_even: \
        append = "even"; \
        break; \
      case CHORD_find: \
      case CHORD_S_find: \
        append = "find"; \
        break; \
      case CHORD_day: \
      case CHORD_S_day: \
        append = "day"; \
        break; \
      case CHORD_also: \
      case CHORD_S_also: \
        append = "also"; \
        break; \
      case CHORD_after: \
      case CHORD_S_after: \
        append = "after"; \
        break; \
      case CHORD_way: \
      case CHORD_S_way: \
        append = "way"; \
        break; \
      case CHORD_many: \
      case CHORD_S_many: \
        append = "many"; \
        break; \
      case CHORD_must: \
      case CHORD_S_must: \
        append = "must"; \
        break; \
      case CHORD_look: \
      case CHORD_S_look: \
        append = "look"; \
        break; \
      case CHORD_before: \
      case CHORD_S_before: \
        append = "before"; \
        break; \
      case CHORD_great: \
      case CHORD_S_great: \
        append = "great"; \
        break; \
      case CHORD_back: \
      case CHORD_S_back: \
        append = "back"; \
        break; \
      case CHORD_through: \
      case CHORD_S_through: \
        append = "through"; \
        break; \
      case CHORD_long: \
      case CHORD_S_long: \
        append = "long"; \
        break; \
      case CHORD_where: \
      case CHORD_S_where: \
        append = "where"; \
        break; \
      case CHORD_much: \
      case CHORD_S_much: \
        append = "much"; \
        break; \
      case CHORD_should: \
      case CHORD_S_should: \
        append = "should"; \
        break; \
      case CHORD_well: \
      case CHORD_S_well: \
        append = "well"; \
        break; \
      case CHORD_people: \
      case CHORD_S_people: \
        append = "people"; \
        break; \
      case CHORD_down: \
      case CHORD_S_down: \
        append = "down"; \
        break; \
      case CHORD_own: \
      case CHORD_S_own: \
        append = "own"; \
        break; \
      case CHORD_just: \
      case CHORD_S_just: \
        append = "just"; \
        break; \
      case CHORD_because: \
      case CHORD_S_because: \
        append = "because"; \
        break; \
      case CHORD_good: \
      case CHORD_S_good: \
        append = "good"; \
        break; \
      case CHORD_each: \
      case CHORD_S_each: \
        append = "each"; \
        break; \
      case CHORD_those: \
      case CHORD_S_those: \
        append = "those"; \
        break; \
      case CHORD_feel: \
      case CHORD_S_feel: \
        append = "feel"; \
        break; \
      case CHORD_seem: \
      case CHORD_S_seem: \
        append = "seem"; \
        break; \
      case CHORD_how: \
      case CHORD_S_how: \
        append = "how"; \
        break; \
      case CHORD_high: \
      case CHORD_S_high: \
        append = "high"; \
        break; \
      case CHORD_too: \
      case CHORD_S_too: \
        append = "too"; \
        break; \
      case CHORD_place: \
      case CHORD_S_place: \
        append = "place"; \
        break; \
      case CHORD_little: \
      case CHORD_S_little: \
        append = "little"; \
        break; \
      case CHORD_world: \
      case CHORD_S_world: \
        append = "world"; \
        break; \
      case CHORD_very: \
      case CHORD_S_very: \
        append = "very"; \
        break; \
      case CHORD_still: \
      case CHORD_S_still: \
        append = "still"; \
        break; \
      case CHORD_nation: \
      case CHORD_S_nation: \
        append = "nation"; \
        break; \
      case CHORD_hand: \
      case CHORD_S_hand: \
        append = "hand"; \
        break; \
      case CHORD_old: \
      case CHORD_S_old: \
        append = "old"; \
        break; \
      case CHORD_life: \
      case CHORD_S_life: \
        append = "life"; \
        break; \
      case CHORD_tell: \
      case CHORD_S_tell: \
        append = "tell"; \
        break; \
      case CHORD_write: \
      case CHORD_S_write: \
        append = "write"; \
        break; \
      case CHORD_become: \
      case CHORD_S_become: \
        append = "become"; \
        break; \
      case CHORD_here: \
      case CHORD_S_here: \
        append = "here"; \
        break; \
      case CHORD_show: \
      case CHORD_S_show: \
        append = "show"; \
        break; \
      case CHORD_house: \
      case CHORD_S_house: \
        append = "house"; \
        break; \
      case CHORD_both: \
      case CHORD_S_both: \
        append = "both"; \
        break; \
      case CHORD_between: \
      case CHORD_S_between: \
        append = "between"; \
        break; \
      case CHORD_need: \
      case CHORD_S_need: \
        append = "need"; \
        break; \
      case CHORD_mean: \
      case CHORD_S_mean: \
        append = "mean"; \
        break; \
      case CHORD_call: \
      case CHORD_S_call: \
        append = "call"; \
        break; \
      case CHORD_develop: \
      case CHORD_S_develop: \
        append = "develop"; \
        break; \
      case CHORD_under: \
      case CHORD_S_under: \
        append = "under"; \
        break; \
      case CHORD_last: \
      case CHORD_S_last: \
        append = "last"; \
        break; \
      case CHORD_right: \
      case CHORD_S_right: \
        append = "right"; \
        break; \
      case CHORD_move: \
      case CHORD_S_move: \
        append = "move"; \
        break; \
      case CHORD_thing: \
      case CHORD_S_thing: \
        append = "thing"; \
        break; \
      case CHORD_general: \
      case CHORD_S_general: \
        append = "general"; \
        break; \
      case CHORD_school: \
      case CHORD_S_school: \
        append = "school"; \
        break; \
      case CHORD_never: \
      case CHORD_S_never: \
        append = "never"; \
        break; \
      case CHORD_same: \
      case CHORD_S_same: \
        append = "same"; \
        break; \
      case CHORD_another: \
      case CHORD_S_another: \
        append = "another"; \
        break; \
      case CHORD_begin: \
      case CHORD_S_begin: \
        append = "begin"; \
        break; \
      case CHORD_while: \
      case CHORD_S_while: \
        append = "while"; \
        break; \
      case CHORD_number: \
      case CHORD_S_number: \
        append = "number"; \
        break; \
      case CHORD_part: \
      case CHORD_S_part: \
        append = "part"; \
        break; \
      case CHORD_turn: \
      case CHORD_S_turn: \
        append = "turn"; \
        break; \
      case CHORD_real: \
      case CHORD_S_real: \
        append = "real"; \
        break; \
      case CHORD_leave: \
      case CHORD_S_leave: \
        append = "leave"; \
        break; \
      case CHORD_might: \
      case CHORD_S_might: \
        append = "might"; \
        break; \
      case CHORD_want: \
      case CHORD_S_want: \
        append = "want"; \
        break; \
      case CHORD_point: \
      case CHORD_S_point: \
        append = "point"; \
        break; \
      case CHORD_form: \
      case CHORD_S_form: \
        append = "form"; \
        break; \
      case CHORD_off: \
      case CHORD_S_off: \
        append = "off"; \
        break; \
      case CHORD_child: \
      case CHORD_S_child: \
        append = "child"; \
        break; \
      case CHORD_few: \
      case CHORD_S_few: \
        append = "few"; \
        break; \
      case CHORD_small: \
      case CHORD_S_small: \
        append = "small"; \
        break; \
      case CHORD_since: \
      case CHORD_S_since: \
        append = "since"; \
        break; \
      case CHORD_against: \
      case CHORD_S_against: \
        append = "against"; \
        break; \
      case CHORD_ask: \
      case CHORD_S_ask: \
        append = "ask"; \
        break; \
      case CHORD_late: \
      case CHORD_S_late: \
        append = "late"; \
        break; \
      case CHORD_home: \
      case CHORD_S_home: \
        append = "home"; \
        break; \
      case CHORD_interes: \
      case CHORD_S_interes: \
        append = "interest"; \
        break; \
      case CHORD_large: \
      case CHORD_S_large: \
        append = "large"; \
        break; \
      case CHORD_person: \
      case CHORD_S_person: \
        append = "person"; \
        break; \
      case CHORD_end: \
      case CHORD_S_end: \
        append = "end"; \
        break; \
      case CHORD_open: \
      case CHORD_S_open: \
        append = "open"; \
        break; \
      case CHORD_public: \
      case CHORD_S_public: \
        append = "public"; \
        break; \
      case CHORD_follow: \
      case CHORD_S_follow: \
        append = "follow"; \
        break; \
      case CHORD_during: \
      case CHORD_S_during: \
        append = "during"; \
        break; \
      case CHORD_present: \
      case CHORD_S_present: \
        append = "present"; \
        break; \
      case CHORD_without: \
      case CHORD_S_without: \
        append = "without"; \
        break; \
      case CHORD_again: \
      case CHORD_S_again: \
        append = "again"; \
        break; \
      case CHORD_hold: \
      case CHORD_S_hold: \
        append = "hold"; \
        break; \
      case CHORD_govern: \
      case CHORD_S_govern: \
        append = "govern"; \
        break; \
      case CHORD_around: \
      case CHORD_S_around: \
        append = "around"; \
        break; \
      case CHORD_possibl: \
      case CHORD_S_possibl: \
        append = "possible"; \
        break; \
      case CHORD_head: \
      case CHORD_S_head: \
        append = "head"; \
        break; \
      case CHORD_conside: \
      case CHORD_S_conside: \
        append = "consider"; \
        break; \
      case CHORD_word: \
      case CHORD_S_word: \
        append = "word"; \
        break; \
      case CHORD_program: \
      case CHORD_S_program: \
        append = "program"; \
        break; \
      case CHORD_problem: \
      case CHORD_S_problem: \
        append = "problem"; \
        break; \
      case CHORD_however: \
      case CHORD_S_however: \
        append = "however"; \
        break; \
      case CHORD_lead: \
      case CHORD_S_lead: \
        append = "lead"; \
        break; \
      case CHORD_system: \
      case CHORD_S_system: \
        append = "system"; \
        break; \
      case CHORD_set: \
      case CHORD_S_set: \
        append = "set"; \
        break; \
      case CHORD_order: \
      case CHORD_S_order: \
        append = "order"; \
        break; \
      case CHORD_eye: \
      case CHORD_S_eye: \
        append = "eye"; \
        break; \
      case CHORD_plan: \
      case CHORD_S_plan: \
        append = "plan"; \
        break; \
      case CHORD_run: \
      case CHORD_S_run: \
        append = "run"; \
        break; \
      case CHORD_keep: \
      case CHORD_S_keep: \
        append = "keep"; \
        break; \
      case CHORD_face: \
      case CHORD_S_face: \
        append = "face"; \
        break; \
      case CHORD_fact: \
      case CHORD_S_fact: \
        append = "fact"; \
        break; \
      case CHORD_group: \
      case CHORD_S_group: \
        append = "group"; \
        break; \
      case CHORD_play: \
      case CHORD_S_play: \
        append = "play"; \
        break; \
      case CHORD_stand: \
      case CHORD_S_stand: \
        append = "stand"; \
        break; \
      case CHORD_increas: \
      case CHORD_S_increas: \
        append = "increase"; \
        break; \
      case CHORD_early: \
      case CHORD_S_early: \
        append = "early"; \
        break; \
      case CHORD_course: \
      case CHORD_S_course: \
        append = "course"; \
        break; \
      case CHORD_change: \
      case CHORD_S_change: \
        append = "change"; \
        break; \
      case CHORD_help: \
      case CHORD_S_help: \
        append = "help"; \
        break; \
      case CHORD_line: \
      case CHORD_S_line: \
        append = "line"; \
        break; \
      case CHORD_his: \
      case CHORD_S_his: \
        append = "his"; \
        break; \
      case CHORD_her: \
      case CHORD_S_her: \
        append = "her"; \
        break; \
      case CHORD_an: \
      case CHORD_S_an: \
        append = "an"; \
        break; \
      case CHORD_my: \
      case CHORD_S_my: \
        append = "my"; \
        break; \
      case CHORD_their: \
      case CHORD_S_their: \
        append = "their"; \
        break; \
      case CHORD_me: \
      case CHORD_S_me: \
        append = "me"; \
        break; \
      case CHORD_him: \
      case CHORD_S_him: \
        append = "him"; \
        break; \
      case CHORD_your: \
      case CHORD_S_your: \
        append = "your"; \
        break; \
      case CHORD_its: \
      case CHORD_S_its: \
        append = "its"; \
        break; \
      case CHORD_two: \
      case CHORD_S_two: \
        append = "two"; \
        break; \
      case CHORD_our: \
      case CHORD_S_our: \
        append = "our"; \
        break; \
      case CHORD_us: \
      case CHORD_S_us: \
        append = "us"; \
        break; \
      case CHORD_is: \
      case CHORD_S_is: \
        append = "is"; \
        break; \
      case CHORD_was: \
      case CHORD_S_was: \
        append = "was"; \
        break; \
      case CHORD_are: \
      case CHORD_S_are: \
        append = "are"; \
        break; \
      case CHORD_had: \
      case CHORD_S_had: \
        append = "had"; \
        break; \
      case CHORD_were: \
      case CHORD_S_were: \
        append = "were"; \
        break; \
      case CHORD_said: \
      case CHORD_S_said: \
        append = "said"; \
        break; \
      case CHORD_has: \
      case CHORD_S_has: \
        append = "has"; \
        break; \
      case CHORD_sound: \
      case CHORD_S_sound: \
        append = "sound"; \
        break; \
      case CHORD_water: \
      case CHORD_S_water: \
        append = "water"; \
        break; \
      case CHORD_side: \
      case CHORD_S_side: \
        append = "side"; \
        break; \
      case CHORD_made: \
      case CHORD_S_made: \
        append = "made"; \
        break; \
      case CHORD_live: \
      case CHORD_S_live: \
        append = "live"; \
        break; \
      case CHORD_round: \
      case CHORD_S_round: \
        append = "round"; \
        break; \
      case CHORD_came: \
      case CHORD_S_came: \
        append = "came"; \
        break; \
      case CHORD_every: \
      case CHORD_S_every: \
        append = "every"; \
        break; \
      case CHORD_name: \
      case CHORD_S_name: \
        append = "name"; \
        break; \
      case CHORD_sentenc: \
      case CHORD_S_sentenc: \
        append = "sentence"; \
        break; \
      case CHORD_low: \
      case CHORD_S_low: \
        append = "low"; \
        break; \
      case CHORD_differ: \
      case CHORD_S_differ: \
        append = "differ"; \
        break; \
      case CHORD_cause: \
      case CHORD_S_cause: \
        append = "cause"; \
        break; \
      case CHORD_boy: \
      case CHORD_S_boy: \
        append = "boy"; \
        break; \
      case CHORD_does: \
      case CHORD_S_does: \
        append = "does"; \
        break; \
      case CHORD_air: \
      case CHORD_S_air: \
        append = "air"; \
        break; \
      case CHORD_put: \
      case CHORD_S_put: \
        append = "put"; \
        break; \
      case CHORD_port: \
      case CHORD_S_port: \
        append = "port"; \
        break; \
      case CHORD_spell: \
      case CHORD_S_spell: \
        append = "spell"; \
        break; \
      case CHORD_land: \
      case CHORD_S_land: \
        append = "land"; \
        break; \
      case CHORD_big: \
      case CHORD_S_big: \
        append = "big"; \
        break; \
      case CHORD_act: \
      case CHORD_S_act: \
        append = "act"; \
        break; \
      case CHORD_why: \
      case CHORD_S_why: \
        append = "why"; \
        break; \
      case CHORD_men: \
      case CHORD_S_men: \
        append = "men"; \
        break; \
      case CHORD_went: \
      case CHORD_S_went: \
        append = "went"; \
        break; \
      case CHORD_light: \
      case CHORD_S_light: \
        append = "light"; \
        break; \
      case CHORD_kind: \
      case CHORD_S_kind: \
        append = "kind"; \
        break; \
      case CHORD_picture: \
      case CHORD_S_picture: \
        append = "picture"; \
        break; \
      case CHORD_try: \
      case CHORD_S_try: \
        append = "try"; \
        break; \
      case CHORD_animal: \
      case CHORD_S_animal: \
        append = "animal"; \
        break; \
      case CHORD_mother: \
      case CHORD_S_mother: \
        append = "mother"; \
        break; \
      case CHORD_build: \
      case CHORD_S_build: \
        append = "build"; \
        break; \
      case CHORD_self: \
      case CHORD_S_self: \
        append = "self"; \
        break; \
      case CHORD_earth: \
      case CHORD_S_earth: \
        append = "earth"; \
        break; \
      case CHORD_father: \
      case CHORD_S_father: \
        append = "father"; \
        break; \
      case CHORD_page: \
      case CHORD_S_page: \
        append = "page"; \
        break; \
      case CHORD_country: \
      case CHORD_S_country: \
        append = "country"; \
        break; \
      case CHORD_found: \
      case CHORD_S_found: \
        append = "found"; \
        break; \
      case CHORD_answer: \
      case CHORD_S_answer: \
        append = "answer"; \
        break; \
      case CHORD_grow: \
      case CHORD_S_grow: \
        append = "grow"; \
        break; \
      case CHORD_study: \
      case CHORD_S_study: \
        append = "study"; \
        break; \
      case CHORD_learn: \
      case CHORD_S_learn: \
        append = "learn"; \
        break; \
      case CHORD_plant: \
      case CHORD_S_plant: \
        append = "plant"; \
        break; \
      case CHORD_cover: \
      case CHORD_S_cover: \
        append = "cover"; \
        break; \
      case CHORD_food: \
      case CHORD_S_food: \
        append = "food"; \
        break; \
      case CHORD_sun: \
      case CHORD_S_sun: \
        append = "sun"; \
        break; \
      case CHORD_four: \
      case CHORD_S_four: \
        append = "four"; \
        break; \
      case CHORD_thought: \
      case CHORD_S_thought: \
        append = "thought"; \
        break; \
      case CHORD_city: \
      case CHORD_S_city: \
        append = "city"; \
        break; \
      case CHORD_cross: \
      case CHORD_S_cross: \
        append = "cross"; \
        break; \
      case CHORD_hard: \
      case CHORD_S_hard: \
        append = "hard"; \
        break; \
      case CHORD_far: \
      case CHORD_S_far: \
        append = "far"; \
        break; \
      case CHORD_sea: \
      case CHORD_S_sea: \
        append = "sea"; \
        break; \
      case CHORD_draw: \
      case CHORD_S_draw: \
        append = "draw"; \
        break; \
      case CHORD_left: \
      case CHORD_S_left: \
        append = "left"; \
        break; \
      case CHORD_press: \
      case CHORD_S_press: \
        append = "press"; \
        break; \
      case CHORD_close: \
      case CHORD_S_close: \
        append = "close"; \
        break; \
      case CHORD_night: \
      case CHORD_S_night: \
        append = "night"; \
        break; \
      case CHORD_north: \
      case CHORD_S_north: \
        append = "north"; \
        break; \
      case CHORD_togethe: \
      case CHORD_S_togethe: \
        append = "together"; \
        break; \
      case CHORD_next: \
      case CHORD_S_next: \
        append = "next"; \
        break; \
      case CHORD_white: \
      case CHORD_S_white: \
        append = "white"; \
        break; \
      case CHORD_childre: \
      case CHORD_S_childre: \
        append = "children"; \
        break; \
      case CHORD_got: \
      case CHORD_S_got: \
        append = "got"; \
        break; \
      case CHORD_walk: \
      case CHORD_S_walk: \
        append = "walk"; \
        break; \
      case CHORD_example: \
      case CHORD_S_example: \
        append = "example"; \
        break; \
      case CHORD_always: \
      case CHORD_S_always: \
        append = "always"; \
        break; \
      case CHORD_music: \
      case CHORD_S_music: \
        append = "music"; \
        break; \
      case CHORD_mark: \
      case CHORD_S_mark: \
        append = "mark"; \
        break; \
      case CHORD_often: \
      case CHORD_S_often: \
        append = "often"; \
        break; \
      case CHORD_letter: \
      case CHORD_S_letter: \
        append = "letter"; \
        break; \
      case CHORD_until: \
      case CHORD_S_until: \
        append = "until"; \
        break; \
      case CHORD_mile: \
      case CHORD_S_mile: \
        append = "mile"; \
        break; \
      case CHORD_river: \
      case CHORD_S_river: \
        append = "river"; \
        break; \
      case CHORD_car: \
      case CHORD_S_car: \
        append = "car"; \
        break; \
      case CHORD_feet: \
      case CHORD_S_feet: \
        append = "feet"; \
        break; \
      case CHORD_care: \
      case CHORD_S_care: \
        append = "care"; \
        break; \
      case CHORD_second: \
      case CHORD_S_second: \
        append = "second"; \
        break; \
      case CHORD_carry: \
      case CHORD_S_carry: \
        append = "carry"; \
        break; \
      case CHORD_science: \
      case CHORD_S_science: \
        append = "science"; \
        break; \
      case CHORD_eat: \
      case CHORD_S_eat: \
        append = "eat"; \
        break; \
      case CHORD_friend: \
      case CHORD_S_friend: \
        append = "friend"; \
        break; \
      case CHORD_began: \
      case CHORD_S_began: \
        append = "began"; \
        break; \
      case CHORD_idea: \
      case CHORD_S_idea: \
        append = "idea"; \
        break; \
      case CHORD_fish: \
      case CHORD_S_fish: \
        append = "fish"; \
        break; \
      case CHORD_mountai: \
      case CHORD_S_mountai: \
        append = "mountain"; \
        break; \
      case CHORD_stop: \
      case CHORD_S_stop: \
        append = "stop"; \
        break; \
      case CHORD_once: \
      case CHORD_S_once: \
        append = "once"; \
        break; \
      case CHORD_base: \
      case CHORD_S_base: \
        append = "base"; \
        break; \
      case CHORD_horse: \
      case CHORD_S_horse: \
        append = "horse"; \
        break; \
      case CHORD_cut: \
      case CHORD_S_cut: \
        append = "cut"; \
        break; \
      case CHORD_sure: \
      case CHORD_S_sure: \
        append = "sure"; \
        break; \
      case CHORD_watch: \
      case CHORD_S_watch: \
        append = "watch"; \
        break; \
      case CHORD_color: \
      case CHORD_S_color: \
        append = "color"; \
        break; \
      case CHORD_wood: \
      case CHORD_S_wood: \
        append = "wood"; \
        break; \
      case CHORD_main: \
      case CHORD_S_main: \
        append = "main"; \
        break; \
      case CHORD_enough: \
      case CHORD_S_enough: \
        append = "enough"; \
        break; \
      case CHORD_plain: \
      case CHORD_S_plain: \
        append = "plain"; \
        break; \
      case CHORD_girl: \
      case CHORD_S_girl: \
        append = "girl"; \
        break; \
      case CHORD_usual: \
      case CHORD_S_usual: \
        append = "usual"; \
        break; \
      case CHORD_young: \
      case CHORD_S_young: \
        append = "young"; \
        break; \
      case CHORD_ready: \
      case CHORD_S_ready: \
        append = "ready"; \
        break; \
      case CHORD_above: \
      case CHORD_S_above: \
        append = "above"; \
        break; \
      case CHORD_red: \
      case CHORD_S_red: \
        append = "red"; \
        break; \
      case CHORD_list: \
      case CHORD_S_list: \
        append = "list"; \
        break; \
      case CHORD_though: \
      case CHORD_S_though: \
        append = "though"; \
        break; \
      case CHORD_bird: \
      case CHORD_S_bird: \
        append = "bird"; \
        break; \
      case CHORD_body: \
      case CHORD_S_body: \
        append = "body"; \
        break; \
      case CHORD_family: \
      case CHORD_S_family: \
        append = "family"; \
        break; \
      case CHORD_direct: \
      case CHORD_S_direct: \
        append = "direct"; \
        break; \
      case CHORD_pose: \
      case CHORD_S_pose: \
        append = "pose"; \
        break; \
      case CHORD_song: \
      case CHORD_S_song: \
        append = "song"; \
        break; \
      case CHORD_measure: \
      case CHORD_S_measure: \
        append = "measure"; \
        break; \
      case CHORD_product: \
      case CHORD_S_product: \
        append = "product"; \
        break; \
      case CHORD_black: \
      case CHORD_S_black: \
        append = "black"; \
        break; \
      case CHORD_short: \
      case CHORD_S_short: \
        append = "short"; \
        break; \
      case CHORD_numeral: \
      case CHORD_S_numeral: \
        append = "numeral"; \
        break; \
      case CHORD_class: \
      case CHORD_S_class: \
        append = "class"; \
        break; \
      case CHORD_wind: \
      case CHORD_S_wind: \
        append = "wind"; \
        break; \
      case CHORD_questio: \
      case CHORD_S_questio: \
        append = "question"; \
        break; \
      case CHORD_happen: \
      case CHORD_S_happen: \
        append = "happen"; \
        break; \
      case CHORD_complet: \
      case CHORD_S_complet: \
        append = "complete"; \
        break; \
      case CHORD_ship: \
      case CHORD_S_ship: \
        append = "ship"; \
        break; \
      case CHORD_half: \
      case CHORD_S_half: \
        append = "half"; \
        break; \
      case CHORD_rock: \
      case CHORD_S_rock: \
        append = "rock"; \
        break; \
      case CHORD_fire: \
      case CHORD_S_fire: \
        append = "fire"; \
        break; \
      case CHORD_south: \
      case CHORD_S_south: \
        append = "south"; \
        break; \
      case CHORD_told: \
      case CHORD_S_told: \
        append = "told"; \
        break; \
      case CHORD_knew: \
      case CHORD_S_knew: \
        append = "knew"; \
        break; \
      case CHORD_pass: \
      case CHORD_S_pass: \
        append = "pass"; \
        break; \
      case CHORD_top: \
      case CHORD_S_top: \
        append = "top"; \
        break; \
      case CHORD_whole: \
      case CHORD_S_whole: \
        append = "whole"; \
        break; \
      case CHORD_space: \
      case CHORD_S_space: \
        append = "space"; \
        break; \
      case CHORD_best: \
      case CHORD_S_best: \
        append = "best"; \
        break; \
      case CHORD_hour: \
      case CHORD_S_hour: \
        append = "hour"; \
        break; \
      case CHORD_better: \
      case CHORD_S_better: \
        append = "better"; \
        break; \
      case CHORD_true: \
      case CHORD_S_true: \
        append = "true"; \
        break; \
      case CHORD_hundred: \
      case CHORD_S_hundred: \
        append = "hundred"; \
        break; \
      case CHORD_five: \
      case CHORD_S_five: \
        append = "five"; \
        break; \
      case CHORD_six: \
      case CHORD_S_six: \
        append = "six"; \
        break; \
      case CHORD_war: \
      case CHORD_S_war: \
        append = "war"; \
        break; \
      case CHORD_lay: \
      case CHORD_S_lay: \
        append = "lay"; \
        break; \
      case CHORD_map: \
      case CHORD_S_map: \
        append = "map"; \
        break; \
      case CHORD_fly: \
      case CHORD_S_fly: \
        append = "fly"; \
        break; \
      case CHORD_fall: \
      case CHORD_S_fall: \
        append = "fall"; \
        break; \
      case CHORD_cry: \
      case CHORD_S_cry: \
        append = "cry"; \
        break; \
      case CHORD_box: \
      case CHORD_S_box: \
        append = "box"; \
        break; \
      case CHORD_noun: \
      case CHORD_S_noun: \
        append = "noun"; \
        break; \
      case CHORD_week: \
      case CHORD_S_week: \
        append = "week"; \
        break; \
      case CHORD_oh: \
      case CHORD_S_oh: \
        append = "oh"; \
        break; \
      case CHORD_free: \
      case CHORD_S_free: \
        append = "free"; \
        break; \
      case CHORD_dry: \
      case CHORD_S_dry: \
        append = "dry"; \
        break; \
      case CHORD_ago: \
      case CHORD_S_ago: \
        append = "ago"; \
        break; \
      case CHORD_ran: \
      case CHORD_S_ran: \
        append = "ran"; \
        break; \
      case CHORD_hot: \
      case CHORD_S_hot: \
        append = "hot"; \
        break; \
      case CHORD_ball: \
      case CHORD_S_ball: \
        append = "ball"; \
        break; \
      case CHORD_yet: \
      case CHORD_S_yet: \
        append = "yet"; \
        break; \
      case CHORD_am: \
      case CHORD_S_am: \
        append = "am"; \
        break; \
      case CHORD_arm: \
      case CHORD_S_arm: \
        append = "arm"; \
        break; \
      case CHORD_ice: \
      case CHORD_S_ice: \
        append = "ice"; \
        break; \
      case CHORD_matter: \
      case CHORD_S_matter: \
        append = "matter"; \
        break; \
      case CHORD_art: \
      case CHORD_S_art: \
        append = "art"; \
        break; \
      case CHORD_cell: \
      case CHORD_S_cell: \
        append = "cell"; \
        break; \
      case CHORD_summer: \
      case CHORD_S_summer: \
        append = "summer"; \
        break; \
      case CHORD_leg: \
      case CHORD_S_leg: \
        append = "leg"; \
        break; \
      case CHORD_joy: \
      case CHORD_S_joy: \
        append = "joy"; \
        break; \
      case CHORD_job: \
      case CHORD_S_job: \
        append = "job"; \
        break; \
      case CHORD_gas: \
      case CHORD_S_gas: \
        append = "gas"; \
        break; \
      case CHORD_buy: \
      case CHORD_S_buy: \
        append = "buy"; \
        break; \
      case CHORD_cook: \
      case CHORD_S_cook: \
        append = "cook"; \
        break; \
      case CHORD_hill: \
      case CHORD_S_hill: \
        append = "hill"; \
        break; \
      case CHORD_law: \
      case CHORD_S_law: \
        append = "law"; \
        break; \
      case CHORD_lie: \
      case CHORD_S_lie: \
        append = "lie"; \
        break; \
      case CHORD_son: \
      case CHORD_S_son: \
        append = "son"; \
        break; \
      case CHORD_pay: \
      case CHORD_S_pay: \
        append = "pay"; \
        break; \
      case CHORD_age: \
      case CHORD_S_age: \
        append = "age"; \
        break; \
      case CHORD_cool: \
      case CHORD_S_cool: \
        append = "cool"; \
        break; \
      case CHORD_lot: \
      case CHORD_S_lot: \
        append = "lot"; \
        break; \
      case CHORD_key: \
      case CHORD_S_key: \
        append = "key"; \
        break; \
      case CHORD_row: \
      case CHORD_S_row: \
        append = "row"; \
        break; \
      case CHORD_die: \
      case CHORD_S_die: \
        append = "die"; \
        break; \
      case CHORD_oil: \
      case CHORD_S_oil: \
        append = "oil"; \
        break; \
      case CHORD_fit: \
      case CHORD_S_fit: \
        append = "fit"; \
        break; \
      case CHORD_hit: \
      case CHORD_S_hit: \
        append = "hit"; \
        break; \
      case CHORD_rub: \
      case CHORD_S_rub: \
        append = "rub"; \
        break; \
      case CHORD_tie: \
      case CHORD_S_tie: \
        append = "tie"; \
        break; \
      case CHORD_gun: \
      case CHORD_S_gun: \
        append = "gun"; \
        break; \
      case CHORD_nine: \
      case CHORD_S_nine: \
        append = "nine"; \
        break; \
      case CHORD_thank: \
      case CHORD_S_thank: \
        append = "thank"; \
        break; \
      case CHORD_experie: \
      case CHORD_S_experie: \
        append = "experience"; \
        break; \
      case CHORD_led: \
      case CHORD_S_led: \
        append = "led"; \
        break; \
      case CHORD_win: \
      case CHORD_S_win: \
        append = "win"; \
        break; \
      case CHORD_feed: \
      case CHORD_S_feed: \
        append = "feed"; \
        break; \
      case CHORD_nor: \
      case CHORD_S_nor: \
        append = "nor"; \
        break; \
      case CHORD_fat: \
      case CHORD_S_fat: \
        append = "fat"; \
        break; \
      case CHORD_bar: \
      case CHORD_S_bar: \
        append = "bar"; \
        break; \
      case CHORD_log: \
      case CHORD_S_log: \
        append = "log"; \
        break; \
      case CHORD_hey: \
      case CHORD_S_hey: \
        append = "hey"; \
        break; \
      case CHORD_return: \
      case CHORD_S_return: \
        append = "return"; \
        break; \
      case CHORD_probabl: \
      case CHORD_S_probabl: \
        append = "probably"; \
        break; \
      case CHORD_thanks: \
      case CHORD_S_thanks: \
        append = "thanks"; \
        break; \
      case CHORD_i_ve: \
        last_chord_length = 4; \
        SEND_STRING("I've"); \
        break; \
      case CHORD_per: \
      case CHORD_S_per: \
        append = "per"; \
        break; \
      case CHORD_null: \
      case CHORD_S_null: \
        append = "null"; \
        break; \
      case CHORD_nil: \
      case CHORD_S_nil: \
        append = "nil"; \
        break; \
      case CHORD_array: \
      case CHORD_S_array: \
        append = "array"; \
        break; \
      case CHORD_sort: \
      case CHORD_S_sort: \
        append = "sort"; \
        break; \
      case CHORD_in_the: \
      case CHORD_S_in_the: \
        append = "in the"; \
        break; \
      case CHORD_of_the: \
      case CHORD_S_of_the: \
        append = "of the"; \
        break; \
      case CHORD_to_be: \
      case CHORD_S_to_be: \
        append = "to be"; \
        break; \
      case CHORD_to_the: \
      case CHORD_S_to_the: \
        append = "to the"; \
        break; \
      case CHORD_and_the: \
      case CHORD_S_and_the: \
        append = "and the"; \
        break; \
      case CHORD_and_i: \
      case CHORD_S_and_i: \
        append = "and I"; \
        break; \
      case CHORD_on_the: \
      case CHORD_S_on_the: \
        append = "on the"; \
        break; \
      case CHORD_it_is: \
      case CHORD_S_it_is: \
        append = "it is"; \
        break; \
      case CHORD_if_you: \
      case CHORD_S_if_you: \
        append = "if you"; \
        break; \
      case CHORD_the_wor: \
      case CHORD_S_the_wor: \
        append = "the world"; \
        break; \
      case CHORD_in_a: \
      case CHORD_S_in_a: \
        append = "in a"; \
        break; \
      case CHORD_the_qui: \
      case CHORD_S_the_qui: \
        if (chord_shifted || combo_index == CHORD_S_the_qui) { \
          space = false; \
          last_chord_length = 44; \
          SEND_STRING("The quick brown fox jumps over the lazy dog."); \
        } else { \
          space = false; \
          last_chord_length = 43; \
          SEND_STRING("the quick brown fox jumps over the lazy dog"); \
        } \
        break; \
      case CHORD_elberet: \
        last_chord_length = 8; \
        prev_chord_skipsentence = true; \
        space = false; \
        SEND_STRING("Elbereth"); \
        break; \
      case CHORD_http_: \
        last_chord_length = 7; \
        prev_chord_skipsentence = true; \
        space = false; \
        SEND_STRING("http://"); \
        break; \
      case CHORD_https_: \
        last_chord_length = 8; \
        prev_chord_skipsentence = true; \
        space = false; \
        SEND_STRING("https://"); \
        break; \
      case CHORD_select_: \
      case CHORD_S_select_: \
        last_chord_length = 13; \
        prev_chord_skipsentence = true; \
        if (chord_shifted || combo_index == CHORD_S_select_) { \
          SEND_STRING("SELECT * FROM"); \
        } else { \
          SEND_STRING("select * from"); \
        } \
        break; \
      case CHORD_delete_: \
      case CHORD_left_cl: \
        space = false; \
        last_chord_length = prev_chord_length; \
        scheduleTimer = true; \
        break; \
      PERSONAL_TAP_CASES \
      default: \
        space = false; \
        last_chord_length = prev_chord_length; \
        break; \
    } \
   \
    if (append != NULL) { \
      if (chord_shifted && append[0] >= 'a' && append[0] <= 'z') { \
        add_oneshot_mods(MOD_MASK_SHIFT); \
      } \
      SEND_STRING(append); \
      last_chord_length += strlen(append); \
    } \
   \
    prev_chord_space = space; \
    if (space) { \
      tap_code(KC_SPC); \
      last_chord_length++; \
    } \
   \
    if (scheduleTimer) { \
      chord_token = defer_exec(TAPPING_TERM, process_chord_hold, NULL); \
    } \
   \
    emit_virt_combo(last_chord, chord_shifted, scheduleTimer ? VIRT_CHORD_ENDED_INDETERMINATE : VIRT_CHORD_ENDED_TAP); \
   \
    set_mods(mods); \
    set_oneshot_mods(oneshot_mods); \
   \
    return; \
  }

#define CHORD_FUNC_DUP \
  uint8_t process_chord_dup(uint16_t last_chord, uint8_t last_chord_cycle) { \
    uint8_t next_chord_cycle = last_chord_cycle + 1; \
    uint8_t backspaces = 0; \
    char *append = NULL; \
    bool space = true; \
   \
    uint8_t mods = get_mods(); \
    uint8_t oneshot_mods = 0; \
    del_mods(MOD_MASK_SHIFT); \
    del_weak_mods(MOD_MASK_SHIFT); \
    del_oneshot_mods(MOD_MASK_SHIFT); \
   \
    switch(last_chord) { \
      case CHORD_have: \
      case CHORD_S_have: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "d"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ving"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_it: \
      case CHORD_S_it: \
        if (chord_shifted || last_chord == CHORD_S_it) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 3; \
              append = "Them"; \
            break; \
            case 1: \
              backspaces = 5; \
              next_chord_cycle = 0; \
              append = "It"; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 3; \
              append = "them"; \
            break; \
            case 1: \
              backspaces = 5; \
              next_chord_cycle = 0; \
              append = "it"; \
            break; \
          } \
        } \
        break; \
      case CHORD_that: \
      case CHORD_S_that: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ose"; \
          break; \
          case 1: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "at"; \
          break; \
        } \
        break; \
      case CHORD_i: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "we"; \
          break; \
          case 1: \
            backspaces = 3; \
            next_chord_cycle = 0; \
            append = "I"; \
          break; \
        } \
        break; \
      case CHORD_she: \
      case CHORD_S_she: \
        if (chord_shifted || last_chord == CHORD_S_she) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 4; \
              append = "They"; \
            break; \
            case 1: \
              backspaces = 5; \
              next_chord_cycle = 0; \
              append = "She"; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 4; \
              append = "they"; \
            break; \
            case 1: \
              backspaces = 5; \
              next_chord_cycle = 0; \
              append = "she"; \
            break; \
          } \
        } \
        break; \
      case CHORD_this: \
      case CHORD_S_this: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ese"; \
          break; \
          case 1: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "is"; \
          break; \
        } \
        break; \
      case CHORD_we: \
      case CHORD_S_we: \
        if (chord_shifted || last_chord == CHORD_S_we) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 3; \
              append = "I"; \
            break; \
            case 1: \
              backspaces = 2; \
              next_chord_cycle = 0; \
              append = "We"; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 3; \
              append = "I"; \
            break; \
            case 1: \
              backspaces = 2; \
              next_chord_cycle = 0; \
              append = "we"; \
            break; \
          } \
        } \
        break; \
      case CHORD_do: \
      case CHORD_S_do: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "id"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "oing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_one: \
      case CHORD_S_one: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_will: \
      case CHORD_S_will: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_say: \
      case CHORD_S_say: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "id"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ying"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_make: \
      case CHORD_S_make: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "de"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "king"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_more: \
      case CHORD_S_more: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "st"; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "any"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "ore"; \
          break; \
        } \
        break; \
      case CHORD_man: \
      case CHORD_S_man: \
        backspaces = 3; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "en"; \
          break; \
          case 1: \
            next_chord_cycle = 0; \
            append = "an"; \
          break; \
        } \
        break; \
      case CHORD_out: \
      case CHORD_S_out: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_other: \
      case CHORD_S_other: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_time: \
      case CHORD_S_time: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_go: \
      case CHORD_S_go: \
        if (chord_shifted || last_chord == CHORD_S_go) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 3; \
              append = "Went"; \
            break; \
            case 1: \
              backspaces = 5; \
              append = "Going"; \
            break; \
            case 2: \
              backspaces = 4; \
              next_chord_cycle = 0; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 3; \
              append = "went"; \
            break; \
            case 1: \
              backspaces = 5; \
              append = "going"; \
            break; \
            case 2: \
              backspaces = 4; \
              next_chord_cycle = 0; \
            break; \
          } \
        } \
        break; \
      case CHORD_state: \
      case CHORD_S_state: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_new: \
      case CHORD_S_new: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_year: \
      case CHORD_S_year: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_take: \
      case CHORD_S_take: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "ook"; \
          break; \
          case 1: \
            append = "aking"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_come: \
      case CHORD_S_come: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "ame"; \
          break; \
          case 1: \
            append = "oming"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_these: \
      case CHORD_S_these: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "is"; \
          break; \
          case 1: \
            backspaces = 3; \
            next_chord_cycle = 0; \
            append = "ese"; \
          break; \
        } \
        break; \
      case CHORD_know: \
      case CHORD_S_know: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ew"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "owing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_see: \
      case CHORD_S_see: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "aw"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "eeing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_use: \
      case CHORD_S_use: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_get: \
      case CHORD_S_get: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ot"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "etting"; \
          break; \
          case 2: \
            backspaces = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_like: \
      case CHORD_S_like: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_work: \
      case CHORD_S_work: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_give: \
      case CHORD_S_give: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "ave"; \
          break; \
          case 1: \
            append = "iving"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_think: \
      case CHORD_S_think: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ought"; \
          break; \
          case 1: \
            backspaces = 6; \
            append = "inking"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_most: \
      case CHORD_S_most: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "any"; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "ore"; \
          break; \
          case 2: \
            backspaces = 3; \
            next_chord_cycle = 0; \
            append = "st"; \
          break; \
        } \
        break; \
      case CHORD_find: \
      case CHORD_S_find: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ound"; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "inding"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_day: \
      case CHORD_S_day: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_way: \
      case CHORD_S_way: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_many: \
      case CHORD_S_many: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ore"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "any"; \
          break; \
        } \
        break; \
      case CHORD_look: \
      case CHORD_S_look: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_great: \
      case CHORD_S_great: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_back: \
      case CHORD_S_back: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_long: \
      case CHORD_S_long: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_well: \
      case CHORD_S_well: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_people: \
      case CHORD_S_people: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 6; \
            append = "rson"; \
          break; \
          case 2: \
            backspaces = 5; \
            next_chord_cycle = 0; \
            append = "ople"; \
          break; \
        } \
        break; \
      case CHORD_own: \
      case CHORD_S_own: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_good: \
      case CHORD_S_good: \
        if (chord_shifted || last_chord == CHORD_S_good) { \
          backspaces = 5; \
          switch(last_chord_cycle) { \
            case 0: \
              append = "Better"; \
            break; \
            case 1: \
              append = "st"; \
            break; \
            case 2: \
              next_chord_cycle = 0; \
              append = "Good"; \
            break; \
          } \
        } else { \
          backspaces = 5; \
          switch(last_chord_cycle) { \
            case 0: \
              append = "better"; \
            break; \
            case 1: \
              append = "st"; \
            break; \
            case 2: \
              next_chord_cycle = 0; \
              append = "good"; \
            break; \
          } \
        } \
        break; \
      case CHORD_those: \
      case CHORD_S_those: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "at"; \
          break; \
          case 1: \
            backspaces = 3; \
            next_chord_cycle = 0; \
            append = "ose"; \
          break; \
        } \
        break; \
      case CHORD_feel: \
      case CHORD_S_feel: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "lt"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "eling"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_seem: \
      case CHORD_S_seem: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_high: \
      case CHORD_S_high: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_place: \
      case CHORD_S_place: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_little: \
      case CHORD_S_little: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "r"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_world: \
      case CHORD_S_world: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_nation: \
      case CHORD_S_nation: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_hand: \
      case CHORD_S_hand: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_old: \
      case CHORD_S_old: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_life: \
      case CHORD_S_life: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ves"; \
          break; \
          case 1: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "fe"; \
          break; \
        } \
        break; \
      case CHORD_tell: \
      case CHORD_S_tell: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "old"; \
          break; \
          case 1: \
            append = "elling"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_write: \
      case CHORD_S_write: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "ote"; \
          break; \
          case 1: \
            append = "iting"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_become: \
      case CHORD_S_become: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "ame"; \
          break; \
          case 1: \
            append = "oming"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_show: \
      case CHORD_S_show: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_house: \
      case CHORD_S_house: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_need: \
      case CHORD_S_need: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_mean: \
      case CHORD_S_mean: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "t"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_call: \
      case CHORD_S_call: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_develop: \
      case CHORD_S_develop: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_right: \
      case CHORD_S_right: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_move: \
      case CHORD_S_move: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_thing: \
      case CHORD_S_thing: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_general: \
      case CHORD_S_general: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_school: \
      case CHORD_S_school: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_begin: \
      case CHORD_S_begin: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "an"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "inning"; \
          break; \
          case 2: \
            backspaces = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_number: \
      case CHORD_S_number: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_part: \
      case CHORD_S_part: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_turn: \
      case CHORD_S_turn: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_leave: \
      case CHORD_S_leave: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ft"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "aving"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_want: \
      case CHORD_S_want: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_point: \
      case CHORD_S_point: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_form: \
      case CHORD_S_form: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_child: \
      case CHORD_S_child: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ren"; \
          break; \
          case 1: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_few: \
      case CHORD_S_few: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_small: \
      case CHORD_S_small: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_ask: \
      case CHORD_S_ask: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_late: \
      case CHORD_S_late: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "r"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_home: \
      case CHORD_S_home: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_interes: \
      case CHORD_S_interes: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_large: \
      case CHORD_S_large: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "r"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_person: \
      case CHORD_S_person: \
        backspaces = 5; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "ople"; \
          break; \
          case 1: \
            next_chord_cycle = 0; \
            append = "rson"; \
          break; \
        } \
        break; \
      case CHORD_end: \
      case CHORD_S_end: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_open: \
      case CHORD_S_open: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_follow: \
      case CHORD_S_follow: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_present: \
      case CHORD_S_present: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_hold: \
      case CHORD_S_hold: \
        backspaces = 4; \
        switch(last_chord_cycle) { \
          case 0: \
            append = "eld"; \
          break; \
          case 1: \
            append = "olding"; \
          break; \
          case 2: \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_govern: \
      case CHORD_S_govern: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_head: \
      case CHORD_S_head: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_conside: \
      case CHORD_S_conside: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_word: \
      case CHORD_S_word: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_program: \
      case CHORD_S_program: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "med"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_problem: \
      case CHORD_S_problem: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_lead: \
      case CHORD_S_lead: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "d"; \
          break; \
          case 2: \
            backspaces = 2; \
            append = "ading"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_system: \
      case CHORD_S_system: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_set: \
      case CHORD_S_set: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ting"; \
          break; \
          case 2: \
            backspaces = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_order: \
      case CHORD_S_order: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_eye: \
      case CHORD_S_eye: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "d"; \
          break; \
          case 2: \
            backspaces = 2; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_plan: \
      case CHORD_S_plan: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ned"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_run: \
      case CHORD_S_run: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "an"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "unning"; \
          break; \
          case 3: \
            backspaces = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_keep: \
      case CHORD_S_keep: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "pt"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "eping"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_face: \
      case CHORD_S_face: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "d"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_fact: \
      case CHORD_S_fact: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_group: \
      case CHORD_S_group: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_play: \
      case CHORD_S_play: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_stand: \
      case CHORD_S_stand: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "ood"; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "anding"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_increas: \
      case CHORD_S_increas: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_early: \
      case CHORD_S_early: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "ier"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
          break; \
          case 2: \
            backspaces = 5; \
            next_chord_cycle = 0; \
            append = "y"; \
          break; \
        } \
        break; \
      case CHORD_course: \
      case CHORD_S_course: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_change: \
      case CHORD_S_change: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "d"; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 3: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "e"; \
          break; \
        } \
        break; \
      case CHORD_help: \
      case CHORD_S_help: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
          break; \
          case 2: \
            backspaces = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_line: \
      case CHORD_S_line: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_return: \
      case CHORD_S_return: \
        if (chord_shifted || last_chord == CHORD_S_return) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 1; \
              append = "s"; \
            break; \
            case 1: \
              backspaces = 2; \
              append = "ed"; \
            break; \
            case 2: \
              backspaces = 9; \
              append = "Will return"; \
            break; \
            case 3: \
              backspaces = 12; \
              next_chord_cycle = 0; \
              append = "Return"; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 1; \
              append = "s"; \
            break; \
            case 1: \
              backspaces = 2; \
              append = "ed"; \
            break; \
            case 2: \
              backspaces = 9; \
              append = "will return"; \
            break; \
            case 3: \
              backspaces = 12; \
              next_chord_cycle = 0; \
              append = "return"; \
            break; \
          } \
        } \
        break; \
      case CHORD_thanks: \
      case CHORD_S_thanks: \
        if (chord_shifted || last_chord == CHORD_S_thanks) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 2; \
              append = " you"; \
            break; \
            case 1: \
              backspaces = 5; \
              append = "s very much!"; \
            break; \
            case 2: \
              backspaces = 11; \
              next_chord_cycle = 0; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 2; \
              append = " you"; \
            break; \
            case 1: \
              backspaces = 10; \
              append = "Thanks very much!"; \
            break; \
            case 2: \
              backspaces = 18; \
              next_chord_cycle = 0; \
              append = "thanks"; \
            break; \
          } \
        } \
        break; \
      case CHORD_null: \
      case CHORD_S_null: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_nil: \
      case CHORD_S_nil: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_array: \
      case CHORD_S_array: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
          break; \
          case 1: \
            backspaces = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_sort: \
      case CHORD_S_sort: \
        if (chord_shifted || last_chord == CHORD_S_sort) { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 1; \
              append = "s"; \
            break; \
            case 1: \
              backspaces = 2; \
              append = "ed"; \
            break; \
            case 2: \
              backspaces = 7; \
              append = "Will sort"; \
            break; \
            case 3: \
              backspaces = 10; \
              next_chord_cycle = 0; \
              append = "Sort"; \
            break; \
          } \
        } else { \
          switch(last_chord_cycle) { \
            case 0: \
              backspaces = 1; \
              append = "s"; \
            break; \
            case 1: \
              backspaces = 2; \
              append = "ed"; \
            break; \
            case 2: \
              backspaces = 7; \
              append = "will sort"; \
            break; \
            case 3: \
              backspaces = 10; \
              next_chord_cycle = 0; \
              append = "sort"; \
            break; \
          } \
        } \
        break; \
      case CHORD_http_: \
        space = false; \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "s://"; \
          break; \
          case 1: \
            backspaces = 4; \
            next_chord_cycle = 0; \
            append = "://"; \
          break; \
        } \
        break; \
      case CHORD_https_: \
        space = false; \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "://"; \
          break; \
          case 1: \
            backspaces = 3; \
            next_chord_cycle = 0; \
            append = "s://"; \
          break; \
        } \
        break; \
      PERSONAL_DUP_CASES \
      default: \
        space = false; \
        break; \
    } \
   \
    for (uint8_t i = 0; i < backspaces; i++) { \
      tap_code(KC_BSPC); \
    } \
    last_chord_length -= backspaces; \
   \
    if (append != NULL) { \
      SEND_STRING(append); \
      last_chord_length += strlen(append); \
    } \
   \
    prev_chord_space = space; \
    if (space) { \
      tap_code(KC_SPC); \
      last_chord_length++; \
    } \
   \
    set_mods(mods); \
    set_oneshot_mods(oneshot_mods); \
   \
    return next_chord_cycle; \
  }

#define CHORD_FUNCS \
  CHORD_FUNC_RELEASE \
  CHORD_FUNC_HOLD \
  CHORD_FUNC_TAP \
  CHORD_FUNC_DUP
