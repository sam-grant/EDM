void S18_HistAcceptanceWeightingVsMomentum_1mm()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Apr 26 12:47:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S18_ratio__2 = new TH1D("S18_ratio__2","S18",7,750,2500);
   S18_ratio__2->SetBinContent(1,0.2692123);
   S18_ratio__2->SetBinContent(2,0.3654461);
   S18_ratio__2->SetBinContent(3,0.3988324);
   S18_ratio__2->SetBinContent(4,0.4298008);
   S18_ratio__2->SetBinContent(5,0.490325);
   S18_ratio__2->SetBinContent(6,0.4542837);
   S18_ratio__2->SetBinContent(7,0.576581);
   S18_ratio__2->SetBinError(1,0.01456775);
   S18_ratio__2->SetBinError(2,0.01777507);
   S18_ratio__2->SetBinError(3,0.01877761);
   S18_ratio__2->SetBinError(4,0.02037752);
   S18_ratio__2->SetBinError(5,0.02366565);
   S18_ratio__2->SetBinError(6,0.02864286);
   S18_ratio__2->SetBinError(7,0.03610158);
   S18_ratio__2->SetEntries(7);
   S18_ratio__2->SetStats(0);
   S18_ratio__2->SetLineWidth(3);
   S18_ratio__2->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S18_ratio__2->GetXaxis()->CenterTitle(true);
   S18_ratio__2->GetXaxis()->SetLabelFont(42);
   S18_ratio__2->GetXaxis()->SetTitleSize(0.04);
   S18_ratio__2->GetXaxis()->SetTitleOffset(1.1);
   S18_ratio__2->GetXaxis()->SetTitleFont(42);
   S18_ratio__2->GetYaxis()->SetTitle("Acceptance fraction / 250 MeV");
   S18_ratio__2->GetYaxis()->CenterTitle(true);
   S18_ratio__2->GetYaxis()->SetNdivisions(4000510);
   S18_ratio__2->GetYaxis()->SetLabelFont(42);
   S18_ratio__2->GetYaxis()->SetTitleSize(0.04);
   S18_ratio__2->GetYaxis()->SetTitleOffset(1.1);
   S18_ratio__2->GetYaxis()->SetTitleFont(42);
   S18_ratio__2->GetZaxis()->SetLabelFont(42);
   S18_ratio__2->GetZaxis()->SetTitleOffset(1);
   S18_ratio__2->GetZaxis()->SetTitleFont(42);
   S18_ratio__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
