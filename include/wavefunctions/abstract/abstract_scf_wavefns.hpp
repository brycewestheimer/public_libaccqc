// abstract_scf_wavefns.hpp: Abstract base classes for SCF-type wave functions 

#ifndef LIBACCQC_ABSTRACT_SCF_WAVEFNS_HPP_
#define LIBACCQC_ABSTRACT_SCF_WAVEFNS_HPP_

#include "abstract_wavefn.hpp"

namespace libaccqc {

  namespace wavefunctions {

    // Abstract base class for all SCF-type wave functions
    class ScfWavefn : public Wavefn {

      // TODO: Copy over as possible

    };

    // Abstract base class for all RESTRICTED SCF-type wave functions
    class RestrictedScfWavefn : public ScfWavefn {

      // TODO: Copy over as possible

    };

    // Abstract base class for all UNRESTRICTED SCF-type wave functions
    class UnrestrictScfWavefn : public ScfWavefn {

      // TODO: Copy over as possible

    };

    // Abstract base class for all MULTI-REFERENCE SCF-type wave functions
    class MultiScfWavefn : public ScfWavefn {

      // TODO: Copy over as possible

    };

  } // namespace libaccqc::wavefunctions

} // namespace libaccqc

#endif /* LIBACCQC_ABSTRACT_SCF_WAVEFNS_HPP_ */