void S12_HistAEDMAcceptanceFractionDiff()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 12:58:48 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_diff__1 = new TH1D("S12_diff__1","S12",6,1000,2500);
   S12_diff__1->SetBinContent(1,0.1579578);
   S12_diff__1->SetBinContent(2,0.06891659);
   S12_diff__1->SetBinContent(3,-0.07608932);
   S12_diff__1->SetBinContent(4,0.06706285);
   S12_diff__1->SetBinContent(5,0.1460793);
   S12_diff__1->SetBinContent(6,0.1092785);
   S12_diff__1->SetEntries(6);
   S12_diff__1->SetStats(0);
   S12_diff__1->SetMarkerStyle(20);
   S12_diff__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_diff__1->GetXaxis()->CenterTitle(true);
   S12_diff__1->GetXaxis()->SetLabelFont(42);
   S12_diff__1->GetXaxis()->SetTitleSize(0.04);
   S12_diff__1->GetXaxis()->SetTitleOffset(1.1);
   S12_diff__1->GetXaxis()->SetTitleFont(42);
   S12_diff__1->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   S12_diff__1->GetYaxis()->CenterTitle(true);
   S12_diff__1->GetYaxis()->SetNdivisions(4000510);
   S12_diff__1->GetYaxis()->SetLabelFont(42);
   S12_diff__1->GetYaxis()->SetTitleSize(0.04);
   S12_diff__1->GetYaxis()->SetTitleOffset(1.2);
   S12_diff__1->GetYaxis()->SetTitleFont(42);
   S12_diff__1->GetZaxis()->SetLabelFont(42);
   S12_diff__1->GetZaxis()->SetTitleOffset(1);
   S12_diff__1->GetZaxis()->SetTitleFont(42);
   S12_diff__1->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
