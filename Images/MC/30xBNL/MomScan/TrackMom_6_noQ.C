void TrackMom_6_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 17 20:01:42 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH1D *TrackMom_6__31 = new TH1D("TrackMom_6__31","3000<p<3500 MeV",128,0,3200);
   TrackMom_6__31->SetBinContent(121,974);
   TrackMom_6__31->SetBinContent(122,369);
   TrackMom_6__31->SetBinContent(123,245);
   TrackMom_6__31->SetBinContent(124,170);
   TrackMom_6__31->SetBinContent(125,110);
   TrackMom_6__31->SetBinContent(126,65);
   TrackMom_6__31->SetBinContent(127,67);
   TrackMom_6__31->SetBinContent(128,46);
   TrackMom_6__31->SetBinContent(129,430);
   TrackMom_6__31->SetBinError(121,31.20897);
   TrackMom_6__31->SetBinError(122,19.20937);
   TrackMom_6__31->SetBinError(123,15.65248);
   TrackMom_6__31->SetBinError(124,13.0384);
   TrackMom_6__31->SetBinError(125,10.48809);
   TrackMom_6__31->SetBinError(126,8.062258);
   TrackMom_6__31->SetBinError(127,8.185353);
   TrackMom_6__31->SetBinError(128,6.78233);
   TrackMom_6__31->SetBinError(129,20.73644);
   TrackMom_6__31->SetEntries(2476);
   TrackMom_6__31->SetStats(0);
   TrackMom_6__31->SetLineWidth(3);
   TrackMom_6__31->SetMarkerSize(1.5);
   TrackMom_6__31->GetXaxis()->SetTitle("Track momentum [MeV]");
   TrackMom_6__31->GetXaxis()->CenterTitle(true);
   TrackMom_6__31->GetXaxis()->SetLabelFont(42);
   TrackMom_6__31->GetXaxis()->SetTitleOffset(1.1);
   TrackMom_6__31->GetXaxis()->SetTitleFont(42);
   TrackMom_6__31->GetYaxis()->CenterTitle(true);
   TrackMom_6__31->GetYaxis()->SetNdivisions(4000510);
   TrackMom_6__31->GetYaxis()->SetLabelFont(42);
   TrackMom_6__31->GetYaxis()->SetTitleOffset(1.1);
   TrackMom_6__31->GetYaxis()->SetTitleFont(42);
   TrackMom_6__31->GetZaxis()->SetLabelFont(42);
   TrackMom_6__31->GetZaxis()->SetLabelSize(0.035);
   TrackMom_6__31->GetZaxis()->SetTitleSize(0.035);
   TrackMom_6__31->GetZaxis()->SetTitleOffset(1);
   TrackMom_6__31->GetZaxis()->SetTitleFont(42);
   TrackMom_6__31->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
