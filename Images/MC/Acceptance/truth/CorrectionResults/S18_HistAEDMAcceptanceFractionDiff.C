void S18_HistAEDMAcceptanceFractionDiff()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 18:45:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_diff__2 = new TH1D("S18_diff__2","S18",6,1000,2500);
   S18_diff__2->SetBinContent(1,0.1607342);
   S18_diff__2->SetBinContent(2,-0.01441376);
   S18_diff__2->SetBinContent(3,0.05276096);
   S18_diff__2->SetBinContent(4,-0.02212517);
   S18_diff__2->SetBinContent(5,-0.08606372);
   S18_diff__2->SetBinContent(6,0.06834446);
   S18_diff__2->SetEntries(6);
   S18_diff__2->SetStats(0);
   S18_diff__2->SetMarkerStyle(20);
   S18_diff__2->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_diff__2->GetXaxis()->CenterTitle(true);
   S18_diff__2->GetXaxis()->SetLabelFont(42);
   S18_diff__2->GetXaxis()->SetTitleSize(0.04);
   S18_diff__2->GetXaxis()->SetTitleOffset(1.1);
   S18_diff__2->GetXaxis()->SetTitleFont(42);
   S18_diff__2->GetYaxis()->SetTitle("#Delta A_{EDM} acceptance fraction per mm / 250 MeV");
   S18_diff__2->GetYaxis()->CenterTitle(true);
   S18_diff__2->GetYaxis()->SetNdivisions(4000510);
   S18_diff__2->GetYaxis()->SetLabelFont(42);
   S18_diff__2->GetYaxis()->SetTitleSize(0.04);
   S18_diff__2->GetYaxis()->SetTitleOffset(1.2);
   S18_diff__2->GetYaxis()->SetTitleFont(42);
   S18_diff__2->GetZaxis()->SetLabelFont(42);
   S18_diff__2->GetZaxis()->SetTitleOffset(1);
   S18_diff__2->GetZaxis()->SetTitleFont(42);
   S18_diff__2->Draw("PL");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
