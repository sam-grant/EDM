void S12S18_HistMainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 11 12:38:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *S12S18_ratio_main__1 = new TH1D("S12S18_ratio_main__1","S12S18",6,1000,2500);
   S12S18_ratio_main__1->SetBinContent(1,0.394966);
   S12S18_ratio_main__1->SetBinContent(2,0.4600627);
   S12S18_ratio_main__1->SetBinContent(3,0.5536347);
   S12S18_ratio_main__1->SetBinContent(4,0.6001469);
   S12S18_ratio_main__1->SetBinContent(5,0.6027818);
   S12S18_ratio_main__1->SetBinContent(6,0.5891708);
   S12S18_ratio_main__1->SetBinError(1,0.05047315);
   S12S18_ratio_main__1->SetBinError(2,0.05132248);
   S12S18_ratio_main__1->SetBinError(3,0.0556446);
   S12S18_ratio_main__1->SetBinError(4,0.06156342);
   S12S18_ratio_main__1->SetBinError(5,0.08830089);
   S12S18_ratio_main__1->SetBinError(6,0.09651334);
   S12S18_ratio_main__1->SetEntries(6);
   S12S18_ratio_main__1->SetStats(0);
   S12S18_ratio_main__1->SetMarkerStyle(20);
   S12S18_ratio_main__1->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   S12S18_ratio_main__1->GetXaxis()->CenterTitle(true);
   S12S18_ratio_main__1->GetXaxis()->SetLabelFont(42);
   S12S18_ratio_main__1->GetXaxis()->SetTitleSize(0.04);
   S12S18_ratio_main__1->GetXaxis()->SetTitleOffset(1.1);
   S12S18_ratio_main__1->GetXaxis()->SetTitleFont(42);
   S12S18_ratio_main__1->GetYaxis()->SetTitle("A_{EDM} acceptance fraction / 250 MeV");
   S12S18_ratio_main__1->GetYaxis()->CenterTitle(true);
   S12S18_ratio_main__1->GetYaxis()->SetNdivisions(4000510);
   S12S18_ratio_main__1->GetYaxis()->SetLabelFont(42);
   S12S18_ratio_main__1->GetYaxis()->SetTitleSize(0.04);
   S12S18_ratio_main__1->GetYaxis()->SetTitleOffset(1.1);
   S12S18_ratio_main__1->GetYaxis()->SetTitleFont(42);
   S12S18_ratio_main__1->GetZaxis()->SetLabelFont(42);
   S12S18_ratio_main__1->GetZaxis()->SetTitleOffset(1);
   S12S18_ratio_main__1->GetZaxis()->SetTitleFont(42);
   S12S18_ratio_main__1->Draw("P");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
