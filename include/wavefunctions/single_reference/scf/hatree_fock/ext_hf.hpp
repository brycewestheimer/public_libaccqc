/*
 * ext_rhf.hpp
 * 
 * Copied: Apr 9, 2019
 * Author: Bryce M. Westheimer
 * 
 * Description: External Restricted Hartree-Fock wave function class declaration
 * 
 */

#ifndef LIBACCQC_EXT_RHF_HPP_
#define LIBACCQC_EXT_RHF_HPP_

#include "rhf.hpp"

#include "dtl.hpp"  // Distributed vector and Matrix classes

namespace libaccqc {

  namespace wavefunctions {

    namespace single_reference {

      /*! \class ExtRhfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The Restricted Hartree-Fock wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 8, 2019 (Copied)
       * 
       */ 
      class ExtRhfWavefn : public RhfScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          ExtRhfWavefn();
          // TODO: Etc.
          ~ExtRhfWavefn();

        /***** Public Member Functions *****/

          // TODO

        /***** Public Member Variables *****/

          // TODO

        /***** Operator Overloads *****/

          // TODO
        
        protected:

        /***** Protected Member Functions *****/

          // TODO

        /***** Protected Member Variables *****/

          // TODO

        private:

        /***** Private Member Functions *****/

          // TODO

        /***** Private Member Variables *****/

          // Hartree-Fock-Roothaan-Hall matrices. External, so use pointers to first element of each.
          double* overlap_matrix_;
          double* core_matrix_;
          double* fock_matrix_;
          double* density_matrix_;
          double* orbital_coeff_matrix_;

          // Major dimension of external matrices
          enum class MatrixMajorDim {
            Row,
            Column
          } matrix_major_dimension_;

          // TODO: Etc.

      };
      
    } // namespace libaccqc::wavefunctions::single_reference
    
  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_RHF_HPP_ */