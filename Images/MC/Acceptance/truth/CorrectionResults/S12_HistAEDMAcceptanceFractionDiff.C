#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S12_HistAEDMAcceptanceFractionDiff()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:51 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_diff__2 = new TH1D("S12_diff__2","S12",6,1000,2500);
   S12_diff__2->SetBinError(1,0.003635864);
   S12_diff__2->SetBinError(2,0.003547432);
   S12_diff__2->SetBinError(3,0.003672787);
   S12_diff__2->SetBinError(4,0.00411945);
   S12_diff__2->SetBinError(5,0.005050991);
   S12_diff__2->SetBinError(6,0.006684059);
   S12_diff__2->SetEntries(6);
   S12_diff__2->SetStats(0);
   S12_diff__2->SetMarkerStyle(20);
   S12_diff__2->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_diff__2->GetXaxis()->CenterTitle(true);
   S12_diff__2->GetXaxis()->SetLabelFont(42);
   S12_diff__2->GetXaxis()->SetTitleSize(0.04);
   S12_diff__2->GetXaxis()->SetTitleOffset(1.1);
   S12_diff__2->GetXaxis()->SetTitleFont(42);
   S12_diff__2->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   S12_diff__2->GetYaxis()->CenterTitle(true);
   S12_diff__2->GetYaxis()->SetNdivisions(4000510);
   S12_diff__2->GetYaxis()->SetLabelFont(42);
   S12_diff__2->GetYaxis()->SetTitleSize(0.04);
   S12_diff__2->GetYaxis()->SetTitleOffset(1.2);
   S12_diff__2->GetYaxis()->SetTitleFont(42);
   S12_diff__2->GetZaxis()->SetLabelFont(42);
   S12_diff__2->GetZaxis()->SetTitleOffset(1);
   S12_diff__2->GetZaxis()->SetTitleFont(42);
   S12_diff__2->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
