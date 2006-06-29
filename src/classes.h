#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/BTauReco/interface/JetTag.h"
#include "DataFormats/BTauReco/interface/TrackCountingTagInfo.h"
#include "DataFormats/BTauReco/interface/IsolatedTauTagInfo.h"
#include "DataFormats/BTauReco/interface/JetTracksAssociation.h"
#include "DataFormats/BTauReco/interface/CombinedBTagInfo.h"
#include "DataFormats/BTauReco/interface/SoftLeptonTagInfo.h"
#include "DataFormats/JetReco/interface/CaloJetCollection.h"

namespace {
  namespace {
    reco::JetTagCollection v1;
    edm::Wrapper<reco::JetTagCollection> w1;
    edm::Ref<reco::JetTagCollection> r1;
    edm::RefProd<reco::JetTagCollection> rp1;
    edm::RefVector<reco::JetTagCollection> rv1;

    reco::TrackCountingTagInfoCollection v2;
    edm::Wrapper<reco::TrackCountingTagInfoCollection> w2;
    edm::Ref<reco::TrackCountingTagInfoCollection> r2;
    edm::RefProd<reco::TrackCountingTagInfoCollection> rp2;
    edm::RefVector<reco::TrackCountingTagInfoCollection> rv2;

    reco::JetTracksAssociationCollection v3;
    edm::Wrapper<reco::JetTracksAssociationCollection> w3;
    reco::JetTracksAssociation ra3;
    reco::JetTracksAssociationRef r3;
    reco::JetTracksAssociationRefProd rp3;
    reco::JetTracksAssociationRefVector rv3;

    reco::CombinedBTagInfoCollection v4;
    edm::Wrapper<reco::CombinedBTagInfoCollection> w4;
    edm::Ref<reco::CombinedBTagInfoCollection> r4;
    edm::RefProd<reco::CombinedBTagInfoCollection> rp4;
    edm::RefVector<reco::CombinedBTagInfoCollection> rv4;

    reco::IsolatedTauTagInfoCollection v5;
    edm::Wrapper<reco::IsolatedTauTagInfoCollection> w5;
    edm::Ref<reco::IsolatedTauTagInfoCollection> r5;
    edm::RefProd<reco::IsolatedTauTagInfoCollection> rp5;
    edm::RefVector<reco::IsolatedTauTagInfoCollection> rv5;

    reco::SoftLeptonTagInfoCollection v6;
    edm::Wrapper<reco::SoftLeptonTagInfoCollection> w6;
    edm::Ref<reco::SoftLeptonTagInfoCollection> r6;
    edm::RefProd<reco::SoftLeptonTagInfoCollection> rp6;
    edm::RefVector<reco::SoftLeptonTagInfoCollection> rv6;

    std::pair<unsigned int, unsigned int> pp1;
    std::map<unsigned long, std::vector<unsigned long> > m1;
    edm::RefProd<reco::CaloJetCollection> rpj1;
  }
}
