void TrackMom_6noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  1 20:48:41 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *TrackMom_6__31 = new TH1D("TrackMom_6__31","3000<p<3500 MeV",128,0,3200);
   TrackMom_6__31->SetBinContent(121,469);
   TrackMom_6__31->SetBinContent(122,125);
   TrackMom_6__31->SetBinContent(123,81);
   TrackMom_6__31->SetBinContent(124,51);
   TrackMom_6__31->SetBinContent(125,48);
   TrackMom_6__31->SetBinContent(126,18);
   TrackMom_6__31->SetBinContent(127,8);
   TrackMom_6__31->SetBinContent(128,13);
   TrackMom_6__31->SetBinContent(129,85);
   TrackMom_6__31->SetBinError(121,21.65641);
   TrackMom_6__31->SetBinError(122,11.18034);
   TrackMom_6__31->SetBinError(123,9);
   TrackMom_6__31->SetBinError(124,7.141428);
   TrackMom_6__31->SetBinError(125,6.928203);
   TrackMom_6__31->SetBinError(126,4.242641);
   TrackMom_6__31->SetBinError(127,2.828427);
   TrackMom_6__31->SetBinError(128,3.605551);
   TrackMom_6__31->SetBinError(129,9.219544);
   TrackMom_6__31->SetEntries(898);
   TrackMom_6__31->SetLineWidth(2);
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
