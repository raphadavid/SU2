/*!
 * \file iteration_structure.hpp
 * \brief Headers of the main subroutines used by SU2_CFD.
 *        The subroutines and functions are in the <i>definition_structure.cpp</i> file.
 * \author Aerospace Design Laboratory (Stanford University) <http://su2.stanford.edu>.
 * \version 2.0.8
 *
 * Stanford University Unstructured (SU2).
 * Copyright (C) 2012-2013 Aerospace Design Laboratory (ADL).
 *
 * SU2 is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * SU2 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with SU2. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef NO_MPI
#include <mpi.h>
#endif
#include <ctime>

#include "solver_structure.hpp"
#include "integration_structure.hpp"
#include "output_structure.hpp"
#include "numerics_structure.hpp"
#include "../../Common/include/geometry_structure.hpp"
#include "../../Common/include/grid_movement_structure.hpp"
#include "../../Common/include/config_structure.hpp"

using namespace std;

/*! 
 * \brief ________________________.
 * \param[in] output - Pointer to the COutput class.
 * \param[in] integration_container - Container vector with all the integration methods.
 * \param[in] geometry_container - Geometrical definition of the problem.
 * \param[in] solver_container - Container vector with all the solutions.
 * \param[in] numerics_container - Description of the numerical method (the way in which the equations are solved).
 * \param[in] config_container - Definition of the particular problem.
 * \param[in] surface_movement - Surface movement classes of the problem.
 * \param[in] grid_movement - Volume grid movement classes of the problem.
 * \param[in] FFDBox - FFD FFDBoxs of the problem.
 * \param[in] ExtIter - Current physical time iteration number.
 */
void MeanFlowIteration(COutput *output, CIntegration ***integration_container, CGeometry ***geometry_container, 
											 CSolver ****solver_container, CNumerics *****numerics_container, CConfig **config_container, 
											 CSurfaceMovement **surface_movement, CVolumetricMovement **grid_movement);