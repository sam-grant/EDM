void TrackMom_0_vQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 17 20:02:03 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.13);
   c->SetFrameBorderMode(0);
   
   TH1D *TrackMom_0__1 = new TH1D("TrackMom_0__1","0<p<500 MeV",128,0,3200);
   TrackMom_0__1->SetBinContent(14,8);
   TrackMom_0__1->SetBinContent(15,1080);
   TrackMom_0__1->SetBinContent(16,5807);
   TrackMom_0__1->SetBinContent(17,12625);
   TrackMom_0__1->SetBinContent(18,19479);
   TrackMom_0__1->SetBinContent(19,25842);
   TrackMom_0__1->SetBinContent(20,30366);
   TrackMom_0__1->SetBinError(14,2.828427);
   TrackMom_0__1->SetBinError(15,32.86335);
   TrackMom_0__1->SetBinError(16,76.20367);
   TrackMom_0__1->SetBinError(17,112.361);
   TrackMom_0__1->SetBinError(18,139.5672);
   TrackMom_0__1->SetBinError(19,160.7545);
   TrackMom_0__1->SetBinError(20,174.2584);
   TrackMom_0__1->SetEntries(95207);
   TrackMom_0__1->SetStats(0);
   TrackMom_0__1->SetLineWidth(3);
   TrackMom_0__1->SetMarkerSize(1.5);
   TrackMom_0__1->GetXaxis()->SetTitle("Track momentum [MeV]");
   TrackMom_0__1->GetXaxis()->CenterTitle(true);
   TrackMom_0__1->GetXaxis()->SetLabelFont(42);
   TrackMom_0__1->GetXaxis()->SetTitleOffset(1.1);
   TrackMom_0__1->GetXaxis()->SetTitleFont(42);
   TrackMom_0__1->GetYaxis()->CenterTitle(true);
   TrackMom_0__1->GetYaxis()->SetNdivisions(4000510);
   TrackMom_0__1->GetYaxis()->SetLabelFont(42);
   TrackMom_0__1->GetYaxis()->SetTitleOffset(1.1);
   TrackMom_0__1->GetYaxis()->SetTitleFont(42);
   TrackMom_0__1->GetZaxis()->SetLabelFont(42);
   TrackMom_0__1->GetZaxis()->SetLabelSize(0.035);
   TrackMom_0__1->GetZaxis()->SetTitleSize(0.035);
   TrackMom_0__1->GetZaxis()->SetTitleOffset(1);
   TrackMom_0__1->GetZaxis()->SetTitleFont(42);
   TrackMom_0__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
