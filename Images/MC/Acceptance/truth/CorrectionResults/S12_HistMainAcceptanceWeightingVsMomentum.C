void S12_HistMainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May  4 19:19:32 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_ratio_main__1 = new TH1D("S12_ratio_main__1","S12",6,1000,2500);
   S12_ratio_main__1->SetBinContent(1,0.4597997);
   S12_ratio_main__1->SetBinContent(2,0.4487625);
   S12_ratio_main__1->SetBinContent(3,0.5888998);
   S12_ratio_main__1->SetBinContent(4,0.6435255);
   S12_ratio_main__1->SetBinContent(5,0.7371483);
   S12_ratio_main__1->SetBinContent(6,0.4987663);
   S12_ratio_main__1->SetBinError(1,0.06992352);
   S12_ratio_main__1->SetBinError(2,0.06901238);
   S12_ratio_main__1->SetBinError(3,0.07451289);
   S12_ratio_main__1->SetBinError(4,0.08221901);
   S12_ratio_main__1->SetBinError(5,0.1208692);
   S12_ratio_main__1->SetBinError(6,0.1283939);
   S12_ratio_main__1->SetEntries(6);
   S12_ratio_main__1->SetStats(0);
   S12_ratio_main__1->SetLineWidth(3);
   S12_ratio_main__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_ratio_main__1->GetXaxis()->CenterTitle(true);
   S12_ratio_main__1->GetXaxis()->SetLabelFont(42);
   S12_ratio_main__1->GetXaxis()->SetTitleSize(0.04);
   S12_ratio_main__1->GetXaxis()->SetTitleOffset(1.1);
   S12_ratio_main__1->GetXaxis()->SetTitleFont(42);
   S12_ratio_main__1->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   S12_ratio_main__1->GetYaxis()->CenterTitle(true);
   S12_ratio_main__1->GetYaxis()->SetNdivisions(4000510);
   S12_ratio_main__1->GetYaxis()->SetLabelFont(42);
   S12_ratio_main__1->GetYaxis()->SetTitleSize(0.04);
   S12_ratio_main__1->GetYaxis()->SetTitleOffset(1.1);
   S12_ratio_main__1->GetYaxis()->SetTitleFont(42);
   S12_ratio_main__1->GetZaxis()->SetLabelFont(42);
   S12_ratio_main__1->GetZaxis()->SetTitleOffset(1);
   S12_ratio_main__1->GetZaxis()->SetTitleFont(42);
   S12_ratio_main__1->Draw("E");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
