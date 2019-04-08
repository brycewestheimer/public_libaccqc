// abstract_post_scf_wavefn.hpp: Abstract base class for post-SCF-type wave functions (CI, CC, etc.)

#ifndef LIBACCQC_ABSTRACT_POST_SCF_WAVEFN_HPP_
#define LIBACCQC_ABSTRACT_POST_SCF_WAVEFN_HPP_

#include "abstract_wavefn.hpp"

namespace libaccqc {

  namespace wavefunctions {

    template<class RefWavefnType>
    class PostScfWavefn : public Wavefn {

      public:

        // TODO: Copy over as possible
      
      protected:

        // TODO: Copy over as possible

      private:

        // TODO: Copy over as possible

        // SCF-type reference wave function
        RefWavefnType ref_wavefn_;

    };

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_ABSTRACT_POST_SCF_WAVEFN_HPP_ */