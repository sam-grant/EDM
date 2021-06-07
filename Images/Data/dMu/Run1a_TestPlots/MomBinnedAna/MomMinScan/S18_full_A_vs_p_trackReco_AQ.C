void S18_full_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.04405754,3468.85,0.0875162);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1302[15] = {
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
   Double_t Graph0_fy1302[15] = {
   0.02845263,
   0.02832458,
   0.02746802,
   0.03193289,
   0.02587586,
   0.02329743,
   0.01951328,
   0.01457065,
   0.02059058,
   0.01488901,
   0.0296504,
   0.007398773,
   -0.007340109,
   0.01013387,
   0.03106393};
   Double_t Graph0_fex1302[15] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1302[15] = {
   0.007978956,
   0.007978821,
   0.007943032,
   0.007754404,
   0.007628071,
   0.007678212,
   0.007854984,
   0.008182521,
   0.008684872,
   0.009466724,
   0.01059485,
   0.01224177,
   0.01478848,
   0.01850818,
   0.03452332};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1302,Graph0_fy1302,Graph0_fex1302,Graph0_fey1302);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01302 = new TH1F("Graph_Graph01302","S18",100,0,3080);
   Graph_Graph01302->SetMinimum(-0.03090017);
   Graph_Graph01302->SetMaximum(0.07435883);
   Graph_Graph01302->SetDirectory(0);
   Graph_Graph01302->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01302->SetLineColor(ci);
   Graph_Graph01302->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01302->GetXaxis()->SetRange(0,100);
   Graph_Graph01302->GetXaxis()->CenterTitle(true);
   Graph_Graph01302->GetXaxis()->SetLabelFont(42);
   Graph_Graph01302->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01302->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01302->GetXaxis()->SetTitleFont(42);
   Graph_Graph01302->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01302->GetYaxis()->CenterTitle(true);
   Graph_Graph01302->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01302->GetYaxis()->SetLabelFont(42);
   Graph_Graph01302->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01302->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01302->GetYaxis()->SetTitleFont(42);
   Graph_Graph01302->GetZaxis()->SetLabelFont(42);
   Graph_Graph01302->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01302->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01302);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
