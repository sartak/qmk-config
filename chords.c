#define COMBO_FOR_CHORD(name, ...) const uint16_t PROGMEM chord_##name[] = {__VA_ARGS__, COMBO_END};

#define CHORD_COMBO(name) [CHORD_##name] = COMBO_ACTION(chord_##name)

#include "personal.c"

#define CHORD_ENUM \
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
  CHORD_http_, \
  CHORD_https_, \
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
  PERSONAL_CHORD_ENUM

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
COMBO_FOR_CHORD(be, A_B, A_E, AT0);
COMBO_FOR_CHORD(of, A_O, A_F, AT0);
COMBO_FOR_CHORD(and, A_A, A_N, A_D);
COMBO_FOR_CHORD(a, A_A, AT0);
COMBO_FOR_CHORD(a1, A_A, AT1);
COMBO_FOR_CHORD(to, A_T, A_O, AT0);
COMBO_FOR_CHORD(in, A_I, A_N, AT0);
COMBO_FOR_CHORD(he, A_H, A_E, AT0);
COMBO_FOR_CHORD(have, A_H, A_A, A_V);
COMBO_FOR_CHORD(it, A_I, A_T, AT0);
COMBO_FOR_CHORD(that, A_T, A_H, A_A);
COMBO_FOR_CHORD(for, A_F, A_O, A_R);
COMBO_FOR_CHORD(they, A_T, A_H, A_Y);
COMBO_FOR_CHORD(i, A_I, AT0);
COMBO_FOR_CHORD(with, A_W, A_I, A_H);
COMBO_FOR_CHORD(as, A_A, A_S, AT0);
COMBO_FOR_CHORD(not, A_N, A_O, A_T);
COMBO_FOR_CHORD(on, A_O, A_N, AT0);
COMBO_FOR_CHORD(she, A_S, A_H, A_E);
COMBO_FOR_CHORD(at, A_A, A_T, AT0);
COMBO_FOR_CHORD(by, A_B, A_Y, AT0);
COMBO_FOR_CHORD(this, A_T, A_H, A_S);
COMBO_FOR_CHORD(we, A_W, A_E, AT0);
COMBO_FOR_CHORD(you, A_Y, A_O, A_U);
COMBO_FOR_CHORD(do, A_D, A_O, AT0);
COMBO_FOR_CHORD(but, A_I, A_U, A_T);
COMBO_FOR_CHORD(from, A_R, A_O, A_M);
COMBO_FOR_CHORD(or, A_O, A_R, AT0);
COMBO_FOR_CHORD(which, A_H, A_I, A_C);
COMBO_FOR_CHORD(one, A_O, A_N, A_E);
COMBO_FOR_CHORD(would, A_W, A_O, A_U);
COMBO_FOR_CHORD(all, A_A, A_L, AT0);
COMBO_FOR_CHORD(will, A_W, A_I, A_L);
COMBO_FOR_CHORD(there, A_T, A_H, A_R);
COMBO_FOR_CHORD(say, A_S, A_A, A_Y);
COMBO_FOR_CHORD(who, A_W, A_H, A_O);
COMBO_FOR_CHORD(make, A_M, A_A, A_K);
COMBO_FOR_CHORD(when, A_W, A_H, A_E);
COMBO_FOR_CHORD(can, A_C, A_A, A_N);
COMBO_FOR_CHORD(more, A_M, A_R, A_E);
COMBO_FOR_CHORD(if, A_I, A_F, AT0);
COMBO_FOR_CHORD(no, A_N, A_E, AT0);
COMBO_FOR_CHORD(man, A_M, A_A, A_N);
COMBO_FOR_CHORD(out, A_O, A_U, A_T);
COMBO_FOR_CHORD(other, A_O, A_T, A_R);
COMBO_FOR_CHORD(so, A_S, A_O, AT0);
COMBO_FOR_CHORD(what, A_W, A_H, A_T);
COMBO_FOR_CHORD(time, A_T, A_M, A_E);
COMBO_FOR_CHORD(up, A_U, A_P, AT0);
COMBO_FOR_CHORD(go, A_G, A_O, AT0);
COMBO_FOR_CHORD(about, A_B, A_O, A_U);
COMBO_FOR_CHORD(than, A_T, A_A, A_N);
COMBO_FOR_CHORD(into, A_I, A_N, A_O);
COMBO_FOR_CHORD(could, A_C, A_O, A_U);
COMBO_FOR_CHORD(state, A_S, A_T, A_A);
COMBO_FOR_CHORD(only, A_O, A_L, A_Y);
COMBO_FOR_CHORD(new, A_N, A_E, A_W);
COMBO_FOR_CHORD(year, A_Y, A_E, A_A);
COMBO_FOR_CHORD(some, A_S, A_O, A_M);
COMBO_FOR_CHORD(take, A_A, A_K, A_E);
COMBO_FOR_CHORD(come, A_C, A_O, A_M);
COMBO_FOR_CHORD(these, A_N, A_H, A_S);
COMBO_FOR_CHORD(know, A_K, A_N, A_O);
COMBO_FOR_CHORD(see, A_S, A_E, A_K);
COMBO_FOR_CHORD(use, A_U, A_S, A_E);
COMBO_FOR_CHORD(get, A_G, A_E, A_T);
COMBO_FOR_CHORD(like, A_I, A_E, AT0);
COMBO_FOR_CHORD(then, A_T, A_E, A_N);
COMBO_FOR_CHORD(first, A_F, A_R, A_S);
COMBO_FOR_CHORD(any, A_A, A_N, A_Y);
COMBO_FOR_CHORD(work, A_O, A_R, A_K);
COMBO_FOR_CHORD(now, A_N, A_O, A_W);
COMBO_FOR_CHORD(may, A_M, A_A, A_Y);
COMBO_FOR_CHORD(such, A_S, A_C, A_H);
COMBO_FOR_CHORD(give, A_G, A_I, A_V);
COMBO_FOR_CHORD(over, A_O, A_V, A_R);
COMBO_FOR_CHORD(think, A_H, A_I, A_K);
COMBO_FOR_CHORD(most, A_M, A_O, A_T);
COMBO_FOR_CHORD(even, A_E, A_V, A_N);
COMBO_FOR_CHORD(find, A_F, A_I, A_D);
COMBO_FOR_CHORD(day, A_A, A_Y, AT0);
COMBO_FOR_CHORD(also, A_A, A_L, A_O);
COMBO_FOR_CHORD(after, A_F, A_T, A_R);
COMBO_FOR_CHORD(way, A_W, A_A, A_Y);
COMBO_FOR_CHORD(many, A_M, A_N, A_Y);
COMBO_FOR_CHORD(must, A_M, A_U, A_T);
COMBO_FOR_CHORD(look, A_L, A_O, A_K);
COMBO_FOR_CHORD(before, A_B, A_F, A_O);
COMBO_FOR_CHORD(great, A_G, A_R, A_E);
COMBO_FOR_CHORD(back, A_B, A_A, A_C);
COMBO_FOR_CHORD(through, A_H, A_R, A_G);
COMBO_FOR_CHORD(long, A_L, A_O, A_N);
COMBO_FOR_CHORD(where, A_W, A_H, A_R);
COMBO_FOR_CHORD(much, A_M, A_U, A_C);
COMBO_FOR_CHORD(should, A_S, A_O, A_U);
COMBO_FOR_CHORD(well, A_W, A_E, A_L);
COMBO_FOR_CHORD(people, A_P, A_E, A_L);
COMBO_FOR_CHORD(down, A_D, A_W, A_N);
COMBO_FOR_CHORD(own, A_O, A_W, A_F);
COMBO_FOR_CHORD(just, A_U, A_S, A_T);
COMBO_FOR_CHORD(because, A_B, A_E, A_A);
COMBO_FOR_CHORD(good, A_V, A_O, A_D);
COMBO_FOR_CHORD(each, A_A, A_C, A_H);
COMBO_FOR_CHORD(those, A_T, A_O, A_S);
COMBO_FOR_CHORD(feel, A_F, A_E, A_L);
COMBO_FOR_CHORD(seem, A_S, A_E, A_M);
COMBO_FOR_CHORD(how, A_H, A_O, A_U);
COMBO_FOR_CHORD(high, A_H, A_I, A_G);
COMBO_FOR_CHORD(too, A_T, A_O, A_F);
COMBO_FOR_CHORD(place, A_P, A_C, A_E);
COMBO_FOR_CHORD(little, A_L, A_I, A_T);
COMBO_FOR_CHORD(world, A_W, A_L, A_D);
COMBO_FOR_CHORD(very, A_V, A_E, A_R);
COMBO_FOR_CHORD(still, A_S, A_T, A_L);
COMBO_FOR_CHORD(nation, A_A, A_T, A_I);
COMBO_FOR_CHORD(hand, A_H, A_N, A_D);
COMBO_FOR_CHORD(old, A_O, A_L, A_D);
COMBO_FOR_CHORD(life, A_L, A_I, A_F);
COMBO_FOR_CHORD(tell, A_T, A_E, A_L);
COMBO_FOR_CHORD(write, A_R, A_I, A_E);
COMBO_FOR_CHORD(become, A_C, A_M, A_E);
COMBO_FOR_CHORD(here, A_H, A_R, AT0);
COMBO_FOR_CHORD(show, A_S, A_H, AT0);
COMBO_FOR_CHORD(house, A_O, A_S, A_E);
COMBO_FOR_CHORD(both, A_B, A_O, A_H);
COMBO_FOR_CHORD(between, A_B, A_E, A_N);
COMBO_FOR_CHORD(need, A_T, A_N, A_D);
COMBO_FOR_CHORD(mean, A_M, A_N, AT0);
COMBO_FOR_CHORD(call, A_C, A_A, A_L);
COMBO_FOR_CHORD(develop, A_D, A_E, A_V);
COMBO_FOR_CHORD(under, A_U, A_N, A_D);
COMBO_FOR_CHORD(last, A_L, A_A, A_S);
COMBO_FOR_CHORD(right, A_R, A_I, A_T);
COMBO_FOR_CHORD(move, A_M, A_V, A_E);
COMBO_FOR_CHORD(thing, A_T, A_I, A_N);
COMBO_FOR_CHORD(general, A_G, A_E, A_N);
COMBO_FOR_CHORD(school, A_S, A_H, A_L);
COMBO_FOR_CHORD(never, A_N, A_V, A_R);
COMBO_FOR_CHORD(same, A_S, A_A, A_M);
COMBO_FOR_CHORD(another, A_A, A_H, A_R);
COMBO_FOR_CHORD(begin, A_E, A_G, A_I);
COMBO_FOR_CHORD(while, A_H, A_I, A_E);
COMBO_FOR_CHORD(number, A_N, A_E, A_R);
COMBO_FOR_CHORD(part, A_P, A_A, A_R);
COMBO_FOR_CHORD(turn, A_T, A_U, A_N);
COMBO_FOR_CHORD(real, A_E, A_A, A_L);
COMBO_FOR_CHORD(leave, A_E, A_A, A_V);
COMBO_FOR_CHORD(might, A_M, A_I, A_T);
COMBO_FOR_CHORD(want, A_W, A_A, A_T);
COMBO_FOR_CHORD(point, A_P, A_O, A_I);
COMBO_FOR_CHORD(form, A_F, A_R, AT0);
COMBO_FOR_CHORD(off, A_O, A_F, A_K);
COMBO_FOR_CHORD(child, A_C, A_I, A_D);
COMBO_FOR_CHORD(few, A_F, A_E, A_W);
COMBO_FOR_CHORD(small, A_M, A_A, A_L);
COMBO_FOR_CHORD(since, A_S, A_I, A_E);
COMBO_FOR_CHORD(against, A_A, A_G, A_N);
COMBO_FOR_CHORD(ask, A_A, A_S, A_K);
COMBO_FOR_CHORD(late, A_L, A_A, A_T);
COMBO_FOR_CHORD(home, A_G, A_M, A_E);
COMBO_FOR_CHORD(interes, A_I, A_N, A_R);
COMBO_FOR_CHORD(large, A_A, A_R, A_G);
COMBO_FOR_CHORD(person, A_P, A_S, A_N);
COMBO_FOR_CHORD(end, A_E, A_N, A_D);
COMBO_FOR_CHORD(open, A_O, A_P, A_N);
COMBO_FOR_CHORD(public, A_P, A_L, A_I);
COMBO_FOR_CHORD(follow, A_F, A_O, A_L);
COMBO_FOR_CHORD(during, A_D, A_R, A_N);
COMBO_FOR_CHORD(present, A_R, A_N, A_T);
COMBO_FOR_CHORD(without, A_I, A_T, A_O);
COMBO_FOR_CHORD(again, A_A, A_G, A_I);
COMBO_FOR_CHORD(hold, A_H, A_D, AT0);
COMBO_FOR_CHORD(govern, A_G, A_R, A_N);
COMBO_FOR_CHORD(around, A_A, A_R, A_D);
COMBO_FOR_CHORD(possibl, A_P, A_S, A_E);
COMBO_FOR_CHORD(head, A_H, A_E, A_D);
COMBO_FOR_CHORD(conside, A_C, A_N, A_D);
COMBO_FOR_CHORD(word, A_W, A_R, A_D);
COMBO_FOR_CHORD(program, A_R, A_G, A_M);
COMBO_FOR_CHORD(problem, A_L, A_E, A_M);
COMBO_FOR_CHORD(however, A_H, A_E, A_V);
COMBO_FOR_CHORD(lead, A_E, A_A, A_D);
COMBO_FOR_CHORD(system, A_S, A_Y, A_T);
COMBO_FOR_CHORD(set, A_S, A_E, A_T);
COMBO_FOR_CHORD(order, A_O, A_R, A_D);
COMBO_FOR_CHORD(eye, A_E, A_Y, A_X);
COMBO_FOR_CHORD(plan, A_P, A_L, A_N);
COMBO_FOR_CHORD(run, A_R, A_U, A_N);
COMBO_FOR_CHORD(keep, A_E, A_P, AT0);
COMBO_FOR_CHORD(face, A_F, A_A, A_C);
COMBO_FOR_CHORD(fact, A_F, A_C, A_T);
COMBO_FOR_CHORD(group, A_G, A_O, A_U);
COMBO_FOR_CHORD(play, A_P, A_L, A_Y);
COMBO_FOR_CHORD(stand, A_S, A_N, A_D);
COMBO_FOR_CHORD(increas, A_I, A_N, A_C);
COMBO_FOR_CHORD(early, A_E, A_L, A_Y);
COMBO_FOR_CHORD(course, A_O, A_R, A_S);
COMBO_FOR_CHORD(change, A_C, A_H, A_E);
COMBO_FOR_CHORD(help, A_H, A_L, A_P);
COMBO_FOR_CHORD(line, A_L, A_N, A_E);
COMBO_FOR_CHORD(his, A_H, A_I, A_S);
COMBO_FOR_CHORD(her, A_H, A_E, A_R);
COMBO_FOR_CHORD(an, A_A, A_N, AT0);
COMBO_FOR_CHORD(my, A_M, A_Y, AT0);
COMBO_FOR_CHORD(their, A_H, A_I, A_R);
COMBO_FOR_CHORD(me, A_M, A_E, AT0);
COMBO_FOR_CHORD(him, A_B, A_I, A_M);
COMBO_FOR_CHORD(your, A_Y, A_O, A_R);
COMBO_FOR_CHORD(its, A_I, A_T, A_S);
COMBO_FOR_CHORD(two, A_T, A_W, A_O);
COMBO_FOR_CHORD(our, A_O, A_U, A_R);
COMBO_FOR_CHORD(us, A_U, A_S, AT0);
COMBO_FOR_CHORD(is, A_I, A_S, AT0);
COMBO_FOR_CHORD(was, A_W, A_A, A_S);
COMBO_FOR_CHORD(are, A_A, A_R, A_E);
COMBO_FOR_CHORD(had, A_H, A_A, A_D);
COMBO_FOR_CHORD(were, A_W, A_E, A_R);
COMBO_FOR_CHORD(said, A_S, A_A, A_I);
COMBO_FOR_CHORD(has, A_H, A_A, A_S);
COMBO_FOR_CHORD(sound, A_S, A_U, A_D);
COMBO_FOR_CHORD(water, A_W, A_T, A_R);
COMBO_FOR_CHORD(side, A_S, A_I, A_D);
COMBO_FOR_CHORD(made, A_M, A_D, A_E);
COMBO_FOR_CHORD(live, A_L, A_I, A_V);
COMBO_FOR_CHORD(round, A_O, A_U, A_D);
COMBO_FOR_CHORD(came, A_C, A_A, A_M);
COMBO_FOR_CHORD(every, A_E, A_R, A_Y);
COMBO_FOR_CHORD(name, A_N, A_A, A_E);
COMBO_FOR_CHORD(sentenc, A_S, A_E, A_N);
COMBO_FOR_CHORD(low, A_L, A_O, A_W);
COMBO_FOR_CHORD(differ, A_D, A_F, A_R);
COMBO_FOR_CHORD(cause, A_C, A_A, A_S);
COMBO_FOR_CHORD(boy, A_B, A_O, A_Y);
COMBO_FOR_CHORD(does, A_D, A_E, A_S);
COMBO_FOR_CHORD(air, A_A, A_I, A_R);
COMBO_FOR_CHORD(put, A_P, A_U, A_T);
COMBO_FOR_CHORD(port, A_P, A_O, A_R);
COMBO_FOR_CHORD(spell, A_S, A_P, A_L);
COMBO_FOR_CHORD(land, A_L, A_N, A_D);
COMBO_FOR_CHORD(big, A_B, A_I, A_G);
COMBO_FOR_CHORD(act, A_A, A_C, A_T);
COMBO_FOR_CHORD(why, A_W, A_H, A_Y);
COMBO_FOR_CHORD(men, A_M, A_E, A_N);
COMBO_FOR_CHORD(went, A_W, A_N, A_T);
COMBO_FOR_CHORD(light, A_L, A_I, A_G);
COMBO_FOR_CHORD(kind, A_I, A_N, A_D);
COMBO_FOR_CHORD(picture, A_P, A_I, A_C);
COMBO_FOR_CHORD(try, A_T, A_R, A_Y);
COMBO_FOR_CHORD(animal, A_A, A_N, A_L);
COMBO_FOR_CHORD(mother, A_M, A_T, A_R);
COMBO_FOR_CHORD(build, A_B, A_U, A_L);
COMBO_FOR_CHORD(self, A_S, A_L, A_F);
COMBO_FOR_CHORD(earth, A_E, A_A, A_H);
COMBO_FOR_CHORD(father, A_F, A_A, A_E);
COMBO_FOR_CHORD(page, A_P, A_A, A_E);
COMBO_FOR_CHORD(country, A_C, A_U, A_Y);
COMBO_FOR_CHORD(found, A_F, A_U, A_D);
COMBO_FOR_CHORD(answer, A_A, A_N, A_S);
COMBO_FOR_CHORD(grow, A_G, A_R, A_W);
COMBO_FOR_CHORD(study, A_T, A_U, A_Y);
COMBO_FOR_CHORD(learn, A_L, A_E, A_R);
COMBO_FOR_CHORD(plant, A_P, A_L, A_T);
COMBO_FOR_CHORD(cover, A_C, A_O, A_V);
COMBO_FOR_CHORD(food, A_F, A_O, A_D);
COMBO_FOR_CHORD(sun, A_S, A_U, A_N);
COMBO_FOR_CHORD(four, A_F, A_O, A_U);
COMBO_FOR_CHORD(thought, A_T, A_H, A_U);
COMBO_FOR_CHORD(city, A_C, A_T, A_Y);
COMBO_FOR_CHORD(cross, A_C, A_R, A_S);
COMBO_FOR_CHORD(hard, A_H, A_R, A_D);
COMBO_FOR_CHORD(far, A_F, A_A, A_R);
COMBO_FOR_CHORD(sea, A_S, A_E, A_A);
COMBO_FOR_CHORD(draw, A_D, A_A, A_W);
COMBO_FOR_CHORD(left, A_L, A_F, A_T);
COMBO_FOR_CHORD(press, A_P, A_R, A_S);
COMBO_FOR_CHORD(close, A_C, A_O, A_S);
COMBO_FOR_CHORD(night, A_N, A_G, A_H);
COMBO_FOR_CHORD(north, A_N, A_R, A_H);
COMBO_FOR_CHORD(togethe, A_O, A_G, A_H);
COMBO_FOR_CHORD(next, A_E, A_X, A_T);
COMBO_FOR_CHORD(white, A_W, A_I, A_E);
COMBO_FOR_CHORD(childre, A_H, A_I, A_D);
COMBO_FOR_CHORD(got, A_G, A_O, A_T);
COMBO_FOR_CHORD(walk, A_W, A_A, AT0);
COMBO_FOR_CHORD(example, A_M, A_P, A_L);
COMBO_FOR_CHORD(always, A_L, A_W, A_Y);
COMBO_FOR_CHORD(music, A_M, A_S, A_C);
COMBO_FOR_CHORD(mark, A_M, A_R, A_K);
COMBO_FOR_CHORD(often, A_O, A_T, A_E);
COMBO_FOR_CHORD(letter, A_L, A_T, A_R);
COMBO_FOR_CHORD(until, A_N, A_T, A_L);
COMBO_FOR_CHORD(mile, A_M, A_I, A_E);
COMBO_FOR_CHORD(river, A_R, A_I, A_V);
COMBO_FOR_CHORD(car, A_C, A_A, A_R);
COMBO_FOR_CHORD(feet, A_F, A_E, A_T);
COMBO_FOR_CHORD(care, A_C, A_R, A_E);
COMBO_FOR_CHORD(second, A_S, A_E, A_C);
COMBO_FOR_CHORD(carry, A_C, A_A, A_Y);
COMBO_FOR_CHORD(science, A_S, A_C, A_I);
COMBO_FOR_CHORD(eat, A_E, A_A, A_T);
COMBO_FOR_CHORD(friend, A_R, A_I, A_D);
COMBO_FOR_CHORD(began, A_B, A_G, A_N);
COMBO_FOR_CHORD(idea, A_I, A_D, A_A);
COMBO_FOR_CHORD(fish, A_F, A_I, A_S);
COMBO_FOR_CHORD(mountai, A_O, A_A, A_T);
COMBO_FOR_CHORD(stop, A_S, A_T, A_P);
COMBO_FOR_CHORD(once, A_N, A_C, A_E);
COMBO_FOR_CHORD(base, A_B, A_A, A_S);
COMBO_FOR_CHORD(horse, A_H, A_R, A_S);
COMBO_FOR_CHORD(cut, A_C, A_U, A_T);
COMBO_FOR_CHORD(sure, A_S, A_U, A_R);
COMBO_FOR_CHORD(watch, A_W, A_A, A_H);
COMBO_FOR_CHORD(color, A_C, A_O, A_R);
COMBO_FOR_CHORD(wood, A_W, A_O, A_D);
COMBO_FOR_CHORD(main, A_M, A_I, A_N);
COMBO_FOR_CHORD(enough, A_N, A_O, A_G);
COMBO_FOR_CHORD(plain, A_P, A_A, A_I);
COMBO_FOR_CHORD(girl, A_G, A_I, A_R);
COMBO_FOR_CHORD(usual, A_U, A_S, A_L);
COMBO_FOR_CHORD(young, A_Y, A_O, A_G);
COMBO_FOR_CHORD(ready, A_E, A_D, A_Y);
COMBO_FOR_CHORD(above, A_A, A_B, A_V);
COMBO_FOR_CHORD(red, A_R, A_E, A_D);
COMBO_FOR_CHORD(list, A_L, A_I, A_S);
COMBO_FOR_CHORD(though, A_H, A_U, A_G);
COMBO_FOR_CHORD(bird, A_B, A_I, A_R);
COMBO_FOR_CHORD(body, A_O, A_D, A_Y);
COMBO_FOR_CHORD(family, A_F, A_A, A_Y);
COMBO_FOR_CHORD(direct, A_D, A_R, A_C);
COMBO_FOR_CHORD(pose, A_P, A_O, A_S);
COMBO_FOR_CHORD(song, A_S, A_N, A_G);
COMBO_FOR_CHORD(measure, A_A, A_S, A_U);
COMBO_FOR_CHORD(product, A_R, A_D, A_U);
COMBO_FOR_CHORD(black, A_B, A_L, A_C);
COMBO_FOR_CHORD(short, A_H, A_O, A_R);
COMBO_FOR_CHORD(numeral, A_U, A_M, A_A);
COMBO_FOR_CHORD(class, A_C, A_L, A_S);
COMBO_FOR_CHORD(wind, A_W, A_I, A_D);
COMBO_FOR_CHORD(questio, A_Q, A_E, A_N);
COMBO_FOR_CHORD(happen, A_H, A_A, A_P);
COMBO_FOR_CHORD(complet, A_C, A_M, A_T);
COMBO_FOR_CHORD(ship, A_S, A_H, A_P);
COMBO_FOR_CHORD(half, A_H, A_A, A_L);
COMBO_FOR_CHORD(rock, A_R, A_C, A_K);
COMBO_FOR_CHORD(fire, A_F, A_I, A_R);
COMBO_FOR_CHORD(south, A_S, A_U, A_H);
COMBO_FOR_CHORD(told, A_T, A_L, A_D);
COMBO_FOR_CHORD(knew, A_K, A_N, A_E);
COMBO_FOR_CHORD(pass, A_P, A_A, A_S);
COMBO_FOR_CHORD(top, A_T, A_O, A_P);
COMBO_FOR_CHORD(whole, A_W, A_H, A_L);
COMBO_FOR_CHORD(space, A_S, A_P, A_C);
COMBO_FOR_CHORD(best, A_B, A_E, A_S);
COMBO_FOR_CHORD(hour, A_H, A_U, A_R);
COMBO_FOR_CHORD(better, A_B, A_E, A_R);
COMBO_FOR_CHORD(true, A_T, A_R, A_U);
COMBO_FOR_CHORD(hundred, A_H, A_U, A_E);
COMBO_FOR_CHORD(five, A_F, A_I, A_V);
COMBO_FOR_CHORD(six, A_S, A_I, A_X);
COMBO_FOR_CHORD(war, A_W, A_A, A_R);
COMBO_FOR_CHORD(lay, A_L, A_A, A_Y);
COMBO_FOR_CHORD(map, A_M, A_A, A_P);
COMBO_FOR_CHORD(fly, A_F, A_L, A_Y);
COMBO_FOR_CHORD(fall, A_F, A_A, A_L);
COMBO_FOR_CHORD(cry, A_C, A_R, A_Y);
COMBO_FOR_CHORD(box, A_B, A_O, A_X);
COMBO_FOR_CHORD(noun, A_N, A_O, A_U);
COMBO_FOR_CHORD(week, A_W, A_E, A_K);
COMBO_FOR_CHORD(oh, A_O, A_H, AT0);
COMBO_FOR_CHORD(free, A_F, A_R, A_E);
COMBO_FOR_CHORD(dry, A_D, A_R, A_Y);
COMBO_FOR_CHORD(ago, A_A, A_G, A_O);
COMBO_FOR_CHORD(ran, A_R, A_A, A_N);
COMBO_FOR_CHORD(hot, A_H, A_O, A_T);
COMBO_FOR_CHORD(ball, A_B, A_A, A_L);
COMBO_FOR_CHORD(yet, A_Y, A_E, A_T);
COMBO_FOR_CHORD(am, A_A, A_M, AT0);
COMBO_FOR_CHORD(arm, A_A, A_R, A_M);
COMBO_FOR_CHORD(ice, A_I, A_C, A_E);
COMBO_FOR_CHORD(matter, A_M, A_A, A_T);
COMBO_FOR_CHORD(art, A_A, A_R, A_T);
COMBO_FOR_CHORD(cell, A_C, A_E, A_L);
COMBO_FOR_CHORD(summer, A_S, A_M, A_R);
COMBO_FOR_CHORD(leg, A_L, A_E, A_G);
COMBO_FOR_CHORD(joy, A_J, A_O, A_Y);
COMBO_FOR_CHORD(job, A_J, A_O, A_B);
COMBO_FOR_CHORD(gas, A_G, A_A, A_S);
COMBO_FOR_CHORD(buy, A_B, A_U, A_Y);
COMBO_FOR_CHORD(cook, A_C, A_O, A_K);
COMBO_FOR_CHORD(hill, A_H, A_I, A_L);
COMBO_FOR_CHORD(law, A_L, A_A, A_W);
COMBO_FOR_CHORD(lie, A_L, A_I, A_E);
COMBO_FOR_CHORD(son, A_S, A_O, A_N);
COMBO_FOR_CHORD(pay, A_P, A_A, A_Y);
COMBO_FOR_CHORD(age, A_A, A_G, A_E);
COMBO_FOR_CHORD(cool, A_C, A_O, A_L);
COMBO_FOR_CHORD(lot, A_L, A_O, A_T);
COMBO_FOR_CHORD(key, A_K, A_E, A_Y);
COMBO_FOR_CHORD(row, A_R, A_O, A_W);
COMBO_FOR_CHORD(die, A_D, A_I, A_E);
COMBO_FOR_CHORD(oil, A_O, A_I, A_L);
COMBO_FOR_CHORD(fit, A_F, A_I, A_T);
COMBO_FOR_CHORD(hit, A_H, A_I, A_T);
COMBO_FOR_CHORD(rub, A_R, A_U, A_B);
COMBO_FOR_CHORD(tie, A_T, A_I, A_E);
COMBO_FOR_CHORD(gun, A_G, A_U, A_N);
COMBO_FOR_CHORD(nine, A_N, A_I, A_E);
COMBO_FOR_CHORD(thank, A_H, A_A, A_K);
COMBO_FOR_CHORD(experie, A_E, A_X, A_P);
COMBO_FOR_CHORD(led, A_L, A_E, A_D);
COMBO_FOR_CHORD(win, A_W, A_I, A_N);
COMBO_FOR_CHORD(feed, A_F, A_E, A_D);
COMBO_FOR_CHORD(nor, A_N, A_O, A_R);
COMBO_FOR_CHORD(fat, A_F, A_A, A_T);
COMBO_FOR_CHORD(bar, A_B, A_A, A_R);
COMBO_FOR_CHORD(log, A_L, A_O, A_G);
COMBO_FOR_CHORD(hey, A_H, A_E, A_Y);
COMBO_FOR_CHORD(return, A_R, A_E, A_T);
COMBO_FOR_CHORD(probabl, A_P, A_B, A_L, A_Y);
COMBO_FOR_CHORD(thanks, A_T, A_N, A_S);
COMBO_FOR_CHORD(i_ve, A_I, A_V, A_E);
COMBO_FOR_CHORD(per, A_P, A_E, A_R);
COMBO_FOR_CHORD(null, A_N, A_U, A_L);
COMBO_FOR_CHORD(nil, A_N, A_I, A_L);
COMBO_FOR_CHORD(array, A_A, A_R, A_Y);
COMBO_FOR_CHORD(sort, A_S, A_R, A_T);
COMBO_FOR_CHORD(http_, A_H, A_T, A_P);
COMBO_FOR_CHORD(https_, A_H, A_T, A_P, A_S);
COMBO_FOR_CHORD(in_the, A_I, A_N, A_T, A_E);
COMBO_FOR_CHORD(of_the, A_O, A_T, A_E, AT0);
COMBO_FOR_CHORD(to_be, A_O, A_B, A_E, AT0);
COMBO_FOR_CHORD(to_the, A_T, A_H, A_E, AT0);
COMBO_FOR_CHORD(and_the, A_A, A_N, A_T, A_H);
COMBO_FOR_CHORD(and_i, A_A, A_N, A_D, A_I);
COMBO_FOR_CHORD(on_the, A_O, A_N, A_H, A_E);
COMBO_FOR_CHORD(it_is, A_I, A_T, A_S, AT0);
COMBO_FOR_CHORD(if_you, A_F, A_Y, A_O, A_U);
COMBO_FOR_CHORD(the_wor, A_T, A_H, A_E, A_W);
COMBO_FOR_CHORD(in_a, A_I, A_N, A_A, AT0);
COMBO_FOR_CHORD(the_qui, A_B, A_Q, A_X, A_q);
COMBO_FOR_CHORD(elberet, A_E, A_L, A_B, A_H);

#define CHORD_COMBOS \
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
  CHORD_COMBO(be), \
  CHORD_COMBO(of), \
  CHORD_COMBO(and), \
  CHORD_COMBO(a), \
  CHORD_COMBO(a1), \
  CHORD_COMBO(to), \
  CHORD_COMBO(in), \
  CHORD_COMBO(he), \
  CHORD_COMBO(have), \
  CHORD_COMBO(it), \
  CHORD_COMBO(that), \
  CHORD_COMBO(for), \
  CHORD_COMBO(they), \
  CHORD_COMBO(i), \
  CHORD_COMBO(with), \
  CHORD_COMBO(as), \
  CHORD_COMBO(not), \
  CHORD_COMBO(on), \
  CHORD_COMBO(she), \
  CHORD_COMBO(at), \
  CHORD_COMBO(by), \
  CHORD_COMBO(this), \
  CHORD_COMBO(we), \
  CHORD_COMBO(you), \
  CHORD_COMBO(do), \
  CHORD_COMBO(but), \
  CHORD_COMBO(from), \
  CHORD_COMBO(or), \
  CHORD_COMBO(which), \
  CHORD_COMBO(one), \
  CHORD_COMBO(would), \
  CHORD_COMBO(all), \
  CHORD_COMBO(will), \
  CHORD_COMBO(there), \
  CHORD_COMBO(say), \
  CHORD_COMBO(who), \
  CHORD_COMBO(make), \
  CHORD_COMBO(when), \
  CHORD_COMBO(can), \
  CHORD_COMBO(more), \
  CHORD_COMBO(if), \
  CHORD_COMBO(no), \
  CHORD_COMBO(man), \
  CHORD_COMBO(out), \
  CHORD_COMBO(other), \
  CHORD_COMBO(so), \
  CHORD_COMBO(what), \
  CHORD_COMBO(time), \
  CHORD_COMBO(up), \
  CHORD_COMBO(go), \
  CHORD_COMBO(about), \
  CHORD_COMBO(than), \
  CHORD_COMBO(into), \
  CHORD_COMBO(could), \
  CHORD_COMBO(state), \
  CHORD_COMBO(only), \
  CHORD_COMBO(new), \
  CHORD_COMBO(year), \
  CHORD_COMBO(some), \
  CHORD_COMBO(take), \
  CHORD_COMBO(come), \
  CHORD_COMBO(these), \
  CHORD_COMBO(know), \
  CHORD_COMBO(see), \
  CHORD_COMBO(use), \
  CHORD_COMBO(get), \
  CHORD_COMBO(like), \
  CHORD_COMBO(then), \
  CHORD_COMBO(first), \
  CHORD_COMBO(any), \
  CHORD_COMBO(work), \
  CHORD_COMBO(now), \
  CHORD_COMBO(may), \
  CHORD_COMBO(such), \
  CHORD_COMBO(give), \
  CHORD_COMBO(over), \
  CHORD_COMBO(think), \
  CHORD_COMBO(most), \
  CHORD_COMBO(even), \
  CHORD_COMBO(find), \
  CHORD_COMBO(day), \
  CHORD_COMBO(also), \
  CHORD_COMBO(after), \
  CHORD_COMBO(way), \
  CHORD_COMBO(many), \
  CHORD_COMBO(must), \
  CHORD_COMBO(look), \
  CHORD_COMBO(before), \
  CHORD_COMBO(great), \
  CHORD_COMBO(back), \
  CHORD_COMBO(through), \
  CHORD_COMBO(long), \
  CHORD_COMBO(where), \
  CHORD_COMBO(much), \
  CHORD_COMBO(should), \
  CHORD_COMBO(well), \
  CHORD_COMBO(people), \
  CHORD_COMBO(down), \
  CHORD_COMBO(own), \
  CHORD_COMBO(just), \
  CHORD_COMBO(because), \
  CHORD_COMBO(good), \
  CHORD_COMBO(each), \
  CHORD_COMBO(those), \
  CHORD_COMBO(feel), \
  CHORD_COMBO(seem), \
  CHORD_COMBO(how), \
  CHORD_COMBO(high), \
  CHORD_COMBO(too), \
  CHORD_COMBO(place), \
  CHORD_COMBO(little), \
  CHORD_COMBO(world), \
  CHORD_COMBO(very), \
  CHORD_COMBO(still), \
  CHORD_COMBO(nation), \
  CHORD_COMBO(hand), \
  CHORD_COMBO(old), \
  CHORD_COMBO(life), \
  CHORD_COMBO(tell), \
  CHORD_COMBO(write), \
  CHORD_COMBO(become), \
  CHORD_COMBO(here), \
  CHORD_COMBO(show), \
  CHORD_COMBO(house), \
  CHORD_COMBO(both), \
  CHORD_COMBO(between), \
  CHORD_COMBO(need), \
  CHORD_COMBO(mean), \
  CHORD_COMBO(call), \
  CHORD_COMBO(develop), \
  CHORD_COMBO(under), \
  CHORD_COMBO(last), \
  CHORD_COMBO(right), \
  CHORD_COMBO(move), \
  CHORD_COMBO(thing), \
  CHORD_COMBO(general), \
  CHORD_COMBO(school), \
  CHORD_COMBO(never), \
  CHORD_COMBO(same), \
  CHORD_COMBO(another), \
  CHORD_COMBO(begin), \
  CHORD_COMBO(while), \
  CHORD_COMBO(number), \
  CHORD_COMBO(part), \
  CHORD_COMBO(turn), \
  CHORD_COMBO(real), \
  CHORD_COMBO(leave), \
  CHORD_COMBO(might), \
  CHORD_COMBO(want), \
  CHORD_COMBO(point), \
  CHORD_COMBO(form), \
  CHORD_COMBO(off), \
  CHORD_COMBO(child), \
  CHORD_COMBO(few), \
  CHORD_COMBO(small), \
  CHORD_COMBO(since), \
  CHORD_COMBO(against), \
  CHORD_COMBO(ask), \
  CHORD_COMBO(late), \
  CHORD_COMBO(home), \
  CHORD_COMBO(interes), \
  CHORD_COMBO(large), \
  CHORD_COMBO(person), \
  CHORD_COMBO(end), \
  CHORD_COMBO(open), \
  CHORD_COMBO(public), \
  CHORD_COMBO(follow), \
  CHORD_COMBO(during), \
  CHORD_COMBO(present), \
  CHORD_COMBO(without), \
  CHORD_COMBO(again), \
  CHORD_COMBO(hold), \
  CHORD_COMBO(govern), \
  CHORD_COMBO(around), \
  CHORD_COMBO(possibl), \
  CHORD_COMBO(head), \
  CHORD_COMBO(conside), \
  CHORD_COMBO(word), \
  CHORD_COMBO(program), \
  CHORD_COMBO(problem), \
  CHORD_COMBO(however), \
  CHORD_COMBO(lead), \
  CHORD_COMBO(system), \
  CHORD_COMBO(set), \
  CHORD_COMBO(order), \
  CHORD_COMBO(eye), \
  CHORD_COMBO(plan), \
  CHORD_COMBO(run), \
  CHORD_COMBO(keep), \
  CHORD_COMBO(face), \
  CHORD_COMBO(fact), \
  CHORD_COMBO(group), \
  CHORD_COMBO(play), \
  CHORD_COMBO(stand), \
  CHORD_COMBO(increas), \
  CHORD_COMBO(early), \
  CHORD_COMBO(course), \
  CHORD_COMBO(change), \
  CHORD_COMBO(help), \
  CHORD_COMBO(line), \
  CHORD_COMBO(his), \
  CHORD_COMBO(her), \
  CHORD_COMBO(an), \
  CHORD_COMBO(my), \
  CHORD_COMBO(their), \
  CHORD_COMBO(me), \
  CHORD_COMBO(him), \
  CHORD_COMBO(your), \
  CHORD_COMBO(its), \
  CHORD_COMBO(two), \
  CHORD_COMBO(our), \
  CHORD_COMBO(us), \
  CHORD_COMBO(is), \
  CHORD_COMBO(was), \
  CHORD_COMBO(are), \
  CHORD_COMBO(had), \
  CHORD_COMBO(were), \
  CHORD_COMBO(said), \
  CHORD_COMBO(has), \
  CHORD_COMBO(sound), \
  CHORD_COMBO(water), \
  CHORD_COMBO(side), \
  CHORD_COMBO(made), \
  CHORD_COMBO(live), \
  CHORD_COMBO(round), \
  CHORD_COMBO(came), \
  CHORD_COMBO(every), \
  CHORD_COMBO(name), \
  CHORD_COMBO(sentenc), \
  CHORD_COMBO(low), \
  CHORD_COMBO(differ), \
  CHORD_COMBO(cause), \
  CHORD_COMBO(boy), \
  CHORD_COMBO(does), \
  CHORD_COMBO(air), \
  CHORD_COMBO(put), \
  CHORD_COMBO(port), \
  CHORD_COMBO(spell), \
  CHORD_COMBO(land), \
  CHORD_COMBO(big), \
  CHORD_COMBO(act), \
  CHORD_COMBO(why), \
  CHORD_COMBO(men), \
  CHORD_COMBO(went), \
  CHORD_COMBO(light), \
  CHORD_COMBO(kind), \
  CHORD_COMBO(picture), \
  CHORD_COMBO(try), \
  CHORD_COMBO(animal), \
  CHORD_COMBO(mother), \
  CHORD_COMBO(build), \
  CHORD_COMBO(self), \
  CHORD_COMBO(earth), \
  CHORD_COMBO(father), \
  CHORD_COMBO(page), \
  CHORD_COMBO(country), \
  CHORD_COMBO(found), \
  CHORD_COMBO(answer), \
  CHORD_COMBO(grow), \
  CHORD_COMBO(study), \
  CHORD_COMBO(learn), \
  CHORD_COMBO(plant), \
  CHORD_COMBO(cover), \
  CHORD_COMBO(food), \
  CHORD_COMBO(sun), \
  CHORD_COMBO(four), \
  CHORD_COMBO(thought), \
  CHORD_COMBO(city), \
  CHORD_COMBO(cross), \
  CHORD_COMBO(hard), \
  CHORD_COMBO(far), \
  CHORD_COMBO(sea), \
  CHORD_COMBO(draw), \
  CHORD_COMBO(left), \
  CHORD_COMBO(press), \
  CHORD_COMBO(close), \
  CHORD_COMBO(night), \
  CHORD_COMBO(north), \
  CHORD_COMBO(togethe), \
  CHORD_COMBO(next), \
  CHORD_COMBO(white), \
  CHORD_COMBO(childre), \
  CHORD_COMBO(got), \
  CHORD_COMBO(walk), \
  CHORD_COMBO(example), \
  CHORD_COMBO(always), \
  CHORD_COMBO(music), \
  CHORD_COMBO(mark), \
  CHORD_COMBO(often), \
  CHORD_COMBO(letter), \
  CHORD_COMBO(until), \
  CHORD_COMBO(mile), \
  CHORD_COMBO(river), \
  CHORD_COMBO(car), \
  CHORD_COMBO(feet), \
  CHORD_COMBO(care), \
  CHORD_COMBO(second), \
  CHORD_COMBO(carry), \
  CHORD_COMBO(science), \
  CHORD_COMBO(eat), \
  CHORD_COMBO(friend), \
  CHORD_COMBO(began), \
  CHORD_COMBO(idea), \
  CHORD_COMBO(fish), \
  CHORD_COMBO(mountai), \
  CHORD_COMBO(stop), \
  CHORD_COMBO(once), \
  CHORD_COMBO(base), \
  CHORD_COMBO(horse), \
  CHORD_COMBO(cut), \
  CHORD_COMBO(sure), \
  CHORD_COMBO(watch), \
  CHORD_COMBO(color), \
  CHORD_COMBO(wood), \
  CHORD_COMBO(main), \
  CHORD_COMBO(enough), \
  CHORD_COMBO(plain), \
  CHORD_COMBO(girl), \
  CHORD_COMBO(usual), \
  CHORD_COMBO(young), \
  CHORD_COMBO(ready), \
  CHORD_COMBO(above), \
  CHORD_COMBO(red), \
  CHORD_COMBO(list), \
  CHORD_COMBO(though), \
  CHORD_COMBO(bird), \
  CHORD_COMBO(body), \
  CHORD_COMBO(family), \
  CHORD_COMBO(direct), \
  CHORD_COMBO(pose), \
  CHORD_COMBO(song), \
  CHORD_COMBO(measure), \
  CHORD_COMBO(product), \
  CHORD_COMBO(black), \
  CHORD_COMBO(short), \
  CHORD_COMBO(numeral), \
  CHORD_COMBO(class), \
  CHORD_COMBO(wind), \
  CHORD_COMBO(questio), \
  CHORD_COMBO(happen), \
  CHORD_COMBO(complet), \
  CHORD_COMBO(ship), \
  CHORD_COMBO(half), \
  CHORD_COMBO(rock), \
  CHORD_COMBO(fire), \
  CHORD_COMBO(south), \
  CHORD_COMBO(told), \
  CHORD_COMBO(knew), \
  CHORD_COMBO(pass), \
  CHORD_COMBO(top), \
  CHORD_COMBO(whole), \
  CHORD_COMBO(space), \
  CHORD_COMBO(best), \
  CHORD_COMBO(hour), \
  CHORD_COMBO(better), \
  CHORD_COMBO(true), \
  CHORD_COMBO(hundred), \
  CHORD_COMBO(five), \
  CHORD_COMBO(six), \
  CHORD_COMBO(war), \
  CHORD_COMBO(lay), \
  CHORD_COMBO(map), \
  CHORD_COMBO(fly), \
  CHORD_COMBO(fall), \
  CHORD_COMBO(cry), \
  CHORD_COMBO(box), \
  CHORD_COMBO(noun), \
  CHORD_COMBO(week), \
  CHORD_COMBO(oh), \
  CHORD_COMBO(free), \
  CHORD_COMBO(dry), \
  CHORD_COMBO(ago), \
  CHORD_COMBO(ran), \
  CHORD_COMBO(hot), \
  CHORD_COMBO(ball), \
  CHORD_COMBO(yet), \
  CHORD_COMBO(am), \
  CHORD_COMBO(arm), \
  CHORD_COMBO(ice), \
  CHORD_COMBO(matter), \
  CHORD_COMBO(art), \
  CHORD_COMBO(cell), \
  CHORD_COMBO(summer), \
  CHORD_COMBO(leg), \
  CHORD_COMBO(joy), \
  CHORD_COMBO(job), \
  CHORD_COMBO(gas), \
  CHORD_COMBO(buy), \
  CHORD_COMBO(cook), \
  CHORD_COMBO(hill), \
  CHORD_COMBO(law), \
  CHORD_COMBO(lie), \
  CHORD_COMBO(son), \
  CHORD_COMBO(pay), \
  CHORD_COMBO(age), \
  CHORD_COMBO(cool), \
  CHORD_COMBO(lot), \
  CHORD_COMBO(key), \
  CHORD_COMBO(row), \
  CHORD_COMBO(die), \
  CHORD_COMBO(oil), \
  CHORD_COMBO(fit), \
  CHORD_COMBO(hit), \
  CHORD_COMBO(rub), \
  CHORD_COMBO(tie), \
  CHORD_COMBO(gun), \
  CHORD_COMBO(nine), \
  CHORD_COMBO(thank), \
  CHORD_COMBO(experie), \
  CHORD_COMBO(led), \
  CHORD_COMBO(win), \
  CHORD_COMBO(feed), \
  CHORD_COMBO(nor), \
  CHORD_COMBO(fat), \
  CHORD_COMBO(bar), \
  CHORD_COMBO(log), \
  CHORD_COMBO(hey), \
  CHORD_COMBO(return), \
  CHORD_COMBO(probabl), \
  CHORD_COMBO(thanks), \
  CHORD_COMBO(i_ve), \
  CHORD_COMBO(per), \
  CHORD_COMBO(null), \
  CHORD_COMBO(nil), \
  CHORD_COMBO(array), \
  CHORD_COMBO(sort), \
  CHORD_COMBO(http_), \
  CHORD_COMBO(https_), \
  CHORD_COMBO(in_the), \
  CHORD_COMBO(of_the), \
  CHORD_COMBO(to_be), \
  CHORD_COMBO(to_the), \
  CHORD_COMBO(and_the), \
  CHORD_COMBO(and_i), \
  CHORD_COMBO(on_the), \
  CHORD_COMBO(it_is), \
  CHORD_COMBO(if_you), \
  CHORD_COMBO(the_wor), \
  CHORD_COMBO(in_a), \
  CHORD_COMBO(the_qui), \
  CHORD_COMBO(elberet), \
  PERSONAL_CHORD_COMBOS

#define CHORD_FUNC \
  void process_chord_event(uint16_t combo_index, bool pressed) { \
    bool space = true; \
    switch(combo_index) { \
      case CHORD_left_cl: \
        if (pressed) { \
          tap_code16(KC_MS_BTN1); \
        } \
        return; \
      case CHORD_right_c: \
        if (pressed) { \
          tap_code16(KC_MS_BTN2); \
        } \
        return; \
      case CHORD_oneshot: \
        if (pressed) { \
          set_oneshot_layer(FUNCTION, ONESHOT_START); \
        } else { \
          clear_oneshot_layer_state(ONESHOT_PRESSED); \
        } \
        return; \
      PERSONAL_CHORD_BEHAVIOR_FUNC \
    } \
    if (!pressed) { \
      return; \
    } \
    switch(combo_index) { \
      case CHORD_excl: \
        space = false; \
        SEND_STRING("!"); \
        last_chord_length = 1; \
        break; \
      case CHORD_qmark: \
        space = false; \
        SEND_STRING("?"); \
        last_chord_length = 1; \
        break; \
      case CHORD_colon: \
        space = false; \
        SEND_STRING(":"); \
        last_chord_length = 1; \
        break; \
      case CHORD_semi: \
        space = false; \
        SEND_STRING(";"); \
        last_chord_length = 1; \
        break; \
      case CHORD_cent: \
        space = false; \
        send_unicode_string("¢"); \
        last_chord_length = 1; \
        break; \
      case CHORD_pound: \
        space = false; \
        send_unicode_string("£"); \
        last_chord_length = 1; \
        break; \
      case CHORD_yen: \
        space = false; \
        send_unicode_string("¥"); \
        last_chord_length = 1; \
        break; \
      case CHORD_euro: \
        space = false; \
        send_unicode_string("€"); \
        last_chord_length = 1; \
        break; \
      case CHORD_mid_ell: \
        space = false; \
        send_unicode_string("⋯"); \
        last_chord_length = 1; \
        break; \
      case CHORD_bullet: \
        space = false; \
        send_unicode_string("•"); \
        last_chord_length = 1; \
        break; \
      case CHORD_degrees: \
        space = false; \
        send_unicode_string("°"); \
        last_chord_length = 1; \
        break; \
      case CHORD_infinit: \
        space = false; \
        send_unicode_string("∞"); \
        last_chord_length = 1; \
        break; \
      case CHORD_lambda: \
        space = false; \
        send_unicode_string("λ"); \
        last_chord_length = 1; \
        break; \
      case CHORD_interro: \
        space = false; \
        send_unicode_string("‽"); \
        last_chord_length = 1; \
        break; \
      case CHORD_ballot_: \
        space = false; \
        send_unicode_string("✗"); \
        last_chord_length = 1; \
        break; \
      case CHORD_checkma: \
        space = false; \
        send_unicode_string("✔"); \
        last_chord_length = 1; \
        break; \
      case CHORD_left_ar: \
        space = false; \
        send_unicode_string("←"); \
        last_chord_length = 1; \
        break; \
      case CHORD_down_ar: \
        space = false; \
        send_unicode_string("↓"); \
        last_chord_length = 1; \
        break; \
      case CHORD_up_arro: \
        space = false; \
        send_unicode_string("↑"); \
        last_chord_length = 1; \
        break; \
      case CHORD_right_a: \
        space = false; \
        send_unicode_string("→"); \
        last_chord_length = 1; \
        break; \
      case CHORD__ing: \
        tap_code16(KC_BSPC); \
        SEND_STRING("ing"); \
        last_chord_length = 2; \
        break; \
      case CHORD__n_t: \
        tap_code16(KC_BSPC); \
        SEND_STRING("n't"); \
        last_chord_length = 2; \
        break; \
      case CHORD__ve: \
        tap_code16(KC_BSPC); \
        SEND_STRING("'ve"); \
        last_chord_length = 2; \
        break; \
      case CHORD__re: \
        tap_code16(KC_BSPC); \
        SEND_STRING("'re"); \
        last_chord_length = 2; \
        break; \
      case CHORD_the: \
        SEND_STRING("the"); \
        last_chord_length = 3; \
        break; \
      case CHORD_be: \
        SEND_STRING("be"); \
        last_chord_length = 2; \
        break; \
      case CHORD_of: \
        SEND_STRING("of"); \
        last_chord_length = 2; \
        break; \
      case CHORD_and: \
        SEND_STRING("and"); \
        last_chord_length = 3; \
        break; \
      case CHORD_a: \
        SEND_STRING("a"); \
        last_chord_length = 1; \
        break; \
      case CHORD_a1: \
        SEND_STRING("A"); \
        last_chord_length = 1; \
        break; \
      case CHORD_to: \
        SEND_STRING("to"); \
        last_chord_length = 2; \
        break; \
      case CHORD_in: \
        SEND_STRING("in"); \
        last_chord_length = 2; \
        break; \
      case CHORD_he: \
        SEND_STRING("he"); \
        last_chord_length = 2; \
        break; \
      case CHORD_have: \
        SEND_STRING("have"); \
        last_chord_length = 4; \
        break; \
      case CHORD_it: \
        SEND_STRING("it"); \
        last_chord_length = 2; \
        break; \
      case CHORD_that: \
        SEND_STRING("that"); \
        last_chord_length = 4; \
        break; \
      case CHORD_for: \
        SEND_STRING("for"); \
        last_chord_length = 3; \
        break; \
      case CHORD_they: \
        SEND_STRING("they"); \
        last_chord_length = 4; \
        break; \
      case CHORD_i: \
        SEND_STRING("I"); \
        last_chord_length = 1; \
        break; \
      case CHORD_with: \
        SEND_STRING("with"); \
        last_chord_length = 4; \
        break; \
      case CHORD_as: \
        SEND_STRING("as"); \
        last_chord_length = 2; \
        break; \
      case CHORD_not: \
        SEND_STRING("not"); \
        last_chord_length = 3; \
        break; \
      case CHORD_on: \
        SEND_STRING("on"); \
        last_chord_length = 2; \
        break; \
      case CHORD_she: \
        SEND_STRING("she"); \
        last_chord_length = 3; \
        break; \
      case CHORD_at: \
        SEND_STRING("at"); \
        last_chord_length = 2; \
        break; \
      case CHORD_by: \
        SEND_STRING("by"); \
        last_chord_length = 2; \
        break; \
      case CHORD_this: \
        SEND_STRING("this"); \
        last_chord_length = 4; \
        break; \
      case CHORD_we: \
        SEND_STRING("we"); \
        last_chord_length = 2; \
        break; \
      case CHORD_you: \
        SEND_STRING("you"); \
        last_chord_length = 3; \
        break; \
      case CHORD_do: \
        SEND_STRING("do"); \
        last_chord_length = 2; \
        break; \
      case CHORD_but: \
        SEND_STRING("but"); \
        last_chord_length = 3; \
        break; \
      case CHORD_from: \
        SEND_STRING("from"); \
        last_chord_length = 4; \
        break; \
      case CHORD_or: \
        SEND_STRING("or"); \
        last_chord_length = 2; \
        break; \
      case CHORD_which: \
        SEND_STRING("which"); \
        last_chord_length = 5; \
        break; \
      case CHORD_one: \
        SEND_STRING("one"); \
        last_chord_length = 3; \
        break; \
      case CHORD_would: \
        SEND_STRING("would"); \
        last_chord_length = 5; \
        break; \
      case CHORD_all: \
        SEND_STRING("all"); \
        last_chord_length = 3; \
        break; \
      case CHORD_will: \
        SEND_STRING("will"); \
        last_chord_length = 4; \
        break; \
      case CHORD_there: \
        SEND_STRING("there"); \
        last_chord_length = 5; \
        break; \
      case CHORD_say: \
        SEND_STRING("say"); \
        last_chord_length = 3; \
        break; \
      case CHORD_who: \
        SEND_STRING("who"); \
        last_chord_length = 3; \
        break; \
      case CHORD_make: \
        SEND_STRING("make"); \
        last_chord_length = 4; \
        break; \
      case CHORD_when: \
        SEND_STRING("when"); \
        last_chord_length = 4; \
        break; \
      case CHORD_can: \
        SEND_STRING("can"); \
        last_chord_length = 3; \
        break; \
      case CHORD_more: \
        SEND_STRING("more"); \
        last_chord_length = 4; \
        break; \
      case CHORD_if: \
        SEND_STRING("if"); \
        last_chord_length = 2; \
        break; \
      case CHORD_no: \
        SEND_STRING("no"); \
        last_chord_length = 2; \
        break; \
      case CHORD_man: \
        SEND_STRING("man"); \
        last_chord_length = 3; \
        break; \
      case CHORD_out: \
        SEND_STRING("out"); \
        last_chord_length = 3; \
        break; \
      case CHORD_other: \
        SEND_STRING("other"); \
        last_chord_length = 5; \
        break; \
      case CHORD_so: \
        SEND_STRING("so"); \
        last_chord_length = 2; \
        break; \
      case CHORD_what: \
        SEND_STRING("what"); \
        last_chord_length = 4; \
        break; \
      case CHORD_time: \
        SEND_STRING("time"); \
        last_chord_length = 4; \
        break; \
      case CHORD_up: \
        SEND_STRING("up"); \
        last_chord_length = 2; \
        break; \
      case CHORD_go: \
        SEND_STRING("go"); \
        last_chord_length = 2; \
        break; \
      case CHORD_about: \
        SEND_STRING("about"); \
        last_chord_length = 5; \
        break; \
      case CHORD_than: \
        SEND_STRING("than"); \
        last_chord_length = 4; \
        break; \
      case CHORD_into: \
        SEND_STRING("into"); \
        last_chord_length = 4; \
        break; \
      case CHORD_could: \
        SEND_STRING("could"); \
        last_chord_length = 5; \
        break; \
      case CHORD_state: \
        SEND_STRING("state"); \
        last_chord_length = 5; \
        break; \
      case CHORD_only: \
        SEND_STRING("only"); \
        last_chord_length = 4; \
        break; \
      case CHORD_new: \
        SEND_STRING("new"); \
        last_chord_length = 3; \
        break; \
      case CHORD_year: \
        SEND_STRING("year"); \
        last_chord_length = 4; \
        break; \
      case CHORD_some: \
        SEND_STRING("some"); \
        last_chord_length = 4; \
        break; \
      case CHORD_take: \
        SEND_STRING("take"); \
        last_chord_length = 4; \
        break; \
      case CHORD_come: \
        SEND_STRING("come"); \
        last_chord_length = 4; \
        break; \
      case CHORD_these: \
        SEND_STRING("these"); \
        last_chord_length = 5; \
        break; \
      case CHORD_know: \
        SEND_STRING("know"); \
        last_chord_length = 4; \
        break; \
      case CHORD_see: \
        SEND_STRING("see"); \
        last_chord_length = 3; \
        break; \
      case CHORD_use: \
        SEND_STRING("use"); \
        last_chord_length = 3; \
        break; \
      case CHORD_get: \
        SEND_STRING("get"); \
        last_chord_length = 3; \
        break; \
      case CHORD_like: \
        SEND_STRING("like"); \
        last_chord_length = 4; \
        break; \
      case CHORD_then: \
        SEND_STRING("then"); \
        last_chord_length = 4; \
        break; \
      case CHORD_first: \
        SEND_STRING("first"); \
        last_chord_length = 5; \
        break; \
      case CHORD_any: \
        SEND_STRING("any"); \
        last_chord_length = 3; \
        break; \
      case CHORD_work: \
        SEND_STRING("work"); \
        last_chord_length = 4; \
        break; \
      case CHORD_now: \
        SEND_STRING("now"); \
        last_chord_length = 3; \
        break; \
      case CHORD_may: \
        SEND_STRING("may"); \
        last_chord_length = 3; \
        break; \
      case CHORD_such: \
        SEND_STRING("such"); \
        last_chord_length = 4; \
        break; \
      case CHORD_give: \
        SEND_STRING("give"); \
        last_chord_length = 4; \
        break; \
      case CHORD_over: \
        SEND_STRING("over"); \
        last_chord_length = 4; \
        break; \
      case CHORD_think: \
        SEND_STRING("think"); \
        last_chord_length = 5; \
        break; \
      case CHORD_most: \
        SEND_STRING("most"); \
        last_chord_length = 4; \
        break; \
      case CHORD_even: \
        SEND_STRING("even"); \
        last_chord_length = 4; \
        break; \
      case CHORD_find: \
        SEND_STRING("find"); \
        last_chord_length = 4; \
        break; \
      case CHORD_day: \
        SEND_STRING("day"); \
        last_chord_length = 3; \
        break; \
      case CHORD_also: \
        SEND_STRING("also"); \
        last_chord_length = 4; \
        break; \
      case CHORD_after: \
        SEND_STRING("after"); \
        last_chord_length = 5; \
        break; \
      case CHORD_way: \
        SEND_STRING("way"); \
        last_chord_length = 3; \
        break; \
      case CHORD_many: \
        SEND_STRING("many"); \
        last_chord_length = 4; \
        break; \
      case CHORD_must: \
        SEND_STRING("must"); \
        last_chord_length = 4; \
        break; \
      case CHORD_look: \
        SEND_STRING("look"); \
        last_chord_length = 4; \
        break; \
      case CHORD_before: \
        SEND_STRING("before"); \
        last_chord_length = 6; \
        break; \
      case CHORD_great: \
        SEND_STRING("great"); \
        last_chord_length = 5; \
        break; \
      case CHORD_back: \
        SEND_STRING("back"); \
        last_chord_length = 4; \
        break; \
      case CHORD_through: \
        SEND_STRING("through"); \
        last_chord_length = 7; \
        break; \
      case CHORD_long: \
        SEND_STRING("long"); \
        last_chord_length = 4; \
        break; \
      case CHORD_where: \
        SEND_STRING("where"); \
        last_chord_length = 5; \
        break; \
      case CHORD_much: \
        SEND_STRING("much"); \
        last_chord_length = 4; \
        break; \
      case CHORD_should: \
        SEND_STRING("should"); \
        last_chord_length = 6; \
        break; \
      case CHORD_well: \
        SEND_STRING("well"); \
        last_chord_length = 4; \
        break; \
      case CHORD_people: \
        SEND_STRING("people"); \
        last_chord_length = 6; \
        break; \
      case CHORD_down: \
        SEND_STRING("down"); \
        last_chord_length = 4; \
        break; \
      case CHORD_own: \
        SEND_STRING("own"); \
        last_chord_length = 3; \
        break; \
      case CHORD_just: \
        SEND_STRING("just"); \
        last_chord_length = 4; \
        break; \
      case CHORD_because: \
        SEND_STRING("because"); \
        last_chord_length = 7; \
        break; \
      case CHORD_good: \
        SEND_STRING("good"); \
        last_chord_length = 4; \
        break; \
      case CHORD_each: \
        SEND_STRING("each"); \
        last_chord_length = 4; \
        break; \
      case CHORD_those: \
        SEND_STRING("those"); \
        last_chord_length = 5; \
        break; \
      case CHORD_feel: \
        SEND_STRING("feel"); \
        last_chord_length = 4; \
        break; \
      case CHORD_seem: \
        SEND_STRING("seem"); \
        last_chord_length = 4; \
        break; \
      case CHORD_how: \
        SEND_STRING("how"); \
        last_chord_length = 3; \
        break; \
      case CHORD_high: \
        SEND_STRING("high"); \
        last_chord_length = 4; \
        break; \
      case CHORD_too: \
        SEND_STRING("too"); \
        last_chord_length = 3; \
        break; \
      case CHORD_place: \
        SEND_STRING("place"); \
        last_chord_length = 5; \
        break; \
      case CHORD_little: \
        SEND_STRING("little"); \
        last_chord_length = 6; \
        break; \
      case CHORD_world: \
        SEND_STRING("world"); \
        last_chord_length = 5; \
        break; \
      case CHORD_very: \
        SEND_STRING("very"); \
        last_chord_length = 4; \
        break; \
      case CHORD_still: \
        SEND_STRING("still"); \
        last_chord_length = 5; \
        break; \
      case CHORD_nation: \
        SEND_STRING("nation"); \
        last_chord_length = 6; \
        break; \
      case CHORD_hand: \
        SEND_STRING("hand"); \
        last_chord_length = 4; \
        break; \
      case CHORD_old: \
        SEND_STRING("old"); \
        last_chord_length = 3; \
        break; \
      case CHORD_life: \
        SEND_STRING("life"); \
        last_chord_length = 4; \
        break; \
      case CHORD_tell: \
        SEND_STRING("tell"); \
        last_chord_length = 4; \
        break; \
      case CHORD_write: \
        SEND_STRING("write"); \
        last_chord_length = 5; \
        break; \
      case CHORD_become: \
        SEND_STRING("become"); \
        last_chord_length = 6; \
        break; \
      case CHORD_here: \
        SEND_STRING("here"); \
        last_chord_length = 4; \
        break; \
      case CHORD_show: \
        SEND_STRING("show"); \
        last_chord_length = 4; \
        break; \
      case CHORD_house: \
        SEND_STRING("house"); \
        last_chord_length = 5; \
        break; \
      case CHORD_both: \
        SEND_STRING("both"); \
        last_chord_length = 4; \
        break; \
      case CHORD_between: \
        SEND_STRING("between"); \
        last_chord_length = 7; \
        break; \
      case CHORD_need: \
        SEND_STRING("need"); \
        last_chord_length = 4; \
        break; \
      case CHORD_mean: \
        SEND_STRING("mean"); \
        last_chord_length = 4; \
        break; \
      case CHORD_call: \
        SEND_STRING("call"); \
        last_chord_length = 4; \
        break; \
      case CHORD_develop: \
        SEND_STRING("develop"); \
        last_chord_length = 7; \
        break; \
      case CHORD_under: \
        SEND_STRING("under"); \
        last_chord_length = 5; \
        break; \
      case CHORD_last: \
        SEND_STRING("last"); \
        last_chord_length = 4; \
        break; \
      case CHORD_right: \
        SEND_STRING("right"); \
        last_chord_length = 5; \
        break; \
      case CHORD_move: \
        SEND_STRING("move"); \
        last_chord_length = 4; \
        break; \
      case CHORD_thing: \
        SEND_STRING("thing"); \
        last_chord_length = 5; \
        break; \
      case CHORD_general: \
        SEND_STRING("general"); \
        last_chord_length = 7; \
        break; \
      case CHORD_school: \
        SEND_STRING("school"); \
        last_chord_length = 6; \
        break; \
      case CHORD_never: \
        SEND_STRING("never"); \
        last_chord_length = 5; \
        break; \
      case CHORD_same: \
        SEND_STRING("same"); \
        last_chord_length = 4; \
        break; \
      case CHORD_another: \
        SEND_STRING("another"); \
        last_chord_length = 7; \
        break; \
      case CHORD_begin: \
        SEND_STRING("begin"); \
        last_chord_length = 5; \
        break; \
      case CHORD_while: \
        SEND_STRING("while"); \
        last_chord_length = 5; \
        break; \
      case CHORD_number: \
        SEND_STRING("number"); \
        last_chord_length = 6; \
        break; \
      case CHORD_part: \
        SEND_STRING("part"); \
        last_chord_length = 4; \
        break; \
      case CHORD_turn: \
        SEND_STRING("turn"); \
        last_chord_length = 4; \
        break; \
      case CHORD_real: \
        SEND_STRING("real"); \
        last_chord_length = 4; \
        break; \
      case CHORD_leave: \
        SEND_STRING("leave"); \
        last_chord_length = 5; \
        break; \
      case CHORD_might: \
        SEND_STRING("might"); \
        last_chord_length = 5; \
        break; \
      case CHORD_want: \
        SEND_STRING("want"); \
        last_chord_length = 4; \
        break; \
      case CHORD_point: \
        SEND_STRING("point"); \
        last_chord_length = 5; \
        break; \
      case CHORD_form: \
        SEND_STRING("form"); \
        last_chord_length = 4; \
        break; \
      case CHORD_off: \
        SEND_STRING("off"); \
        last_chord_length = 3; \
        break; \
      case CHORD_child: \
        SEND_STRING("child"); \
        last_chord_length = 5; \
        break; \
      case CHORD_few: \
        SEND_STRING("few"); \
        last_chord_length = 3; \
        break; \
      case CHORD_small: \
        SEND_STRING("small"); \
        last_chord_length = 5; \
        break; \
      case CHORD_since: \
        SEND_STRING("since"); \
        last_chord_length = 5; \
        break; \
      case CHORD_against: \
        SEND_STRING("against"); \
        last_chord_length = 7; \
        break; \
      case CHORD_ask: \
        SEND_STRING("ask"); \
        last_chord_length = 3; \
        break; \
      case CHORD_late: \
        SEND_STRING("late"); \
        last_chord_length = 4; \
        break; \
      case CHORD_home: \
        SEND_STRING("home"); \
        last_chord_length = 4; \
        break; \
      case CHORD_interes: \
        SEND_STRING("interest"); \
        last_chord_length = 8; \
        break; \
      case CHORD_large: \
        SEND_STRING("large"); \
        last_chord_length = 5; \
        break; \
      case CHORD_person: \
        SEND_STRING("person"); \
        last_chord_length = 6; \
        break; \
      case CHORD_end: \
        SEND_STRING("end"); \
        last_chord_length = 3; \
        break; \
      case CHORD_open: \
        SEND_STRING("open"); \
        last_chord_length = 4; \
        break; \
      case CHORD_public: \
        SEND_STRING("public"); \
        last_chord_length = 6; \
        break; \
      case CHORD_follow: \
        SEND_STRING("follow"); \
        last_chord_length = 6; \
        break; \
      case CHORD_during: \
        SEND_STRING("during"); \
        last_chord_length = 6; \
        break; \
      case CHORD_present: \
        SEND_STRING("present"); \
        last_chord_length = 7; \
        break; \
      case CHORD_without: \
        SEND_STRING("without"); \
        last_chord_length = 7; \
        break; \
      case CHORD_again: \
        SEND_STRING("again"); \
        last_chord_length = 5; \
        break; \
      case CHORD_hold: \
        SEND_STRING("hold"); \
        last_chord_length = 4; \
        break; \
      case CHORD_govern: \
        SEND_STRING("govern"); \
        last_chord_length = 6; \
        break; \
      case CHORD_around: \
        SEND_STRING("around"); \
        last_chord_length = 6; \
        break; \
      case CHORD_possibl: \
        SEND_STRING("possible"); \
        last_chord_length = 8; \
        break; \
      case CHORD_head: \
        SEND_STRING("head"); \
        last_chord_length = 4; \
        break; \
      case CHORD_conside: \
        SEND_STRING("consider"); \
        last_chord_length = 8; \
        break; \
      case CHORD_word: \
        SEND_STRING("word"); \
        last_chord_length = 4; \
        break; \
      case CHORD_program: \
        SEND_STRING("program"); \
        last_chord_length = 7; \
        break; \
      case CHORD_problem: \
        SEND_STRING("problem"); \
        last_chord_length = 7; \
        break; \
      case CHORD_however: \
        SEND_STRING("however"); \
        last_chord_length = 7; \
        break; \
      case CHORD_lead: \
        SEND_STRING("lead"); \
        last_chord_length = 4; \
        break; \
      case CHORD_system: \
        SEND_STRING("system"); \
        last_chord_length = 6; \
        break; \
      case CHORD_set: \
        SEND_STRING("set"); \
        last_chord_length = 3; \
        break; \
      case CHORD_order: \
        SEND_STRING("order"); \
        last_chord_length = 5; \
        break; \
      case CHORD_eye: \
        SEND_STRING("eye"); \
        last_chord_length = 3; \
        break; \
      case CHORD_plan: \
        SEND_STRING("plan"); \
        last_chord_length = 4; \
        break; \
      case CHORD_run: \
        SEND_STRING("run"); \
        last_chord_length = 3; \
        break; \
      case CHORD_keep: \
        SEND_STRING("keep"); \
        last_chord_length = 4; \
        break; \
      case CHORD_face: \
        SEND_STRING("face"); \
        last_chord_length = 4; \
        break; \
      case CHORD_fact: \
        SEND_STRING("fact"); \
        last_chord_length = 4; \
        break; \
      case CHORD_group: \
        SEND_STRING("group"); \
        last_chord_length = 5; \
        break; \
      case CHORD_play: \
        SEND_STRING("play"); \
        last_chord_length = 4; \
        break; \
      case CHORD_stand: \
        SEND_STRING("stand"); \
        last_chord_length = 5; \
        break; \
      case CHORD_increas: \
        SEND_STRING("increase"); \
        last_chord_length = 8; \
        break; \
      case CHORD_early: \
        SEND_STRING("early"); \
        last_chord_length = 5; \
        break; \
      case CHORD_course: \
        SEND_STRING("course"); \
        last_chord_length = 6; \
        break; \
      case CHORD_change: \
        SEND_STRING("change"); \
        last_chord_length = 6; \
        break; \
      case CHORD_help: \
        SEND_STRING("help"); \
        last_chord_length = 4; \
        break; \
      case CHORD_line: \
        SEND_STRING("line"); \
        last_chord_length = 4; \
        break; \
      case CHORD_his: \
        SEND_STRING("his"); \
        last_chord_length = 3; \
        break; \
      case CHORD_her: \
        SEND_STRING("her"); \
        last_chord_length = 3; \
        break; \
      case CHORD_an: \
        SEND_STRING("an"); \
        last_chord_length = 2; \
        break; \
      case CHORD_my: \
        SEND_STRING("my"); \
        last_chord_length = 2; \
        break; \
      case CHORD_their: \
        SEND_STRING("their"); \
        last_chord_length = 5; \
        break; \
      case CHORD_me: \
        SEND_STRING("me"); \
        last_chord_length = 2; \
        break; \
      case CHORD_him: \
        SEND_STRING("him"); \
        last_chord_length = 3; \
        break; \
      case CHORD_your: \
        SEND_STRING("your"); \
        last_chord_length = 4; \
        break; \
      case CHORD_its: \
        SEND_STRING("its"); \
        last_chord_length = 3; \
        break; \
      case CHORD_two: \
        SEND_STRING("two"); \
        last_chord_length = 3; \
        break; \
      case CHORD_our: \
        SEND_STRING("our"); \
        last_chord_length = 3; \
        break; \
      case CHORD_us: \
        SEND_STRING("us"); \
        last_chord_length = 2; \
        break; \
      case CHORD_is: \
        SEND_STRING("is"); \
        last_chord_length = 2; \
        break; \
      case CHORD_was: \
        SEND_STRING("was"); \
        last_chord_length = 3; \
        break; \
      case CHORD_are: \
        SEND_STRING("are"); \
        last_chord_length = 3; \
        break; \
      case CHORD_had: \
        SEND_STRING("had"); \
        last_chord_length = 3; \
        break; \
      case CHORD_were: \
        SEND_STRING("were"); \
        last_chord_length = 4; \
        break; \
      case CHORD_said: \
        SEND_STRING("said"); \
        last_chord_length = 4; \
        break; \
      case CHORD_has: \
        SEND_STRING("has"); \
        last_chord_length = 3; \
        break; \
      case CHORD_sound: \
        SEND_STRING("sound"); \
        last_chord_length = 5; \
        break; \
      case CHORD_water: \
        SEND_STRING("water"); \
        last_chord_length = 5; \
        break; \
      case CHORD_side: \
        SEND_STRING("side"); \
        last_chord_length = 4; \
        break; \
      case CHORD_made: \
        SEND_STRING("made"); \
        last_chord_length = 4; \
        break; \
      case CHORD_live: \
        SEND_STRING("live"); \
        last_chord_length = 4; \
        break; \
      case CHORD_round: \
        SEND_STRING("round"); \
        last_chord_length = 5; \
        break; \
      case CHORD_came: \
        SEND_STRING("came"); \
        last_chord_length = 4; \
        break; \
      case CHORD_every: \
        SEND_STRING("every"); \
        last_chord_length = 5; \
        break; \
      case CHORD_name: \
        SEND_STRING("name"); \
        last_chord_length = 4; \
        break; \
      case CHORD_sentenc: \
        SEND_STRING("sentence"); \
        last_chord_length = 8; \
        break; \
      case CHORD_low: \
        SEND_STRING("low"); \
        last_chord_length = 3; \
        break; \
      case CHORD_differ: \
        SEND_STRING("differ"); \
        last_chord_length = 6; \
        break; \
      case CHORD_cause: \
        SEND_STRING("cause"); \
        last_chord_length = 5; \
        break; \
      case CHORD_boy: \
        SEND_STRING("boy"); \
        last_chord_length = 3; \
        break; \
      case CHORD_does: \
        SEND_STRING("does"); \
        last_chord_length = 4; \
        break; \
      case CHORD_air: \
        SEND_STRING("air"); \
        last_chord_length = 3; \
        break; \
      case CHORD_put: \
        SEND_STRING("put"); \
        last_chord_length = 3; \
        break; \
      case CHORD_port: \
        SEND_STRING("port"); \
        last_chord_length = 4; \
        break; \
      case CHORD_spell: \
        SEND_STRING("spell"); \
        last_chord_length = 5; \
        break; \
      case CHORD_land: \
        SEND_STRING("land"); \
        last_chord_length = 4; \
        break; \
      case CHORD_big: \
        SEND_STRING("big"); \
        last_chord_length = 3; \
        break; \
      case CHORD_act: \
        SEND_STRING("act"); \
        last_chord_length = 3; \
        break; \
      case CHORD_why: \
        SEND_STRING("why"); \
        last_chord_length = 3; \
        break; \
      case CHORD_men: \
        SEND_STRING("men"); \
        last_chord_length = 3; \
        break; \
      case CHORD_went: \
        SEND_STRING("went"); \
        last_chord_length = 4; \
        break; \
      case CHORD_light: \
        SEND_STRING("light"); \
        last_chord_length = 5; \
        break; \
      case CHORD_kind: \
        SEND_STRING("kind"); \
        last_chord_length = 4; \
        break; \
      case CHORD_picture: \
        SEND_STRING("picture"); \
        last_chord_length = 7; \
        break; \
      case CHORD_try: \
        SEND_STRING("try"); \
        last_chord_length = 3; \
        break; \
      case CHORD_animal: \
        SEND_STRING("animal"); \
        last_chord_length = 6; \
        break; \
      case CHORD_mother: \
        SEND_STRING("mother"); \
        last_chord_length = 6; \
        break; \
      case CHORD_build: \
        SEND_STRING("build"); \
        last_chord_length = 5; \
        break; \
      case CHORD_self: \
        SEND_STRING("self"); \
        last_chord_length = 4; \
        break; \
      case CHORD_earth: \
        SEND_STRING("earth"); \
        last_chord_length = 5; \
        break; \
      case CHORD_father: \
        SEND_STRING("father"); \
        last_chord_length = 6; \
        break; \
      case CHORD_page: \
        SEND_STRING("page"); \
        last_chord_length = 4; \
        break; \
      case CHORD_country: \
        SEND_STRING("country"); \
        last_chord_length = 7; \
        break; \
      case CHORD_found: \
        SEND_STRING("found"); \
        last_chord_length = 5; \
        break; \
      case CHORD_answer: \
        SEND_STRING("answer"); \
        last_chord_length = 6; \
        break; \
      case CHORD_grow: \
        SEND_STRING("grow"); \
        last_chord_length = 4; \
        break; \
      case CHORD_study: \
        SEND_STRING("study"); \
        last_chord_length = 5; \
        break; \
      case CHORD_learn: \
        SEND_STRING("learn"); \
        last_chord_length = 5; \
        break; \
      case CHORD_plant: \
        SEND_STRING("plant"); \
        last_chord_length = 5; \
        break; \
      case CHORD_cover: \
        SEND_STRING("cover"); \
        last_chord_length = 5; \
        break; \
      case CHORD_food: \
        SEND_STRING("food"); \
        last_chord_length = 4; \
        break; \
      case CHORD_sun: \
        SEND_STRING("sun"); \
        last_chord_length = 3; \
        break; \
      case CHORD_four: \
        SEND_STRING("four"); \
        last_chord_length = 4; \
        break; \
      case CHORD_thought: \
        SEND_STRING("thought"); \
        last_chord_length = 7; \
        break; \
      case CHORD_city: \
        SEND_STRING("city"); \
        last_chord_length = 4; \
        break; \
      case CHORD_cross: \
        SEND_STRING("cross"); \
        last_chord_length = 5; \
        break; \
      case CHORD_hard: \
        SEND_STRING("hard"); \
        last_chord_length = 4; \
        break; \
      case CHORD_far: \
        SEND_STRING("far"); \
        last_chord_length = 3; \
        break; \
      case CHORD_sea: \
        SEND_STRING("sea"); \
        last_chord_length = 3; \
        break; \
      case CHORD_draw: \
        SEND_STRING("draw"); \
        last_chord_length = 4; \
        break; \
      case CHORD_left: \
        SEND_STRING("left"); \
        last_chord_length = 4; \
        break; \
      case CHORD_press: \
        SEND_STRING("press"); \
        last_chord_length = 5; \
        break; \
      case CHORD_close: \
        SEND_STRING("close"); \
        last_chord_length = 5; \
        break; \
      case CHORD_night: \
        SEND_STRING("night"); \
        last_chord_length = 5; \
        break; \
      case CHORD_north: \
        SEND_STRING("north"); \
        last_chord_length = 5; \
        break; \
      case CHORD_togethe: \
        SEND_STRING("together"); \
        last_chord_length = 8; \
        break; \
      case CHORD_next: \
        SEND_STRING("next"); \
        last_chord_length = 4; \
        break; \
      case CHORD_white: \
        SEND_STRING("white"); \
        last_chord_length = 5; \
        break; \
      case CHORD_childre: \
        SEND_STRING("children"); \
        last_chord_length = 8; \
        break; \
      case CHORD_got: \
        SEND_STRING("got"); \
        last_chord_length = 3; \
        break; \
      case CHORD_walk: \
        SEND_STRING("walk"); \
        last_chord_length = 4; \
        break; \
      case CHORD_example: \
        SEND_STRING("example"); \
        last_chord_length = 7; \
        break; \
      case CHORD_always: \
        SEND_STRING("always"); \
        last_chord_length = 6; \
        break; \
      case CHORD_music: \
        SEND_STRING("music"); \
        last_chord_length = 5; \
        break; \
      case CHORD_mark: \
        SEND_STRING("mark"); \
        last_chord_length = 4; \
        break; \
      case CHORD_often: \
        SEND_STRING("often"); \
        last_chord_length = 5; \
        break; \
      case CHORD_letter: \
        SEND_STRING("letter"); \
        last_chord_length = 6; \
        break; \
      case CHORD_until: \
        SEND_STRING("until"); \
        last_chord_length = 5; \
        break; \
      case CHORD_mile: \
        SEND_STRING("mile"); \
        last_chord_length = 4; \
        break; \
      case CHORD_river: \
        SEND_STRING("river"); \
        last_chord_length = 5; \
        break; \
      case CHORD_car: \
        SEND_STRING("car"); \
        last_chord_length = 3; \
        break; \
      case CHORD_feet: \
        SEND_STRING("feet"); \
        last_chord_length = 4; \
        break; \
      case CHORD_care: \
        SEND_STRING("care"); \
        last_chord_length = 4; \
        break; \
      case CHORD_second: \
        SEND_STRING("second"); \
        last_chord_length = 6; \
        break; \
      case CHORD_carry: \
        SEND_STRING("carry"); \
        last_chord_length = 5; \
        break; \
      case CHORD_science: \
        SEND_STRING("science"); \
        last_chord_length = 7; \
        break; \
      case CHORD_eat: \
        SEND_STRING("eat"); \
        last_chord_length = 3; \
        break; \
      case CHORD_friend: \
        SEND_STRING("friend"); \
        last_chord_length = 6; \
        break; \
      case CHORD_began: \
        SEND_STRING("began"); \
        last_chord_length = 5; \
        break; \
      case CHORD_idea: \
        SEND_STRING("idea"); \
        last_chord_length = 4; \
        break; \
      case CHORD_fish: \
        SEND_STRING("fish"); \
        last_chord_length = 4; \
        break; \
      case CHORD_mountai: \
        SEND_STRING("mountain"); \
        last_chord_length = 8; \
        break; \
      case CHORD_stop: \
        SEND_STRING("stop"); \
        last_chord_length = 4; \
        break; \
      case CHORD_once: \
        SEND_STRING("once"); \
        last_chord_length = 4; \
        break; \
      case CHORD_base: \
        SEND_STRING("base"); \
        last_chord_length = 4; \
        break; \
      case CHORD_horse: \
        SEND_STRING("horse"); \
        last_chord_length = 5; \
        break; \
      case CHORD_cut: \
        SEND_STRING("cut"); \
        last_chord_length = 3; \
        break; \
      case CHORD_sure: \
        SEND_STRING("sure"); \
        last_chord_length = 4; \
        break; \
      case CHORD_watch: \
        SEND_STRING("watch"); \
        last_chord_length = 5; \
        break; \
      case CHORD_color: \
        SEND_STRING("color"); \
        last_chord_length = 5; \
        break; \
      case CHORD_wood: \
        SEND_STRING("wood"); \
        last_chord_length = 4; \
        break; \
      case CHORD_main: \
        SEND_STRING("main"); \
        last_chord_length = 4; \
        break; \
      case CHORD_enough: \
        SEND_STRING("enough"); \
        last_chord_length = 6; \
        break; \
      case CHORD_plain: \
        SEND_STRING("plain"); \
        last_chord_length = 5; \
        break; \
      case CHORD_girl: \
        SEND_STRING("girl"); \
        last_chord_length = 4; \
        break; \
      case CHORD_usual: \
        SEND_STRING("usual"); \
        last_chord_length = 5; \
        break; \
      case CHORD_young: \
        SEND_STRING("young"); \
        last_chord_length = 5; \
        break; \
      case CHORD_ready: \
        SEND_STRING("ready"); \
        last_chord_length = 5; \
        break; \
      case CHORD_above: \
        SEND_STRING("above"); \
        last_chord_length = 5; \
        break; \
      case CHORD_red: \
        SEND_STRING("red"); \
        last_chord_length = 3; \
        break; \
      case CHORD_list: \
        SEND_STRING("list"); \
        last_chord_length = 4; \
        break; \
      case CHORD_though: \
        SEND_STRING("though"); \
        last_chord_length = 6; \
        break; \
      case CHORD_bird: \
        SEND_STRING("bird"); \
        last_chord_length = 4; \
        break; \
      case CHORD_body: \
        SEND_STRING("body"); \
        last_chord_length = 4; \
        break; \
      case CHORD_family: \
        SEND_STRING("family"); \
        last_chord_length = 6; \
        break; \
      case CHORD_direct: \
        SEND_STRING("direct"); \
        last_chord_length = 6; \
        break; \
      case CHORD_pose: \
        SEND_STRING("pose"); \
        last_chord_length = 4; \
        break; \
      case CHORD_song: \
        SEND_STRING("song"); \
        last_chord_length = 4; \
        break; \
      case CHORD_measure: \
        SEND_STRING("measure"); \
        last_chord_length = 7; \
        break; \
      case CHORD_product: \
        SEND_STRING("product"); \
        last_chord_length = 7; \
        break; \
      case CHORD_black: \
        SEND_STRING("black"); \
        last_chord_length = 5; \
        break; \
      case CHORD_short: \
        SEND_STRING("short"); \
        last_chord_length = 5; \
        break; \
      case CHORD_numeral: \
        SEND_STRING("numeral"); \
        last_chord_length = 7; \
        break; \
      case CHORD_class: \
        SEND_STRING("class"); \
        last_chord_length = 5; \
        break; \
      case CHORD_wind: \
        SEND_STRING("wind"); \
        last_chord_length = 4; \
        break; \
      case CHORD_questio: \
        SEND_STRING("question"); \
        last_chord_length = 8; \
        break; \
      case CHORD_happen: \
        SEND_STRING("happen"); \
        last_chord_length = 6; \
        break; \
      case CHORD_complet: \
        SEND_STRING("complete"); \
        last_chord_length = 8; \
        break; \
      case CHORD_ship: \
        SEND_STRING("ship"); \
        last_chord_length = 4; \
        break; \
      case CHORD_half: \
        SEND_STRING("half"); \
        last_chord_length = 4; \
        break; \
      case CHORD_rock: \
        SEND_STRING("rock"); \
        last_chord_length = 4; \
        break; \
      case CHORD_fire: \
        SEND_STRING("fire"); \
        last_chord_length = 4; \
        break; \
      case CHORD_south: \
        SEND_STRING("south"); \
        last_chord_length = 5; \
        break; \
      case CHORD_told: \
        SEND_STRING("told"); \
        last_chord_length = 4; \
        break; \
      case CHORD_knew: \
        SEND_STRING("knew"); \
        last_chord_length = 4; \
        break; \
      case CHORD_pass: \
        SEND_STRING("pass"); \
        last_chord_length = 4; \
        break; \
      case CHORD_top: \
        SEND_STRING("top"); \
        last_chord_length = 3; \
        break; \
      case CHORD_whole: \
        SEND_STRING("whole"); \
        last_chord_length = 5; \
        break; \
      case CHORD_space: \
        SEND_STRING("space"); \
        last_chord_length = 5; \
        break; \
      case CHORD_best: \
        SEND_STRING("best"); \
        last_chord_length = 4; \
        break; \
      case CHORD_hour: \
        SEND_STRING("hour"); \
        last_chord_length = 4; \
        break; \
      case CHORD_better: \
        SEND_STRING("better"); \
        last_chord_length = 6; \
        break; \
      case CHORD_true: \
        SEND_STRING("true"); \
        last_chord_length = 4; \
        break; \
      case CHORD_hundred: \
        SEND_STRING("hundred"); \
        last_chord_length = 7; \
        break; \
      case CHORD_five: \
        SEND_STRING("five"); \
        last_chord_length = 4; \
        break; \
      case CHORD_six: \
        SEND_STRING("six"); \
        last_chord_length = 3; \
        break; \
      case CHORD_war: \
        SEND_STRING("war"); \
        last_chord_length = 3; \
        break; \
      case CHORD_lay: \
        SEND_STRING("lay"); \
        last_chord_length = 3; \
        break; \
      case CHORD_map: \
        SEND_STRING("map"); \
        last_chord_length = 3; \
        break; \
      case CHORD_fly: \
        SEND_STRING("fly"); \
        last_chord_length = 3; \
        break; \
      case CHORD_fall: \
        SEND_STRING("fall"); \
        last_chord_length = 4; \
        break; \
      case CHORD_cry: \
        SEND_STRING("cry"); \
        last_chord_length = 3; \
        break; \
      case CHORD_box: \
        SEND_STRING("box"); \
        last_chord_length = 3; \
        break; \
      case CHORD_noun: \
        SEND_STRING("noun"); \
        last_chord_length = 4; \
        break; \
      case CHORD_week: \
        SEND_STRING("week"); \
        last_chord_length = 4; \
        break; \
      case CHORD_oh: \
        SEND_STRING("oh"); \
        last_chord_length = 2; \
        break; \
      case CHORD_free: \
        SEND_STRING("free"); \
        last_chord_length = 4; \
        break; \
      case CHORD_dry: \
        SEND_STRING("dry"); \
        last_chord_length = 3; \
        break; \
      case CHORD_ago: \
        SEND_STRING("ago"); \
        last_chord_length = 3; \
        break; \
      case CHORD_ran: \
        SEND_STRING("ran"); \
        last_chord_length = 3; \
        break; \
      case CHORD_hot: \
        SEND_STRING("hot"); \
        last_chord_length = 3; \
        break; \
      case CHORD_ball: \
        SEND_STRING("ball"); \
        last_chord_length = 4; \
        break; \
      case CHORD_yet: \
        SEND_STRING("yet"); \
        last_chord_length = 3; \
        break; \
      case CHORD_am: \
        SEND_STRING("am"); \
        last_chord_length = 2; \
        break; \
      case CHORD_arm: \
        SEND_STRING("arm"); \
        last_chord_length = 3; \
        break; \
      case CHORD_ice: \
        SEND_STRING("ice"); \
        last_chord_length = 3; \
        break; \
      case CHORD_matter: \
        SEND_STRING("matter"); \
        last_chord_length = 6; \
        break; \
      case CHORD_art: \
        SEND_STRING("art"); \
        last_chord_length = 3; \
        break; \
      case CHORD_cell: \
        SEND_STRING("cell"); \
        last_chord_length = 4; \
        break; \
      case CHORD_summer: \
        SEND_STRING("summer"); \
        last_chord_length = 6; \
        break; \
      case CHORD_leg: \
        SEND_STRING("leg"); \
        last_chord_length = 3; \
        break; \
      case CHORD_joy: \
        SEND_STRING("joy"); \
        last_chord_length = 3; \
        break; \
      case CHORD_job: \
        SEND_STRING("job"); \
        last_chord_length = 3; \
        break; \
      case CHORD_gas: \
        SEND_STRING("gas"); \
        last_chord_length = 3; \
        break; \
      case CHORD_buy: \
        SEND_STRING("buy"); \
        last_chord_length = 3; \
        break; \
      case CHORD_cook: \
        SEND_STRING("cook"); \
        last_chord_length = 4; \
        break; \
      case CHORD_hill: \
        SEND_STRING("hill"); \
        last_chord_length = 4; \
        break; \
      case CHORD_law: \
        SEND_STRING("law"); \
        last_chord_length = 3; \
        break; \
      case CHORD_lie: \
        SEND_STRING("lie"); \
        last_chord_length = 3; \
        break; \
      case CHORD_son: \
        SEND_STRING("son"); \
        last_chord_length = 3; \
        break; \
      case CHORD_pay: \
        SEND_STRING("pay"); \
        last_chord_length = 3; \
        break; \
      case CHORD_age: \
        SEND_STRING("age"); \
        last_chord_length = 3; \
        break; \
      case CHORD_cool: \
        SEND_STRING("cool"); \
        last_chord_length = 4; \
        break; \
      case CHORD_lot: \
        SEND_STRING("lot"); \
        last_chord_length = 3; \
        break; \
      case CHORD_key: \
        SEND_STRING("key"); \
        last_chord_length = 3; \
        break; \
      case CHORD_row: \
        SEND_STRING("row"); \
        last_chord_length = 3; \
        break; \
      case CHORD_die: \
        SEND_STRING("die"); \
        last_chord_length = 3; \
        break; \
      case CHORD_oil: \
        SEND_STRING("oil"); \
        last_chord_length = 3; \
        break; \
      case CHORD_fit: \
        SEND_STRING("fit"); \
        last_chord_length = 3; \
        break; \
      case CHORD_hit: \
        SEND_STRING("hit"); \
        last_chord_length = 3; \
        break; \
      case CHORD_rub: \
        SEND_STRING("rub"); \
        last_chord_length = 3; \
        break; \
      case CHORD_tie: \
        SEND_STRING("tie"); \
        last_chord_length = 3; \
        break; \
      case CHORD_gun: \
        SEND_STRING("gun"); \
        last_chord_length = 3; \
        break; \
      case CHORD_nine: \
        SEND_STRING("nine"); \
        last_chord_length = 4; \
        break; \
      case CHORD_thank: \
        SEND_STRING("thank"); \
        last_chord_length = 5; \
        break; \
      case CHORD_experie: \
        SEND_STRING("experience"); \
        last_chord_length = 10; \
        break; \
      case CHORD_led: \
        SEND_STRING("led"); \
        last_chord_length = 3; \
        break; \
      case CHORD_win: \
        SEND_STRING("win"); \
        last_chord_length = 3; \
        break; \
      case CHORD_feed: \
        SEND_STRING("feed"); \
        last_chord_length = 4; \
        break; \
      case CHORD_nor: \
        SEND_STRING("nor"); \
        last_chord_length = 3; \
        break; \
      case CHORD_fat: \
        SEND_STRING("fat"); \
        last_chord_length = 3; \
        break; \
      case CHORD_bar: \
        SEND_STRING("bar"); \
        last_chord_length = 3; \
        break; \
      case CHORD_log: \
        SEND_STRING("log"); \
        last_chord_length = 3; \
        break; \
      case CHORD_hey: \
        SEND_STRING("hey"); \
        last_chord_length = 3; \
        break; \
      case CHORD_return: \
        SEND_STRING("return"); \
        last_chord_length = 6; \
        break; \
      case CHORD_probabl: \
        SEND_STRING("probably"); \
        last_chord_length = 8; \
        break; \
      case CHORD_thanks: \
        SEND_STRING("thanks"); \
        last_chord_length = 6; \
        break; \
      case CHORD_i_ve: \
        SEND_STRING("I've"); \
        last_chord_length = 4; \
        break; \
      case CHORD_per: \
        SEND_STRING("per"); \
        last_chord_length = 3; \
        break; \
      case CHORD_null: \
        SEND_STRING("null"); \
        last_chord_length = 4; \
        break; \
      case CHORD_nil: \
        SEND_STRING("nil"); \
        last_chord_length = 3; \
        break; \
      case CHORD_array: \
        SEND_STRING("array"); \
        last_chord_length = 5; \
        break; \
      case CHORD_sort: \
        SEND_STRING("sort"); \
        last_chord_length = 4; \
        break; \
      case CHORD_http_: \
        space = false; \
        SEND_STRING("http://"); \
        last_chord_length = 7; \
        break; \
      case CHORD_https_: \
        space = false; \
        SEND_STRING("https://"); \
        last_chord_length = 8; \
        break; \
      case CHORD_in_the: \
        SEND_STRING("in the"); \
        last_chord_length = 6; \
        break; \
      case CHORD_of_the: \
        SEND_STRING("of the"); \
        last_chord_length = 6; \
        break; \
      case CHORD_to_be: \
        SEND_STRING("to be"); \
        last_chord_length = 5; \
        break; \
      case CHORD_to_the: \
        SEND_STRING("to the"); \
        last_chord_length = 6; \
        break; \
      case CHORD_and_the: \
        SEND_STRING("and the"); \
        last_chord_length = 7; \
        break; \
      case CHORD_and_i: \
        SEND_STRING("and I"); \
        last_chord_length = 5; \
        break; \
      case CHORD_on_the: \
        SEND_STRING("on the"); \
        last_chord_length = 6; \
        break; \
      case CHORD_it_is: \
        SEND_STRING("it is"); \
        last_chord_length = 5; \
        break; \
      case CHORD_if_you: \
        SEND_STRING("if you"); \
        last_chord_length = 6; \
        break; \
      case CHORD_the_wor: \
        SEND_STRING("the world"); \
        last_chord_length = 9; \
        break; \
      case CHORD_in_a: \
        SEND_STRING("in a"); \
        last_chord_length = 4; \
        break; \
      case CHORD_the_qui: \
        space = false; \
        SEND_STRING("the quick brown fox jumps over the lazy dog"); \
        last_chord_length = 43; \
        break; \
      case CHORD_elberet: \
        space = false; \
        SEND_STRING("Elbereth"); \
        last_chord_length = 8; \
        break; \
      PERSONAL_CHORD_OUTPUT_FUNC \
      default: \
        space = false; \
        break; \
    } \
    if (space) { \
      tap_code(KC_SPC); \
      last_chord_length++; \
    } \
  }

#define CHORD_DUP_FUNC \
  uint8_t process_chord_dup(uint16_t last_chord, uint8_t last_chord_cycle) { \
    uint8_t next_chord_cycle = 0; \
    uint8_t backspaces = 0; \
    char *append = NULL; \
    bool space = true; \
    switch(last_chord) { \
      case CHORD_have: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "d"; \
            last_chord_length = 3; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ving"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_it: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "them"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "it"; \
            last_chord_length = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_that: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ose"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "at"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_i: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "we"; \
            last_chord_length = 2; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "I"; \
            last_chord_length = 1; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_she: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "they"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "she"; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_this: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ese"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "is"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_we: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "I"; \
            last_chord_length = 1; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "we"; \
            last_chord_length = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_do: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "id"; \
            last_chord_length = 3; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "oing"; \
            last_chord_length = 5; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_one: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_will: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_say: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "id"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ying"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_make: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "de"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "king"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_more: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "st"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "any"; \
            last_chord_length = 4; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "ore"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_man: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "en"; \
            last_chord_length = 3; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "an"; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_out: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_other: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_time: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_go: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "went"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "going"; \
            last_chord_length = 5; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 2; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_state: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_new: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_year: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_take: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ook"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "aking"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_come: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ame"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "oming"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_these: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "is"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ese"; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_know: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ew"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "owing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_see: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "aw"; \
            last_chord_length = 3; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "eeing"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_use: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 5; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_get: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ot"; \
            last_chord_length = 3; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "etting"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 5; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_like: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_work: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_give: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ave"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "iving"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_think: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ought"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 6; \
            append = "inking"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_most: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "any"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "ore"; \
            last_chord_length = 4; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "st"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_find: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ound"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "inding"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_day: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_way: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_many: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ore"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "st"; \
            last_chord_length = 4; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "any"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_look: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_great: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_back: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_long: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_well: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_people: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 6; \
            append = "rson"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 5; \
            append = "ople"; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_own: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_good: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 5; \
            append = "better"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "st"; \
            last_chord_length = 4; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 5; \
            append = "good"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_those: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "at"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ose"; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_feel: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "lt"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "eling"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_seem: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_high: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_place: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_little: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "r"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_world: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_nation: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_hand: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_old: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_life: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "ves"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "fe"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_tell: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "old"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "elling"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_write: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ote"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "iting"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_become: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ame"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "oming"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_show: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_house: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_need: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_mean: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "t"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_call: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_develop: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 9; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 10; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 7; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_right: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_move: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_thing: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_general: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 7; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_school: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_begin: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "an"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "inning"; \
            last_chord_length = 9; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 5; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_number: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_part: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_turn: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_leave: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "ft"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "aving"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_want: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_point: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 8; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_form: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_child: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ren"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_few: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_small: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "er"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_ask: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_late: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "r"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_home: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_interes: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 9; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 10; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 11; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 8; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_large: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "r"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_person: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 5; \
            append = "ople"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "rson"; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_end: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 5; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_open: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_follow: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 9; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_present: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 9; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 10; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 7; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_hold: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "eld"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "olding"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_govern: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 9; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_head: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_conside: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 10; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 11; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 8; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_word: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_program: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "med"; \
            last_chord_length = 10; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 11; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 5; \
            last_chord_length = 7; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_problem: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 7; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_lead: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "d"; \
            last_chord_length = 3; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 2; \
            append = "ading"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_system: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_set: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ting"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 5; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_order: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 8; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_eye: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "d"; \
            last_chord_length = 4; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 2; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_plan: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ned"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 8; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 5; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_run: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "an"; \
            last_chord_length = 3; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "unning"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 5; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_keep: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "pt"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "eping"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_face: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "d"; \
            last_chord_length = 5; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 6; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_fact: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_group: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 8; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_play: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_stand: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 5; \
            append = "ood"; \
            last_chord_length = 5; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "anding"; \
            last_chord_length = 8; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_increas: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "d"; \
            last_chord_length = 9; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 10; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 8; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_early: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = "ier"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "st"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 5; \
            append = "y"; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_course: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_change: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "d"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 8; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 4; \
            append = "e"; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_help: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "ing"; \
            last_chord_length = 7; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 4; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_line: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_return: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 8; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 9; \
            append = "will return"; \
            last_chord_length = 11; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 12; \
            append = "return"; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_thanks: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 2; \
            append = " you"; \
            last_chord_length = 9; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 10; \
            append = "Thanks very much!"; \
            last_chord_length = 17; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 18; \
            append = "thanks"; \
            last_chord_length = 6; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_null: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_nil: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 4; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 3; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_array: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 6; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            last_chord_length = 5; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_sort: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 1; \
            append = "s"; \
            last_chord_length = 5; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 2; \
            append = "ed"; \
            last_chord_length = 6; \
            next_chord_cycle = 2; \
          break; \
          case 2: \
            backspaces = 7; \
            append = "will sort"; \
            last_chord_length = 9; \
            next_chord_cycle = 3; \
          break; \
          case 3: \
            backspaces = 10; \
            append = "sort"; \
            last_chord_length = 4; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_http_: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 3; \
            append = "s://"; \
            space = false; \
            last_chord_length = 8; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 4; \
            append = "://"; \
            space = false; \
            last_chord_length = 7; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      case CHORD_https_: \
        switch(last_chord_cycle) { \
          case 0: \
            backspaces = 4; \
            append = "://"; \
            space = false; \
            last_chord_length = 7; \
            next_chord_cycle = 1; \
          break; \
          case 1: \
            backspaces = 3; \
            append = "s://"; \
            space = false; \
            last_chord_length = 8; \
            next_chord_cycle = 0; \
          break; \
        } \
        break; \
      PERSONAL_DUP_FUNC \
      default: \
        space = false; \
        break; \
    } \
    for (uint8_t i = 0; i < backspaces; i++) { \
      tap_code(KC_BSPC); \
    } \
    if (append != NULL) { \
      send_string(append); \
    } \
    if (space) { \
      tap_code(KC_SPC); \
      last_chord_length++; \
    } \
    return next_chord_cycle; \
  }
