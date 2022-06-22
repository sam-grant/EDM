void S12_MainAcceptanceWeightingVsMomentum()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun  3 03:41:22 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(813.2842,0.2484508,2672.519,0.9786453);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1006[6] = {
   1123.157,
   1371.168,
   1620.209,
   1866.98,
   2114.946,
   2362.647};
   Double_t _fy1006[6] = {
   0.4601481,
   0.4488183,
   0.5892507,
   0.6432517,
   0.7360888,
   0.4985534};
   Double_t _fex1006[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1006[6] = {
   0.06993363,
   0.06901836,
   0.07452316,
   0.08222502,
   0.1208575,
   0.1284035};
   TGraphErrors *gre = new TGraphErrors(6,_fx1006,_fy1006,_fex1006,_fey1006);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","S12",100,999.2077,2486.596);
   Graph_Graph1006->SetMinimum(0.3214702);
   Graph_Graph1006->SetMaximum(0.9056259);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1006->SetLineColor(ci);
   Graph_Graph1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1006->GetXaxis()->CenterTitle(true);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetTitle("A_{EDM} acceptance factor / 250 MeV");
   Graph_Graph1006->GetYaxis()->CenterTitle(true);
   Graph_Graph1006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
