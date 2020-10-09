void resBr_200()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:44 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__16 = new TH1D("__16","Number of sub-runs: 200",1000,-1000,1000);
   __16->SetBinContent(500,500);
   __16->SetBinContent(501,500);
   __16->SetEntries(1000);
   __16->SetLineWidth(3);
   __16->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __16->GetXaxis()->CenterTitle(true);
   __16->GetXaxis()->SetLabelFont(42);
   __16->GetXaxis()->SetTitleSize(0.04);
   __16->GetXaxis()->SetTitleOffset(1.1);
   __16->GetXaxis()->SetTitleFont(42);
   __16->GetYaxis()->SetTitle("Experiments");
   __16->GetYaxis()->CenterTitle(true);
   __16->GetYaxis()->SetNdivisions(4000510);
   __16->GetYaxis()->SetLabelFont(42);
   __16->GetYaxis()->SetTitleSize(0.04);
   __16->GetYaxis()->SetTitleOffset(1.1);
   __16->GetYaxis()->SetTitleFont(42);
   __16->GetZaxis()->SetLabelFont(42);
   __16->GetZaxis()->SetTitleOffset(1);
   __16->GetZaxis()->SetTitleFont(42);
   __16->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
