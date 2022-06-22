void S12_HistMainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:41:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12_ratio_main__1 = new TH1D("S12_ratio_main__1","S12",6,1000,2500);
   S12_ratio_main__1->SetBinContent(1,0.4601481);
   S12_ratio_main__1->SetBinContent(2,0.4488183);
   S12_ratio_main__1->SetBinContent(3,0.5892507);
   S12_ratio_main__1->SetBinContent(4,0.6432517);
   S12_ratio_main__1->SetBinContent(5,0.7360888);
   S12_ratio_main__1->SetBinContent(6,0.4985534);
   S12_ratio_main__1->SetBinError(1,0.06993363);
   S12_ratio_main__1->SetBinError(2,0.06901836);
   S12_ratio_main__1->SetBinError(3,0.07452316);
   S12_ratio_main__1->SetBinError(4,0.08222502);
   S12_ratio_main__1->SetBinError(5,0.1208575);
   S12_ratio_main__1->SetBinError(6,0.1284035);
   S12_ratio_main__1->SetEntries(6);
   S12_ratio_main__1->SetStats(0);
   S12_ratio_main__1->SetMarkerStyle(20);
   S12_ratio_main__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12_ratio_main__1->GetXaxis()->CenterTitle(true);
   S12_ratio_main__1->GetXaxis()->SetLabelFont(42);
   S12_ratio_main__1->GetXaxis()->SetTitleSize(0.04);
   S12_ratio_main__1->GetXaxis()->SetTitleOffset(1.1);
   S12_ratio_main__1->GetXaxis()->SetTitleFont(42);
   S12_ratio_main__1->GetYaxis()->SetTitle("A_{EDM} acceptance factor / 250 MeV");
   S12_ratio_main__1->GetYaxis()->CenterTitle(true);
   S12_ratio_main__1->GetYaxis()->SetNdivisions(4000510);
   S12_ratio_main__1->GetYaxis()->SetLabelFont(42);
   S12_ratio_main__1->GetYaxis()->SetTitleSize(0.04);
   S12_ratio_main__1->GetYaxis()->SetTitleOffset(1.1);
   S12_ratio_main__1->GetYaxis()->SetTitleFont(42);
   S12_ratio_main__1->GetZaxis()->SetLabelFont(42);
   S12_ratio_main__1->GetZaxis()->SetTitleOffset(1);
   S12_ratio_main__1->GetZaxis()->SetTitleFont(42);
   S12_ratio_main__1->Draw("P");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
