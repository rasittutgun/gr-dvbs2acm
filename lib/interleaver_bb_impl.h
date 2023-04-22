/* -*- c++ -*- */
/*
 * Copyright 2023 AsriFox.
 * Copyright 2014,2016 Ron Economos.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_DVBS2ACM_INTERLEAVER_BB_IMPL_H
#define INCLUDED_DVBS2ACM_INTERLEAVER_BB_IMPL_H

#include <gnuradio/dvbs2acm/dvbs2_config.h>
#include <gnuradio/dvbs2acm/interleaver_bb.h>

namespace gr {
namespace dvbs2acm {

class interleaver_bb_impl : public interleaver_bb
{
private:
    int rowaddr[5];
    void get_rows(gr::dvbs2::dvbs2_framesize_t,
                  gr::dvbs2::dvbs2_code_rate_t,
                  gr::dvbs2::dvbs2_constellation_t,
                  int&,
                  int&);

public:
    interleaver_bb_impl();
    ~interleaver_bb_impl();

    // Where all the action really happens
    void forecast(int noutput_items, gr_vector_int& ninput_items_required);

    int general_work(int noutput_items,
                     gr_vector_int& ninput_items,
                     gr_vector_const_void_star& input_items,
                     gr_vector_void_star& output_items);
};

} // namespace dvbs2acm
} // namespace gr

#endif /* INCLUDED_DVBS2ACM_INTERLEAVER_BB_IMPL_H */