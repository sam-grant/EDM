void S12_AEDM_vs_p_slice_eQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 20:17:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-375.375,-1.738419,3378.375,1.17129);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1068[15] = {
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
   Double_t Graph0_fy1068[15] = {
   -0.2835642,
   0.09904946,
   0.06676862,
   0.223888,
   0.2097578,
   0.1849012,
   0.152826,
   0.1993279,
   0.1396801,
   0.1503389,
   0.1081067,
   0.1271958,
   0.1273023,
   0.1211828,
   -0.0070482};
   Double_t Graph0_fex1068[15] = {
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
   Double_t Graph0_fey1068[15] = {
   0.9699031,
   0.1508008,
   0.05412255,
   0.04056139,
   0.03548536,
   0.03201127,
   0.02941615,
   0.02729521,
   0.0257844,
   0.02474569,
   0.02421628,
   0.02394851,
   0.02419302,
   0.02504136,
   0.03559669};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1068,Graph0_fy1068,Graph0_fex1068,Graph0_fey1068);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01068 = new TH1F("Graph_Graph01068","S12",100,0,3300);
   Graph_Graph01068->SetMinimum(-1.447448);
   Graph_Graph01068->SetMaximum(0.8803195);
   Graph_Graph01068->SetDirectory(0);
   Graph_Graph01068->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01068->SetLineColor(ci);
   Graph_Graph01068->GetXaxis()->SetTitle("p [MeV]: in range p #minus 200 < p < p #plus 200 MeV");
   Graph_Graph01068->GetXaxis()->SetRange(1,91);
   Graph_Graph01068->GetXaxis()->CenterTitle(true);
   Graph_Graph01068->GetXaxis()->SetLabelFont(42);
   Graph_Graph01068->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01068->GetXaxis()->SetTitleFont(42);
   Graph_Graph01068->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01068->GetYaxis()->CenterTitle(true);
   Graph_Graph01068->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01068->GetYaxis()->SetLabelFont(42);
   Graph_Graph01068->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01068->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01068->GetYaxis()->SetTitleFont(42);
   Graph_Graph01068->GetZaxis()->SetLabelFont(42);
   Graph_Graph01068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01068);
   
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
