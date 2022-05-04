void S12_HistAcceptanceWeightingVsMomentum_1mm()
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
   
   TH1D *S12_ratio__1 = new TH1D("S12_ratio__1","S12",7,750,2500);
   S12_ratio__1->SetBinContent(1,0.2815376);
   S12_ratio__1->SetBinContent(2,0.3724113);
   S12_ratio__1->SetBinContent(3,0.406842);
   S12_ratio__1->SetBinContent(4,0.4399446);
   S12_ratio__1->SetBinContent(5,0.4969307);
   S12_ratio__1->SetBinContent(6,0.4622815);
   S12_ratio__1->SetBinContent(7,0.5685242);
   S12_ratio__1->SetBinError(1,0.01523471);
   S12_ratio__1->SetBinError(2,0.01811386);
   S12_ratio__1->SetBinError(3,0.01915472);
   S12_ratio__1->SetBinError(4,0.02085846);
   S12_ratio__1->SetBinError(5,0.02398448);
   S12_ratio__1->SetBinError(6,0.02914712);
   S12_ratio__1->SetBinError(7,0.03559712);
   S12_ratio__1->SetEntries(7);
   S12_ratio__1->SetStats(0);
   S12_ratio__1->SetLineWidth(3);
   S12_ratio__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_ratio__1->GetXaxis()->CenterTitle(true);
   S12_ratio__1->GetXaxis()->SetLabelFont(42);
   S12_ratio__1->GetXaxis()->SetTitleSize(0.04);
   S12_ratio__1->GetXaxis()->SetTitleOffset(1.1);
   S12_ratio__1->GetXaxis()->SetTitleFont(42);
   S12_ratio__1->GetYaxis()->SetTitle("Acceptance fraction / 250 MeV");
   S12_ratio__1->GetYaxis()->CenterTitle(true);
   S12_ratio__1->GetYaxis()->SetNdivisions(4000510);
   S12_ratio__1->GetYaxis()->SetLabelFont(42);
   S12_ratio__1->GetYaxis()->SetTitleSize(0.04);
   S12_ratio__1->GetYaxis()->SetTitleOffset(1.1);
   S12_ratio__1->GetYaxis()->SetTitleFont(42);
   S12_ratio__1->GetZaxis()->SetLabelFont(42);
   S12_ratio__1->GetZaxis()->SetTitleOffset(1);
   S12_ratio__1->GetZaxis()->SetTitleFont(42);
   S12_ratio__1->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
