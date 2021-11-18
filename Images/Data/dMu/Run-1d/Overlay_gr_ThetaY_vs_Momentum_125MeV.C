void Overlay_gr_ThetaY_vs_Momentum_125MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Nov 10 16:13:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(520.0312,-3.125,2737.219,3.125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_gr_ThetaY_vs_Momentum_fx1016[24] = {
   62.5,
   187.5,
   312.5,
   437.5,
   562.5,
   687.5,
   812.5,
   937.5,
   1062.5,
   1187.5,
   1312.5,
   1437.5,
   1562.5,
   1687.5,
   1812.5,
   1937.5,
   2062.5,
   2187.5,
   2312.5,
   2437.5,
   2562.5,
   2687.5,
   2812.5,
   2937.5};
   Double_t S12_gr_ThetaY_vs_Momentum_fy1016[24] = {
   0,
   0,
   8.19567,
   2.008229,
   1.532943,
   -0.7626716,
   -0.4542418,
   -0.0708361,
   -0.7996347,
   -0.785792,
   -0.9032438,
   -0.7967818,
   -0.5683084,
   -0.3903896,
   -0.3294255,
   -0.2532162,
   -0.2839071,
   -0.2161442,
   -0.20877,
   -0.1824227,
   -0.07503558,
   0.04771933,
   0.1064728,
   -0.2328277};
   Double_t S12_gr_ThetaY_vs_Momentum_fex1016[24] = {
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
   Double_t S12_gr_ThetaY_vs_Momentum_fey1016[24] = {
   0,
   0,
   0.9120609,
   0.08126999,
   0.03964929,
   0.02363417,
   0.0162384,
   0.01333275,
   0.01174144,
   0.01059412,
   0.009927119,
   0.009369696,
   0.009374894,
   0.009044164,
   0.009343249,
   0.009391406,
   0.009804531,
   0.009904345,
   0.01036089,
   0.01116441,
   0.0118936,
   0.0127738,
   0.03106099,
   0.4976815};
   TGraphErrors *gre = new TGraphErrors(24,S12_gr_ThetaY_vs_Momentum_fx1016,S12_gr_ThetaY_vs_Momentum_fy1016,S12_gr_ThetaY_vs_Momentum_fex1016,S12_gr_ThetaY_vs_Momentum_fey1016);
   gre->SetName("S12_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016 = new TH1F("Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016","",100,0,3225);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->SetMinimum(-2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->SetMaximum(2.5);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->SetDirectory(0);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->SetLineColor(ci);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->SetRange(24,78);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12_gr_ThetaY_vs_Momentum10131016);
   
   gre->Draw("alp");
   
   Double_t S18_gr_ThetaY_vs_Momentum_fx1017[24] = {
   62.5,
   187.5,
   312.5,
   437.5,
   562.5,
   687.5,
   812.5,
   937.5,
   1062.5,
   1187.5,
   1312.5,
   1437.5,
   1562.5,
   1687.5,
   1812.5,
   1937.5,
   2062.5,
   2187.5,
   2312.5,
   2437.5,
   2562.5,
   2687.5,
   2812.5,
   2937.5};
   Double_t S18_gr_ThetaY_vs_Momentum_fy1017[24] = {
   0,
   0,
   7.461316,
   1.928844,
   1.655048,
   -0.8523604,
   -0.5658514,
   -0.2052338,
   -0.9385468,
   -0.8468761,
   -0.8904077,
   -0.7237281,
   -0.5707601,
   -0.4724117,
   -0.4057933,
   -0.2972018,
   -0.2924651,
   -0.2429344,
   -0.2210554,
   -0.2384895,
   -0.1623137,
   -0.150799,
   -0.3721767,
   -1.056324};
   Double_t S18_gr_ThetaY_vs_Momentum_fex1017[24] = {
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
   Double_t S18_gr_ThetaY_vs_Momentum_fey1017[24] = {
   0,
   0,
   0.882477,
   0.07996672,
   0.03863184,
   0.02377195,
   0.01663195,
   0.01374588,
   0.01210064,
   0.01094861,
   0.01039079,
   0.009889401,
   0.009915018,
   0.009662169,
   0.01013053,
   0.01026254,
   0.01080343,
   0.01101805,
   0.01158587,
   0.01253726,
   0.01313675,
   0.01430741,
   0.03719221,
   0.6634832};
   gre = new TGraphErrors(24,S18_gr_ThetaY_vs_Momentum_fx1017,S18_gr_ThetaY_vs_Momentum_fy1017,S18_gr_ThetaY_vs_Momentum_fex1017,S18_gr_ThetaY_vs_Momentum_fey1017);
   gre->SetName("S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017 = new TH1F("Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017","",100,0,3225);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->SetMinimum(-2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->SetMaximum(2.5);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->SetDirectory(0);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->SetLineColor(ci);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->SetRange(24,78);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->CenterTitle(true);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S18_gr_ThetaY_vs_Momentum10141017);
   
   gre->Draw("lp ");
   
   Double_t S12S18_gr_ThetaY_vs_Momentum_fx1018[24] = {
   62.5,
   187.5,
   312.5,
   437.5,
   562.5,
   687.5,
   812.5,
   937.5,
   1062.5,
   1187.5,
   1312.5,
   1437.5,
   1562.5,
   1687.5,
   1812.5,
   1937.5,
   2062.5,
   2187.5,
   2312.5,
   2437.5,
   2562.5,
   2687.5,
   2812.5,
   2937.5};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fy1018[24] = {
   0,
   0,
   7.818614,
   1.968363,
   1.595151,
   -0.8069976,
   -0.5083996,
   -0.135639,
   -0.8666736,
   -0.815147,
   -0.8971432,
   -0.7623394,
   -0.5694579,
   -0.4284053,
   -0.3642423,
   -0.2731958,
   -0.2877629,
   -0.228113,
   -0.2141886,
   -0.2069298,
   -0.1139018,
   -0.03886126,
   -0.08977526,
   -0.5681437};
   Double_t S12S18_gr_ThetaY_vs_Momentum_fex1018[24] = {
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
   Double_t S12S18_gr_ThetaY_vs_Momentum_fey1018[24] = {
   0,
   0,
   0.6342524,
   0.05700422,
   0.02767031,
   0.01676069,
   0.01161915,
   0.009570588,
   0.008426739,
   0.007613563,
   0.007177909,
   0.006801741,
   0.006812135,
   0.006603069,
   0.006868391,
   0.006928314,
   0.007260391,
   0.007365807,
   0.007723329,
   0.008338237,
   0.008817557,
   0.009531278,
   0.02386661,
   0.4012622};
   gre = new TGraphErrors(24,S12S18_gr_ThetaY_vs_Momentum_fx1018,S12S18_gr_ThetaY_vs_Momentum_fy1018,S12S18_gr_ThetaY_vs_Momentum_fex1018,S12S18_gr_ThetaY_vs_Momentum_fey1018);
   gre->SetName("S12S18_gr_ThetaY_vs_Momentum");
   gre->SetTitle(";Decay vertex momentum [MeV];#LT#theta_{y}#GT [mrad] / 125 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018 = new TH1F("Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018","",100,0,3225);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->SetMinimum(-2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->SetMaximum(2.5);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->SetDirectory(0);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->SetLineColor(ci);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->SetRange(24,78);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetXaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 125 MeV");
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->CenterTitle(true);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetYaxis()->SetTitleFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetZaxis()->SetLabelFont(42);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_S12S18_gr_ThetaY_vs_Momentum10151018);
   
   gre->Draw("lp ");
   
   TLegend *leg = new TLegend(0.31,0.91,0.78,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_gr_ThetaY_vs_Momentum","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_gr_ThetaY_vs_Momentum","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12S18_gr_ThetaY_vs_Momentum","S12 & S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
