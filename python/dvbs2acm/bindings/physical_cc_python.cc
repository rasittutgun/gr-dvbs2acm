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
/* BINDTOOL_HEADER_FILE(physical_cc.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(72a0cade79b75ad23851ab714294cc9e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dvbs2acm/physical_cc.h>
// pydoc.h is automatically generated in the build directory
#include <physical_cc_pydoc.h>

void bind_physical_cc(py::module& m)
{

    using physical_cc    = gr::dvbs2acm::physical_cc;


    py::class_<physical_cc, gr::block, gr::basic_block,
        std::shared_ptr<physical_cc>>(m, "physical_cc", D(physical_cc))

        .def(py::init(&physical_cc::make),
           D(physical_cc,make)
        )
        



        ;




}








