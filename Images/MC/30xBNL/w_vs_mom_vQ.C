void w_vs_mom_vQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep 17 20:02:11 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,0.951582,3749.625,2.482182);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1014[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1014[6] = {
   1.716882,
   1.480792,
   1.338405,
   1.408257,
   1.514594,
   1.474524};
   Double_t Graph0_fex1014[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1014[6] = {
   0.5102001,
   0.1219026,
   0.05982996,
   0.04056306,
   0.05725044,
   0.2608708};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1014,Graph0_fy1014,Graph0_fex1014,Graph0_fey1014);
   gre->SetName("Graph0");
   gre->SetTitle(";Track momentum [MeV];#omega_{a} [MHz]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01014 = new TH1F("Graph_Graph01014","",100,0,3300);
   Graph_Graph01014->SetMinimum(1.104642);
   Graph_Graph01014->SetMaximum(2.329122);
   Graph_Graph01014->SetDirectory(0);
   Graph_Graph01014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01014->SetLineColor(ci);
   Graph_Graph01014->GetXaxis()->SetTitle("Track momentum [MeV]");
   Graph_Graph01014->GetXaxis()->SetRange(1,101);
   Graph_Graph01014->GetXaxis()->CenterTitle(true);
   Graph_Graph01014->GetXaxis()->SetLabelFont(42);
   Graph_Graph01014->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph01014->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetXaxis()->SetTitleFont(42);
   Graph_Graph01014->GetYaxis()->SetTitle("#omega_{a} [MHz]");
   Graph_Graph01014->GetYaxis()->CenterTitle(true);
   Graph_Graph01014->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01014->GetYaxis()->SetLabelFont(42);
   Graph_Graph01014->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph01014->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01014->GetYaxis()->SetTitleFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelFont(42);
   Graph_Graph01014->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01014->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01014);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
