void yC0_Br30_QHV20_truth()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 17 18:03:25 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__41 = new TH1D("__41","",100,2.22,2.36);
   __41->SetBinContent(50,1000);
   __41->SetEntries(1000);
   __41->SetLineWidth(3);
   __41->GetXaxis()->SetTitle("y [mm]");
   __41->GetXaxis()->CenterTitle(true);
   __41->GetXaxis()->SetLabelFont(42);
   __41->GetXaxis()->SetTitleSize(0.04);
   __41->GetXaxis()->SetTitleOffset(1.1);
   __41->GetXaxis()->SetTitleFont(42);
   __41->GetYaxis()->SetTitle("Trials");
   __41->GetYaxis()->CenterTitle(true);
   __41->GetYaxis()->SetNdivisions(4000510);
   __41->GetYaxis()->SetLabelFont(42);
   __41->GetYaxis()->SetTitleSize(0.04);
   __41->GetYaxis()->SetTitleOffset(1.1);
   __41->GetYaxis()->SetTitleFont(42);
   __41->GetZaxis()->SetLabelFont(42);
   __41->GetZaxis()->SetTitleOffset(1);
   __41->GetZaxis()->SetTitleFont(42);
   __41->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
