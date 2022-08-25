#ifdef __CLING__
#pragma cling optimize(0)
#endif
void DeltaAEDMAcceptancePerMMVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:52 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_delta__6 = new TH1D("h_delta__6","",6,1000,2500);
   h_delta__6->SetBinError(1,inf);
   h_delta__6->SetBinError(2,inf);
   h_delta__6->SetBinError(3,inf);
   h_delta__6->SetBinError(4,inf);
   h_delta__6->SetBinError(5,inf);
   h_delta__6->SetBinError(6,inf);
   h_delta__6->SetMinimum(0);
   h_delta__6->SetMaximum(0.17);
   h_delta__6->SetEntries(12);
   h_delta__6->SetStats(0);
   h_delta__6->SetMarkerStyle(20);
   h_delta__6->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   h_delta__6->GetXaxis()->CenterTitle(true);
   h_delta__6->GetXaxis()->SetLabelFont(42);
   h_delta__6->GetXaxis()->SetTitleSize(0.04);
   h_delta__6->GetXaxis()->SetTitleOffset(1.1);
   h_delta__6->GetXaxis()->SetTitleFont(42);
   h_delta__6->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   h_delta__6->GetYaxis()->CenterTitle(true);
   h_delta__6->GetYaxis()->SetNdivisions(4000510);
   h_delta__6->GetYaxis()->SetLabelFont(42);
   h_delta__6->GetYaxis()->SetTitleSize(0.04);
   h_delta__6->GetYaxis()->SetTitleOffset(1.2);
   h_delta__6->GetYaxis()->SetTitleFont(42);
   h_delta__6->GetZaxis()->SetLabelFont(42);
   h_delta__6->GetZaxis()->SetTitleOffset(1);
   h_delta__6->GetZaxis()->SetTitleFont(42);
   h_delta__6->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
