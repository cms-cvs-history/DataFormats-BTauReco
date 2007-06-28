#ifndef BTauReco_TauMassTagInfo_h
#define BTauReco_TauMassTagInfo_h

#include <vector>
#include <map>

#include "DataFormats/BTauReco/interface/JetTag.h"
#include "DataFormats/BTauReco/interface/JTATagInfo.h"
#include "DataFormats/BTauReco/interface/TauMassTagInfoFwd.h"
#include "DataFormats/BTauReco/interface/IsolatedTauTagInfo.h"
#include "DataFormats/EgammaReco/interface/BasicCluster.h"
#include "DataFormats/EgammaReco/interface/BasicClusterFwd.h"
#include "DataFormats/Common/interface/AssociationMap.h"

namespace reco {
 
  class TauMassTagInfo : public JTATagInfo {
  public:

    typedef edm::AssociationMap < edm::OneToValue<BasicClusterCollection,
      float, unsigned short> > ClusterTrackAssociationCollection;

    TauMassTagInfo() {}
    virtual ~TauMassTagInfo() {}
    
    virtual TauMassTagInfo* clone() const { return new TauMassTagInfo( * this ); }
    
    //default discriminator: returns the discriminator of the jet tag
    float discriminator() const {return -1. ;}
    
    float discriminator(double matching_cone, double leading_trk_pt,
                                   double signal_cone, double cluster_track_cone, 
                                   double m_cut) const;
    
    void  setIsolatedTauTag(const IsolatedTauTagInfoRef);
    const IsolatedTauTagInfoRef& getIsolatedTauTag() const;

    void storeClusterTrackCollection(reco::BasicClusterRef clusterRef,float dr);
    TauMassTagInfo::ClusterTrackAssociationCollection clusterTrackCollection() const { return clusterMap;}

    double getInvariantMassTrk(double matching_cone,double leading_trk_pt, double signal_cone) const;    
    double getInvariantMass(double matching_cone,double leading_trk_pt, double signal_cone,
                                double cluster_track_cone) const;    

  private:

    bool calculateTrkP4(double matching_cone,double leading_trk_pt, double signal_cone, 
                            math::XYZTLorentzVector& p4) const;

    IsolatedTauTagInfoRef             isolatedTau;
    ClusterTrackAssociationCollection clusterMap; // const?

  };
 
}
#endif


