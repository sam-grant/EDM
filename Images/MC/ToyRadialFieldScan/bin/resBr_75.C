void resBr_75()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct  9 18:18:39 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__6 = new TH1D("__6","Number of sub-runs: 75",1000,-1000,1000);
   __6->SetBinContent(499,4);
   __6->SetBinContent(500,484);
   __6->SetBinContent(501,496);
   __6->SetBinContent(502,16);
   __6->SetEntries(1000);
   __6->SetLineWidth(3);
   __6->GetXaxis()->SetTitle("Meas #minus true B_{r} [ppm]");
   __6->GetXaxis()->CenterTitle(true);
   __6->GetXaxis()->SetLabelFont(42);
   __6->GetXaxis()->SetTitleSize(0.04);
   __6->GetXaxis()->SetTitleOffset(1.1);
   __6->GetXaxis()->SetTitleFont(42);
   __6->GetYaxis()->SetTitle("Experiments");
   __6->GetYaxis()->CenterTitle(true);
   __6->GetYaxis()->SetNdivisions(4000510);
   __6->GetYaxis()->SetLabelFont(42);
   __6->GetYaxis()->SetTitleSize(0.04);
   __6->GetYaxis()->SetTitleOffset(1.1);
   __6->GetYaxis()->SetTitleFont(42);
   __6->GetZaxis()->SetLabelFont(42);
   __6->GetZaxis()->SetTitleOffset(1);
   __6->GetZaxis()->SetTitleFont(42);
   __6->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
