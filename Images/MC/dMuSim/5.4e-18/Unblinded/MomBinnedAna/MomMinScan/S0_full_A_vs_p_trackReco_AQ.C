void S0_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 17 13:46:48 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-535,-0.01371194,3335,0.2388586);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1090[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1090[15] = {
   0.1499026,
   0.1500304,
   0.1559951,
   0.1793103,
   0.1786679,
   0.1588242,
   0.1518354,
   0.1290085,
   0.1227035,
   0.1231032,
   0.1221579,
   0.106794,
   0.07037769,
   0.06267378,
   0.1312521};
   Double_t Graph0_fex1090[15] = {
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
   Double_t Graph0_fey1090[15] = {
   0.01779706,
   0.01779665,
   0.01774581,
   0.01745325,
   0.01721895,
   0.01720209,
   0.01743562,
   0.01794128,
   0.0187871,
   0.02001553,
   0.02182314,
   0.02435724,
   0.02813355,
   0.03429063,
   0.05298344};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1090,Graph0_fy1090,Graph0_fex1090,Graph0_fey1090);
   gre->SetName("Graph0");
   gre->SetTitle("S0");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01090 = new TH1F("Graph_Graph01090","S0",100,-400,3200);
   Graph_Graph01090->SetMinimum(0.01154512);
   Graph_Graph01090->SetMaximum(0.2136016);
   Graph_Graph01090->SetDirectory(0);
   Graph_Graph01090->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01090->SetLineColor(ci);
   Graph_Graph01090->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01090->GetXaxis()->SetRange(8,93);
   Graph_Graph01090->GetXaxis()->CenterTitle(true);
   Graph_Graph01090->GetXaxis()->SetLabelFont(42);
   Graph_Graph01090->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01090->GetXaxis()->SetTitleFont(42);
   Graph_Graph01090->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01090->GetYaxis()->CenterTitle(true);
   Graph_Graph01090->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01090->GetYaxis()->SetLabelFont(42);
   Graph_Graph01090->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01090->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01090->GetYaxis()->SetTitleFont(42);
   Graph_Graph01090->GetZaxis()->SetLabelFont(42);
   Graph_Graph01090->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01090->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01090);
   
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
