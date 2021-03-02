void TrackMom_0Q()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar  1 20:38:25 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *TrackMom_0__1 = new TH1D("TrackMom_0__1","0<p<500 MeV",128,0,3200);
   TrackMom_0__1->SetBinContent(14,15);
   TrackMom_0__1->SetBinContent(15,846);
   TrackMom_0__1->SetBinContent(16,4209);
   TrackMom_0__1->SetBinContent(17,8559);
   TrackMom_0__1->SetBinContent(18,12708);
   TrackMom_0__1->SetBinContent(19,15682);
   TrackMom_0__1->SetBinContent(20,18518);
   TrackMom_0__1->SetBinError(14,3.872983);
   TrackMom_0__1->SetBinError(15,29.08608);
   TrackMom_0__1->SetBinError(16,64.87681);
   TrackMom_0__1->SetBinError(17,92.51486);
   TrackMom_0__1->SetBinError(18,112.7298);
   TrackMom_0__1->SetBinError(19,125.2278);
   TrackMom_0__1->SetBinError(20,136.0809);
   TrackMom_0__1->SetEntries(60537);
   TrackMom_0__1->SetLineWidth(2);
   TrackMom_0__1->SetMarkerSize(1.5);
   TrackMom_0__1->GetXaxis()->SetTitle("Track momentum [MeV]");
   TrackMom_0__1->GetXaxis()->CenterTitle(true);
   TrackMom_0__1->GetXaxis()->SetLabelFont(42);
   TrackMom_0__1->GetXaxis()->SetLabelSize(0.04);
   TrackMom_0__1->GetXaxis()->SetTitleSize(0.04);
   TrackMom_0__1->GetXaxis()->SetTitleOffset(1.1);
   TrackMom_0__1->GetXaxis()->SetTitleFont(42);
   TrackMom_0__1->GetYaxis()->CenterTitle(true);
   TrackMom_0__1->GetYaxis()->SetNdivisions(4000510);
   TrackMom_0__1->GetYaxis()->SetLabelFont(42);
   TrackMom_0__1->GetYaxis()->SetLabelSize(0.04);
   TrackMom_0__1->GetYaxis()->SetTitleSize(0.04);
   TrackMom_0__1->GetYaxis()->SetTitleOffset(1.1);
   TrackMom_0__1->GetYaxis()->SetTitleFont(42);
   TrackMom_0__1->GetZaxis()->SetLabelFont(42);
   TrackMom_0__1->GetZaxis()->SetTitleOffset(1);
   TrackMom_0__1->GetZaxis()->SetTitleFont(42);
   TrackMom_0__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
