#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_HistAEDMAcceptanceFractionDiff()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Aug 19 14:49:51 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_diff__3 = new TH1D("S18_diff__3","S18",6,1000,2500);
   S18_diff__3->SetBinError(1,0.003645145);
   S18_diff__3->SetBinError(2,0.003587551);
   S18_diff__3->SetBinError(3,0.003735843);
   S18_diff__3->SetBinError(4,0.004232821);
   S18_diff__3->SetBinError(5,0.005201481);
   S18_diff__3->SetBinError(6,0.006921582);
   S18_diff__3->SetEntries(6);
   S18_diff__3->SetStats(0);
   S18_diff__3->SetMarkerStyle(20);
   S18_diff__3->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_diff__3->GetXaxis()->CenterTitle(true);
   S18_diff__3->GetXaxis()->SetLabelFont(42);
   S18_diff__3->GetXaxis()->SetTitleSize(0.04);
   S18_diff__3->GetXaxis()->SetTitleOffset(1.1);
   S18_diff__3->GetXaxis()->SetTitleFont(42);
   S18_diff__3->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   S18_diff__3->GetYaxis()->CenterTitle(true);
   S18_diff__3->GetYaxis()->SetNdivisions(4000510);
   S18_diff__3->GetYaxis()->SetLabelFont(42);
   S18_diff__3->GetYaxis()->SetTitleSize(0.04);
   S18_diff__3->GetYaxis()->SetTitleOffset(1.2);
   S18_diff__3->GetYaxis()->SetTitleFont(42);
   S18_diff__3->GetZaxis()->SetLabelFont(42);
   S18_diff__3->GetZaxis()->SetTitleOffset(1);
   S18_diff__3->GetZaxis()->SetTitleFont(42);
   S18_diff__3->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
