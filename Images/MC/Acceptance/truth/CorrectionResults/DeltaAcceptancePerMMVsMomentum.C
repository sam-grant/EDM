void DeltaAcceptancePerMMVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 20:33:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_delta__5 = new TH1D("h_delta__5","",6,1000,2500);
   h_delta__5->SetBinContent(1,0.03833054);
   h_delta__5->SetBinContent(2,0.05824955);
   h_delta__5->SetBinContent(3,0.04066823);
   h_delta__5->SetBinContent(4,0.08373192);
   h_delta__5->SetBinContent(5,0.01974601);
   h_delta__5->SetBinContent(6,0.1487381);
   h_delta__5->SetMinimum(0);
   h_delta__5->SetMaximum(0.17);
   h_delta__5->SetEntries(12);
   h_delta__5->SetStats(0);
   h_delta__5->SetMarkerStyle(20);
   h_delta__5->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   h_delta__5->GetXaxis()->CenterTitle(true);
   h_delta__5->GetXaxis()->SetLabelFont(42);
   h_delta__5->GetXaxis()->SetTitleSize(0.04);
   h_delta__5->GetXaxis()->SetTitleOffset(1.1);
   h_delta__5->GetXaxis()->SetTitleFont(42);
   h_delta__5->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   h_delta__5->GetYaxis()->CenterTitle(true);
   h_delta__5->GetYaxis()->SetNdivisions(4000510);
   h_delta__5->GetYaxis()->SetLabelFont(42);
   h_delta__5->GetYaxis()->SetTitleSize(0.04);
   h_delta__5->GetYaxis()->SetTitleOffset(1.2);
   h_delta__5->GetYaxis()->SetTitleFont(42);
   h_delta__5->GetZaxis()->SetLabelFont(42);
   h_delta__5->GetZaxis()->SetTitleOffset(1);
   h_delta__5->GetZaxis()->SetTitleFont(42);
   h_delta__5->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
