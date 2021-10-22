void S0_full_A_vs_p_trackReco_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun 15 13:08:07 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-110.9329,3378.375,92.17325);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1024[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1024[6] = {
   -9.37984,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11,
   -8.300299e-11};
   Double_t Graph0_fex1024[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1024[6] = {
   67.70206,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12,
   9.056369e-12};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1024,Graph0_fy1024,Graph0_fex1024,Graph0_fey1024);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01024 = new TH1F("Graph_Graph01024","S0",100,0,3300);
   Graph_Graph01024->SetMinimum(-90.62231);
   Graph_Graph01024->SetMaximum(71.86263);
   Graph_Graph01024->SetDirectory(0);
   Graph_Graph01024->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01024->SetLineColor(ci);
   Graph_Graph01024->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250 MeV");
   Graph_Graph01024->GetXaxis()->SetRange(1,91);
   Graph_Graph01024->GetXaxis()->CenterTitle(true);
   Graph_Graph01024->GetXaxis()->SetLabelFont(42);
   Graph_Graph01024->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01024->GetXaxis()->SetTitleFont(42);
   Graph_Graph01024->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01024->GetYaxis()->CenterTitle(true);
   Graph_Graph01024->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01024->GetYaxis()->SetLabelFont(42);
   Graph_Graph01024->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01024->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01024->GetYaxis()->SetTitleFont(42);
   Graph_Graph01024->GetZaxis()->SetLabelFont(42);
   Graph_Graph01024->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01024->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01024);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4680151,0.94,0.5319849,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
