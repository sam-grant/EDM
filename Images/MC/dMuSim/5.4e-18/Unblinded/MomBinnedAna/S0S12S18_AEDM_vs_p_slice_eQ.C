void S0S12S18_AEDM_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:16 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.901885,3378.375,0.7202402);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1164[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1164[15] = {
   -0.8453055,
   0.1946551,
   0.05254857,
   0.1859453,
   0.1877405,
   0.1588282,
   0.1785507,
   0.1869328,
   0.1491544,
   0.1556892,
   0.1400403,
   0.1374773,
   0.1237174,
   0.08149053,
   0.02874991};
   Double_t Graph0_fex1164[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1164[15] = {
   0.6195585,
   0.08856421,
   0.03123583,
   0.02344187,
   0.02049826,
   0.01849501,
   0.01697681,
   0.01578718,
   0.01488632,
   0.01430148,
   0.01399564,
   0.01378847,
   0.01392913,
   0.01436941,
   0.02065568};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1164,Graph0_fy1164,Graph0_fex1164,Graph0_fey1164);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01164 = new TH1F("Graph_Graph01164","S0S12S18",100,0,3300);
   Graph_Graph01164->SetMinimum(-1.639672);
   Graph_Graph01164->SetMaximum(0.4580277);
   Graph_Graph01164->SetDirectory(0);
   Graph_Graph01164->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01164->SetLineColor(ci);
   Graph_Graph01164->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01164->GetXaxis()->SetRange(1,91);
   Graph_Graph01164->GetXaxis()->CenterTitle(true);
   Graph_Graph01164->GetXaxis()->SetLabelFont(42);
   Graph_Graph01164->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01164->GetXaxis()->SetTitleFont(42);
   Graph_Graph01164->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01164->GetYaxis()->CenterTitle(true);
   Graph_Graph01164->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01164->GetYaxis()->SetLabelFont(42);
   Graph_Graph01164->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01164->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01164->GetYaxis()->SetTitleFont(42);
   Graph_Graph01164->GetZaxis()->SetLabelFont(42);
   Graph_Graph01164->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01164->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01164);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4033166,0.94,0.5966834,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
