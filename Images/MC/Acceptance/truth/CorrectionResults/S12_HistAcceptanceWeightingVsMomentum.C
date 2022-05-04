void S12_HistAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 12:58:03 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_ratio__1 = new TH1D("S12_ratio__1","S12",7,750,2500);
   S12_ratio__1->SetBinContent(1,0.5357341);
   S12_ratio__1->SetBinContent(2,0.5087723);
   S12_ratio__1->SetBinContent(3,0.5429355);
   S12_ratio__1->SetBinContent(4,0.5781055);
   S12_ratio__1->SetBinContent(5,0.4261597);
   S12_ratio__1->SetBinContent(6,0.7093095);
   S12_ratio__1->SetBinContent(7,0.4393127);
   S12_ratio__1->SetBinError(1,0.04163472);
   S12_ratio__1->SetBinError(2,0.03912402);
   S12_ratio__1->SetBinError(3,0.03879045);
   S12_ratio__1->SetBinError(4,0.04019115);
   S12_ratio__1->SetBinError(5,0.04182702);
   S12_ratio__1->SetBinError(6,0.05637325);
   S12_ratio__1->SetBinError(7,0.05741369);
   S12_ratio__1->SetEntries(7);
   S12_ratio__1->SetStats(0);
   S12_ratio__1->SetLineWidth(3);
   S12_ratio__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_ratio__1->GetXaxis()->CenterTitle(true);
   S12_ratio__1->GetXaxis()->SetLabelFont(42);
   S12_ratio__1->GetXaxis()->SetTitleSize(0.04);
   S12_ratio__1->GetXaxis()->SetTitleOffset(1.1);
   S12_ratio__1->GetXaxis()->SetTitleFont(42);
   S12_ratio__1->GetYaxis()->SetTitle("Vertical angle acceptance weighting / 250 MeV");
   S12_ratio__1->GetYaxis()->CenterTitle(true);
   S12_ratio__1->GetYaxis()->SetNdivisions(4000510);
   S12_ratio__1->GetYaxis()->SetLabelFont(42);
   S12_ratio__1->GetYaxis()->SetTitleSize(0.04);
   S12_ratio__1->GetYaxis()->SetTitleOffset(1.1);
   S12_ratio__1->GetYaxis()->SetTitleFont(42);
   S12_ratio__1->GetZaxis()->SetLabelFont(42);
   S12_ratio__1->GetZaxis()->SetTitleOffset(1);
   S12_ratio__1->GetZaxis()->SetTitleFont(42);
   S12_ratio__1->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
