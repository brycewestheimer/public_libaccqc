// abstract_post_scf_wavefn.hpp: Abstract base class for post-SCF-type wave functions (CI, CC, etc.)

#ifndef LIBACCQC_ABSTRACT_POST_SCF_WAVEFN_HPP_
#define LIBACCQC_ABSTRACT_POST_SCF_WAVEFN_HPP_

#include "abstract_wavefn.hpp"

namespace libaccqc {

  namespace wavefunctions {

    namespace abstract {

      /*! \class PostScfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The abstract (single-reference) post-SCF wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 9, 2019 (Copied)
       * 
       */ 
      template<class RefWavefnType>
      class PostScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          PostScfWavefn();
          // TODO: Etc.
          ~PostScfWavefn();

        /***** Public Member Functions *****/

          // Initialize post-scf components of wave function
          virtual void initialize() = 0;

          // Get the reference wave function
          virtual void get_ref_wavefn() = 0;

          // Solve for the post-SCF component of the full wave function
          virtual void solve() = 0;

          // Calculate the energy corresponding to the wave function (post-scf terms only)
          // Note: This does not include energy terms arising solely
          //       due to interactions between external potential terms
          virtual void energy() = 0;

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

          // Reference wave function
          RefWavefnType reference_wavefn_;
          
          // TODO: Etc.

      };

      /*! \class MultirefPostScfWavefn
       *  \ingroup TODO:ADD_GROUP
       * 
       *  \brief The abstract multireference post-SCF wave function class
       * 
       *  \details TODO
       * 
       *  \author Bryce M. Westheimer
       * 
       *  \date Apr 9, 2019 (Copied)
       * 
       */ 
      template<class RefWavefnType>
      class MultirefPostScfWavefn {

        public:

        /***** Constructor(s) and Destructor(s) *****/

          MultirefPostScfWavefn();
          // TODO: Etc.
          ~MultirefPostScfWavefn();

        /***** Public Member Functions *****/

          // Initialize post-scf components of wave function
          virtual void initialize() = 0;

          // Get the reference wave function
          virtual void get_ref_wavefn() = 0;

          // Solve for the post-SCF component of the full wave function
          virtual void solve() = 0;

          // Calculate the energy corresponding to the wave function (post-scf terms only)
          // Note: This does not include energy terms arising solely
          //       due to interactions between external potential terms
          virtual void energy() = 0;

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

          // Reference multireference scf wave function
          MultirefScfWavefn<RefWavefnType> reference_wavefn_;
          
          // TODO: Etc.

      };

    } // namespace libaccqc::wavefunctions::abstract

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_ABSTRACT_POST_SCF_WAVEFN_HPP_ */