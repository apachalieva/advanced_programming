/** @file
 * This file is part of the Advanced Progamming lecture.
 *
 * @author Alexander Breuer (breuera AT in.tum.de, http://www5.in.tum.de/wiki/index.php/Dipl.-Math._Alexander_Breuer)
 *
 * @section LICENSE
 * Copyright (c) 2013
 * Technische Universitaet Muenchen
 * Department of Informatics
 * Chair of Scientific Computing
 * http://www5.in.tum.de/
 *
 * @section DESCRIPTION
 * High-level language example, to show assembly code generated by the compiler.
 **/

void setInt( int *o_a, int *o_b, int *o_c ) {
  *o_a = 0;
  *o_b = 16;
  *o_c = 32;
}

void computeInt( int *i_a, int *i_b, int *io_c ) {
  *io_c += (i_a) * (*i_b);
}

void setDouble( double *o_x, double *o_y, double *o_z ) {
  *o_x = 1.0;
  *o_y = 2.0;
  *o_z = 3.0;
}

void computeDouble( double *i_x, double *i_y, double *io_z ) {
  *io_z += (*i_x) * (*i_y);
}
