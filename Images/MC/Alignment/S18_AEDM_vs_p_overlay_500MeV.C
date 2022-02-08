void S18_AEDM_vs_p_overlay_500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 13:03:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-117.9141,-1.250448,3150.504,0.6227725);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_AEDM_vs_p_thetaY_fx1013[6] = {
   427.0105,
   780.8928,
   1213.077,
   1697.992,
   2180.769,
   2605.4};
   Double_t S18_AEDM_vs_p_thetaY_fy1013[6] = {
   -0.5310798,
   0.1040719,
   0.1111672,
   0.152839,
   0.0509618,
   0.1395404};
   Double_t S18_AEDM_vs_p_thetaY_fex1013[6] = {
   0.1881889,
   0.1688841,
   0.1638845,
   0.2025143,
   0.3102647,
   0.3676052};
   Double_t S18_AEDM_vs_p_thetaY_fey1013[6] = {
   0.2506257,
   0.04238313,
   0.02719023,
   0.0252744,
   0.02829051,
   0.0375216};
   TGraphErrors *gre = new TGraphErrors(6,S18_AEDM_vs_p_thetaY_fx1013,S18_AEDM_vs_p_thetaY_fy1013,S18_AEDM_vs_p_thetaY_fex1013,S18_AEDM_vs_p_thetaY_fey1013);
   gre->SetName("S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p_thetaY1013 = new TH1F("Graph_S18_AEDM_vs_p_thetaY1013","S18",100,208.9278,2823.662);
   Graph_S18_AEDM_vs_p_thetaY1013->SetMinimum(-1.063126);
   Graph_S18_AEDM_vs_p_thetaY1013->SetMaximum(0.4354504);
   Graph_S18_AEDM_vs_p_thetaY1013->SetDirectory(0);
   Graph_S18_AEDM_vs_p_thetaY1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p_thetaY1013->SetLineColor(ci);
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->SetRange(1,100);
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p_thetaY1013->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->SetTitle("A_{EDM} [mrad] / 500 MeV");
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p_thetaY1013->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1013->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1013->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p_thetaY1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p_thetaY1013);
   
   gre->Draw("ap");
   
   Double_t S18_AEDM_vs_p_thetaY_fx1014[6] = {
   476.786,
   830.423,
   1262.784,
   1747.62,
   2230.525,
   2655.7};
   Double_t S18_AEDM_vs_p_thetaY_fy1014[6] = {
   -0.5780708,
   0.1126703,
   0.09261482,
   0.1400507,
   0.03369031,
   0.1491218};
   Double_t S18_AEDM_vs_p_thetaY_fex1014[6] = {
   0.1764181,
   0.1599716,
   0.1555917,
   0.193239,
   0.2981714,
   0.3547003};
   Double_t S18_AEDM_vs_p_thetaY_fey1014[6] = {
   0.2350553,
   0.04011111,
   0.0258518,
   0.02417081,
   0.02727733,
   0.03632854};
   gre = new TGraphErrors(6,S18_AEDM_vs_p_thetaY_fx1014,S18_AEDM_vs_p_thetaY_fy1014,S18_AEDM_vs_p_thetaY_fex1014,S18_AEDM_vs_p_thetaY_fey1014);
   gre->SetName("S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_AEDM_vs_p_thetaY1014 = new TH1F("Graph_S18_AEDM_vs_p_thetaY1014","S18_",100,258.6651,2873.999);
   Graph_S18_AEDM_vs_p_thetaY1014->SetMinimum(-0.9129837);
   Graph_S18_AEDM_vs_p_thetaY1014->SetMaximum(0.285308);
   Graph_S18_AEDM_vs_p_thetaY1014->SetDirectory(0);
   Graph_S18_AEDM_vs_p_thetaY1014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p_thetaY1014->SetLineColor(ci);
   Graph_S18_AEDM_vs_p_thetaY1014->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_AEDM_vs_p_thetaY1014->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1014->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1014->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1014->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p_thetaY1014->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1014->GetYaxis()->SetTitle("A_{EDM} [mrad] / 500 MeV");
   Graph_S18_AEDM_vs_p_thetaY1014->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1014->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1014->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1014->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p_thetaY1014->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1014->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1014->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p_thetaY1014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p_thetaY1014);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S18_AEDM_vs_p_thetaY","Nominal","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("S18_AEDM_vs_p_thetaY","#minus1 mm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
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
