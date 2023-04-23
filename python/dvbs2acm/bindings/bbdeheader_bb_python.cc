/*
 * Copyright 2023 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(bbdeheader_bb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(62eb79331d8d81702ce7201a7400151f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dvbs2acm/bbdeheader_bb.h>
// pydoc.h is automatically generated in the build directory
#include <bbdeheader_bb_pydoc.h>

void bind_bbdeheader_bb(py::module& m)
{

    using bbdeheader_bb    = gr::dvbs2acm::bbdeheader_bb;


    py::class_<bbdeheader_bb, gr::block, gr::basic_block,
        std::shared_ptr<bbdeheader_bb>>(m, "bbdeheader_bb", D(bbdeheader_bb))

        .def(py::init(&bbdeheader_bb::make),
           D(bbdeheader_bb,make)
        )
        



        ;




}








