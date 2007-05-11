#ifndef DataFormats_BTauReco_JetTagInfo_h
#define DataFormats_BTauReco_JetTagInfo_h

#include "DataFormats/BTauReco/interface/BaseTagInfo.h"
#include "DataFormats/BTauReco/interface/JetTagInfoFwd.h"

namespace reco {
 
class JetTagInfo : public BaseTagInfo {
public:
  JetTagInfo(void) : m_jet() { }

  template <typename T>
  JetTagInfo(const edm::Ref<T> & jetRef) : m_jet(jetRef) { }

  virtual ~JetTagInfo(void) { }
  
  virtual JetTagInfo* clone(void) const { return new JetTagInfo(*this); }

  virtual edm::RefToBase<Jet> jet(void) const { return m_jet; }
  
  template <typename T>
  void setJetRef(const edm::Ref<T> & jetRef) { m_jet = edm::RefToBase<Jet>( jetRef ); } 
  
protected:
  edm::RefToBase<Jet> m_jet;
};

}

#endif // DataFormats_BTauReco_JetTagInfo_h