void TrackMom_6_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  9 17:39:42 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *TrackMom_6__31 = new TH1D("TrackMom_6__31","3000<p<3500 MeV",128,0,3200);
   TrackMom_6__31->SetBinContent(121,1188);
   TrackMom_6__31->SetBinContent(122,444);
   TrackMom_6__31->SetBinContent(123,285);
   TrackMom_6__31->SetBinContent(124,211);
   TrackMom_6__31->SetBinContent(125,130);
   TrackMom_6__31->SetBinContent(126,84);
   TrackMom_6__31->SetBinContent(127,81);
   TrackMom_6__31->SetBinContent(128,66);
   TrackMom_6__31->SetBinContent(129,530);
   TrackMom_6__31->SetBinError(121,34.46738);
   TrackMom_6__31->SetBinError(122,21.07131);
   TrackMom_6__31->SetBinError(123,16.88194);
   TrackMom_6__31->SetBinError(124,14.52584);
   TrackMom_6__31->SetBinError(125,11.40175);
   TrackMom_6__31->SetBinError(126,9.165151);
   TrackMom_6__31->SetBinError(127,9);
   TrackMom_6__31->SetBinError(128,8.124038);
   TrackMom_6__31->SetBinError(129,23.02173);
   TrackMom_6__31->SetEntries(3019);
   TrackMom_6__31->SetLineWidth(3);
   TrackMom_6__31->SetMarkerSize(1.5);
   TrackMom_6__31->GetXaxis()->SetTitle("Track momentum [MeV]");
   TrackMom_6__31->GetXaxis()->CenterTitle(true);
   TrackMom_6__31->GetXaxis()->SetLabelFont(42);
   TrackMom_6__31->GetXaxis()->SetLabelSize(0.04);
   TrackMom_6__31->GetXaxis()->SetTitleSize(0.04);
   TrackMom_6__31->GetXaxis()->SetTitleOffset(1.1);
   TrackMom_6__31->GetXaxis()->SetTitleFont(42);
   TrackMom_6__31->GetYaxis()->CenterTitle(true);
   TrackMom_6__31->GetYaxis()->SetNdivisions(4000510);
   TrackMom_6__31->GetYaxis()->SetLabelFont(42);
   TrackMom_6__31->GetYaxis()->SetLabelSize(0.04);
   TrackMom_6__31->GetYaxis()->SetTitleSize(0.04);
   TrackMom_6__31->GetYaxis()->SetTitleOffset(1.1);
   TrackMom_6__31->GetYaxis()->SetTitleFont(42);
   TrackMom_6__31->GetZaxis()->SetLabelFont(42);
   TrackMom_6__31->GetZaxis()->SetTitleOffset(1);
   TrackMom_6__31->GetZaxis()->SetTitleFont(42);
   TrackMom_6__31->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
