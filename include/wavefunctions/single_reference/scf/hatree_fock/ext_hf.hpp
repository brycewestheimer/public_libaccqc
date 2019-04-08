// rhf.hpp: Class for Restricted, closed-shell Hartree-Fock wave function

#ifndef LIBACCQC_RHF_HPP_
#define LIBACCQC_RHF_HPP_

#include "abstract_scf_wavefns.hpp"

#include "dtl.hpp"  // Distributed vector and Matrix classes

namespace libaccqc {

  namespace wavefunctions {

    namespace single_reference {

      // Restricted, closed-shell Hartree-Fock wave function. Generic class template.
      // Attempts to build distributed matrices where applicable. Functionality then defined
      // in template specializations
      template<dtl::DistribType distrib_type>
      class RhfWavefn : public RestrictScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          RhfWavefn();
          // TODO: Etc.
          ~RhfWavefn();

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

          // Hartree-Fock-Roothaan-Hall matrices
          dtl::math::Matrix<double, distrib_type> overlap_matrix_;
          dtl::math::Matrix<double, distrib_type> core_matrix_;
          dtl::math::Matrix<double, distrib_type> fock_matrix_;
          dtl::math::Matrix<double, dtl::DistribType::none> density_matrix_;  // No need to distribute or treat as replicated, just keep local version
          dtl::math::Matrix<double, dtl::DistribType::none> coeff_matrix_;    // No need to distribute or treat as replicated, just keep local version

          // TODO: Etc.

      };

      /***** Distributed specializations of various member functions in RhfWavefn *****/

      /*
      * Format:
      * 
      *    template<>
      *    ReturnType RhfWavefn<DistribType::distributed>::function_name(params) { ... }
      * 
      */

    } // namespace libaccqc::wavefunctions::single_reference
    
  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_RHF_HPP_ */