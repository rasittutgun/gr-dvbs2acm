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
/* BINDTOOL_HEADER_FILE(bbheader_bb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b0f4e22c1fb6f943981aa739ad6d461a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dvbs2acm/bbheader_bb.h>
// pydoc.h is automatically generated in the build directory
#include <bbheader_bb_pydoc.h>

void bind_bbheader_bb(py::module& m)
{

    using bbheader_bb = gr::dvbs2acm::bbheader_bb;

    py::class_<bbheader_bb, gr::block, gr::basic_block, std::shared_ptr<bbheader_bb>>(
        m, "bbheader_bb", D(bbheader_bb))

        .def(py::init(&bbheader_bb::make),
             py::arg("framesize"),
             py::arg("code_rate"),
             py::arg("constellation"),
             py::arg("pilots"),
             py::arg("rolloff"),
             py::arg("goldcode") = 0,
             D(bbheader_bb, make))


        ;
}
