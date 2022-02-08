void S18_AEDM_vs_p_overlay_250MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb  8 13:03:12 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-157.5774,-1.256097,3348.821,0.6736116);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S18_AEDM_vs_p_thetaY_fx1005[11] = {
   427.0105,
   628.328,
   855.4891,
   1098.192,
   1345.814,
   1594.631,
   1841.597,
   2089.326,
   2338.231,
   2587.613,
   2764.011};
   Double_t S18_AEDM_vs_p_thetaY_fy1005[11] = {
   -0.519512,
   0.1168067,
   0.09730087,
   0.09689966,
   0.1295367,
   0.1709384,
   0.1293568,
   0.07217421,
   0.01817125,
   0.1622917,
   -0.0735647};
   Double_t S18_AEDM_vs_p_thetaY_fex1005[11] = {
   0.1881889,
   0.1587198,
   0.1152138,
   0.1128837,
   0.1211082,
   0.1349346,
   0.1585985,
   0.2000004,
   0.2630519,
   0.3154737,
   0.4104892};
   Double_t S18_AEDM_vs_p_thetaY_fey1005[11] = {
   0.2505072,
   0.08345836,
   0.04810947,
   0.03959109,
   0.03659324,
   0.03509851,
   0.03554505,
   0.03775799,
   0.04116075,
   0.04039497,
   0.09252578};
   TGraphErrors *gre = new TGraphErrors(11,S18_AEDM_vs_p_thetaY_fx1005,S18_AEDM_vs_p_thetaY_fy1005,S18_AEDM_vs_p_thetaY_fex1005,S18_AEDM_vs_p_thetaY_fey1005);
   gre->SetName("S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_AEDM_vs_p_thetaY1005 = new TH1F("Graph_S18_AEDM_vs_p_thetaY1005","S18",100,193.0625,2998.181);
   Graph_S18_AEDM_vs_p_thetaY1005->SetMinimum(-1.063126);
   Graph_S18_AEDM_vs_p_thetaY1005->SetMaximum(0.4806408);
   Graph_S18_AEDM_vs_p_thetaY1005->SetDirectory(0);
   Graph_S18_AEDM_vs_p_thetaY1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p_thetaY1005->SetLineColor(ci);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetRange(1,100);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p_thetaY1005->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p_thetaY1005->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p_thetaY1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p_thetaY1005);
   
   gre->Draw("ap");
   
   Double_t S18_AEDM_vs_p_thetaY_fx1006[11] = {
   476.786,
   678.0846,
   905.424,
   1148.135,
   1395.689,
   1644.543,
   1891.565,
   2139.351,
   2388.21,
   2638.177,
   2813.977};
   Double_t S18_AEDM_vs_p_thetaY_fy1006[11] = {
   -0.5780708,
   0.151851,
   0.09340252,
   0.08359994,
   0.1032015,
   0.144916,
   0.133759,
   0.04975646,
   0.007656455,
   0.171379,
   -0.05159142};
   Double_t S18_AEDM_vs_p_thetaY_fex1006[11] = {
   0.1764181,
   0.1501326,
   0.1090623,
   0.1070808,
   0.1151587,
   0.1285966,
   0.1516199,
   0.1920581,
   0.2530405,
   0.3052587,
   0.3949391};
   Double_t S18_AEDM_vs_p_thetaY_fey1006[11] = {
   0.2350553,
   0.07878972,
   0.0455774,
   0.03757897,
   0.03486691,
   0.03351194,
   0.03407925,
   0.03638566,
   0.03974281,
   0.03910623,
   0.08999141};
   gre = new TGraphErrors(11,S18_AEDM_vs_p_thetaY_fx1006,S18_AEDM_vs_p_thetaY_fy1006,S18_AEDM_vs_p_thetaY_fex1006,S18_AEDM_vs_p_thetaY_fey1006);
   gre->SetName("S18_AEDM_vs_p_thetaY");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_AEDM_vs_p_thetaY1006 = new TH1F("Graph_S18_AEDM_vs_p_thetaY1006","S18_",100,242.8334,3048.148);
   Graph_S18_AEDM_vs_p_thetaY1006->SetMinimum(-0.9175027);
   Graph_S18_AEDM_vs_p_thetaY1006->SetMaximum(0.3350174);
   Graph_S18_AEDM_vs_p_thetaY1006->SetDirectory(0);
   Graph_S18_AEDM_vs_p_thetaY1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_AEDM_vs_p_thetaY1006->SetLineColor(ci);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_AEDM_vs_p_thetaY1006->GetXaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitle("A_{EDM} [mrad] / 250 MeV");
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->CenterTitle(true);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_AEDM_vs_p_thetaY1006->GetYaxis()->SetTitleFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetZaxis()->SetLabelFont(42);
   Graph_S18_AEDM_vs_p_thetaY1006->GetZaxis()->SetTitleOffset(1);
   Graph_S18_AEDM_vs_p_thetaY1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_AEDM_vs_p_thetaY1006);
   
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
