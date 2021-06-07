void A_vs_p_full_overlay_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun  7 14:58:44 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-419.65,-0.31875,3468.85,0.36875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_A_vs_p_fx1561[15] = {
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
   Double_t S0_A_vs_p_fy1561[15] = {
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948,
   0.02382948};
   Double_t S0_A_vs_p_fex1561[15] = {
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
   Double_t S0_A_vs_p_fey1561[15] = {
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07,
   2.815217e-07};
   TGraphErrors *gre = new TGraphErrors(15,S0_A_vs_p_fx1561,S0_A_vs_p_fy1561,S0_A_vs_p_fex1561,S0_A_vs_p_fey1561);
   gre->SetName("S0_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_A_vs_p1561 = new TH1F("Graph_S0_A_vs_p1561","",100,0,3080);
   Graph_S0_A_vs_p1561->SetMinimum(-0.25);
   Graph_S0_A_vs_p1561->SetMaximum(0.3);
   Graph_S0_A_vs_p1561->SetDirectory(0);
   Graph_S0_A_vs_p1561->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_A_vs_p1561->SetLineColor(ci);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S0_A_vs_p1561->GetXaxis()->SetRange(0,100);
   Graph_S0_A_vs_p1561->GetXaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1561->GetXaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1561->GetXaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S0_A_vs_p1561->GetYaxis()->CenterTitle(true);
   Graph_S0_A_vs_p1561->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_A_vs_p1561->GetYaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleOffset(1.1);
   Graph_S0_A_vs_p1561->GetYaxis()->SetTitleFont(42);
   Graph_S0_A_vs_p1561->GetZaxis()->SetLabelFont(42);
   Graph_S0_A_vs_p1561->GetZaxis()->SetTitleOffset(1);
   Graph_S0_A_vs_p1561->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_A_vs_p1561);
   
   gre->Draw("ap");
   
   Double_t S12_A_vs_p_fx1562[15] = {
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
   Double_t S12_A_vs_p_fy1562[15] = {
   0.04463153,
   0.04486676,
   0.04453385,
   0.04348044,
   0.0421451,
   0.03685822,
   0.03711676,
   0.03448903,
   0.01943261,
   0.01999949,
   0.01625778,
   0.002906355,
   -0.006099637,
   0.0263687,
   0.01980956};
   Double_t S12_A_vs_p_fex1562[15] = {
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
   Double_t S12_A_vs_p_fey1562[15] = {
   0.007729486,
   0.007729239,
   0.007691093,
   0.007495742,
   0.007358465,
   0.007383073,
   0.007526906,
   0.007805784,
   0.008231608,
   0.008888338,
   0.009856056,
   0.01137753,
   0.01392526,
   0.01786914,
   0.03202831};
   gre = new TGraphErrors(15,S12_A_vs_p_fx1562,S12_A_vs_p_fy1562,S12_A_vs_p_fex1562,S12_A_vs_p_fey1562);
   gre->SetName("S12_A_vs_p");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_A_vs_p1562 = new TH1F("Graph_S12_A_vs_p1562","S12",100,0,3080);
   Graph_S12_A_vs_p1562->SetMinimum(-0.02728698);
   Graph_S12_A_vs_p1562->SetMaximum(0.05985809);
   Graph_S12_A_vs_p1562->SetDirectory(0);
   Graph_S12_A_vs_p1562->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_A_vs_p1562->SetLineColor(ci);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S12_A_vs_p1562->GetXaxis()->SetRange(0,100);
   Graph_S12_A_vs_p1562->GetXaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1562->GetXaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_A_vs_p1562->GetXaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S12_A_vs_p1562->GetYaxis()->CenterTitle(true);
   Graph_S12_A_vs_p1562->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_A_vs_p1562->GetYaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleOffset(1.2);
   Graph_S12_A_vs_p1562->GetYaxis()->SetTitleFont(42);
   Graph_S12_A_vs_p1562->GetZaxis()->SetLabelFont(42);
   Graph_S12_A_vs_p1562->GetZaxis()->SetTitleOffset(1);
   Graph_S12_A_vs_p1562->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_A_vs_p1562);
   
   gre->Draw("p ");
   
   Double_t S18_A_vs_p_fx1563[15] = {
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
   Double_t S18_A_vs_p_fy1563[15] = {
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
   Double_t S18_A_vs_p_fex1563[15] = {
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
   Double_t S18_A_vs_p_fey1563[15] = {
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
   gre = new TGraphErrors(15,S18_A_vs_p_fx1563,S18_A_vs_p_fy1563,S18_A_vs_p_fex1563,S18_A_vs_p_fey1563);
   gre->SetName("S18_A_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_A_vs_p1563 = new TH1F("Graph_S18_A_vs_p1563","S18",100,0,3080);
   Graph_S18_A_vs_p1563->SetMinimum(-0.03090017);
   Graph_S18_A_vs_p1563->SetMaximum(0.07435883);
   Graph_S18_A_vs_p1563->SetDirectory(0);
   Graph_S18_A_vs_p1563->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_A_vs_p1563->SetLineColor(ci);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_S18_A_vs_p1563->GetXaxis()->SetRange(0,100);
   Graph_S18_A_vs_p1563->GetXaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1563->GetXaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_A_vs_p1563->GetXaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_S18_A_vs_p1563->GetYaxis()->CenterTitle(true);
   Graph_S18_A_vs_p1563->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_A_vs_p1563->GetYaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_A_vs_p1563->GetYaxis()->SetTitleFont(42);
   Graph_S18_A_vs_p1563->GetZaxis()->SetLabelFont(42);
   Graph_S18_A_vs_p1563->GetZaxis()->SetTitleOffset(1);
   Graph_S18_A_vs_p1563->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_A_vs_p1563);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.55,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_A_vs_p","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S12_A_vs_p","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_A_vs_p","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
