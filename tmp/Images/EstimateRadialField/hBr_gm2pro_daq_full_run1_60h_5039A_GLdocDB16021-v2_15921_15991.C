void hBr_gm2pro_daq_full_run1_60h_5039A_GLdocDB16021-v2_15921_15991()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jul  2 06:07:11 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h1__2 = new TH1D("h1__2","",18,13,22);
   h1__2->SetBinContent(19,61);
   h1__2->SetMinimum(-10);
   h1__2->SetMaximum(25);
   h1__2->SetEntries(61);
   h1__2->SetLineWidth(3);
   h1__2->GetXaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   h1__2->GetXaxis()->CenterTitle(true);
   h1__2->GetXaxis()->SetLabelFont(42);
   h1__2->GetXaxis()->SetLabelSize(0.035);
   h1__2->GetXaxis()->SetTitleOffset(1.1);
   h1__2->GetXaxis()->SetTitleFont(42);
   h1__2->GetYaxis()->SetTitle("Entries");
   h1__2->GetYaxis()->CenterTitle(true);
   h1__2->GetYaxis()->SetNdivisions(4000510);
   h1__2->GetYaxis()->SetLabelFont(42);
   h1__2->GetYaxis()->SetLabelSize(0.035);
   h1__2->GetYaxis()->SetTitleOffset(1.1);
   h1__2->GetYaxis()->SetTitleFont(42);
   h1__2->GetZaxis()->SetLabelFont(42);
   h1__2->GetZaxis()->SetLabelSize(0.035);
   h1__2->GetZaxis()->SetTitleSize(0.035);
   h1__2->GetZaxis()->SetTitleFont(42);
   h1__2->Draw("HIST");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
