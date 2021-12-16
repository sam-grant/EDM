void S12_AverageVerticalOffsetVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 11:35:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1006[18] = {
   2.980833,
   0.0763172,
   0.2352758,
   0.5811334,
   -0.2281254,
   -0.3293392,
   -0.4732933,
   -0.4229412,
   -0.2012512,
   -0.1033424,
   0.07279366,
   0.04631297,
   -0.01358133,
   0.02889104,
   0.1053966,
   0.05792186,
   0.1142893,
   0.1269936};
   Double_t Graph0_fex1006[18] = {
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
   Double_t Graph0_fey1006[18] = {
   0.1480424,
   0.08869767,
   0.06096374,
   0.05001356,
   0.04397954,
   0.03975191,
   0.03716079,
   0.03515153,
   0.03520378,
   0.03392,
   0.03502157,
   0.03519297,
   0.03672358,
   0.03707261,
   0.03885772,
   0.04175287,
   0.04441599,
   0.04795504};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","S12",100,349.5,2899.5);
   Graph_Graph01006->SetMinimum(-1.5);
   Graph_Graph01006->SetMaximum(2.5);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01006->GetXaxis()->CenterTitle(true);
   Graph_Graph01006->GetXaxis()->SetLabelFont(42);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetXaxis()->SetTitleFont(42);
   Graph_Graph01006->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01006->GetYaxis()->CenterTitle(true);
   Graph_Graph01006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01006->GetYaxis()->SetLabelFont(42);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01006->GetYaxis()->SetTitleFont(42);
   Graph_Graph01006->GetZaxis()->SetLabelFont(42);
   Graph_Graph01006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01006);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   TLine *line = new TLine(349.5,0,2899.5,0);

   ci = TColor::GetColor("#cccccc");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t Graph0_fx1007[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1007[18] = {
   2.980833,
   0.0763172,
   0.2352758,
   0.5811334,
   -0.2281254,
   -0.3293392,
   -0.4732933,
   -0.4229412,
   -0.2012512,
   -0.1033424,
   0.07279366,
   0.04631297,
   -0.01358133,
   0.02889104,
   0.1053966,
   0.05792186,
   0.1142893,
   0.1269936};
   Double_t Graph0_fex1007[18] = {
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
   Double_t Graph0_fey1007[18] = {
   0.1480424,
   0.08869767,
   0.06096374,
   0.05001356,
   0.04397954,
   0.03975191,
   0.03716079,
   0.03515153,
   0.03520378,
   0.03392,
   0.03502157,
   0.03519297,
   0.03672358,
   0.03707261,
   0.03885772,
   0.04175287,
   0.04441599,
   0.04795504};
   gre = new TGraphErrors(18,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph010061007 = new TH1F("Graph_Graph_Graph010061007","S12",100,349.5,2899.5);
   Graph_Graph_Graph010061007->SetMinimum(-1.5);
   Graph_Graph_Graph010061007->SetMaximum(2.5);
   Graph_Graph_Graph010061007->SetDirectory(0);
   Graph_Graph_Graph010061007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph010061007->SetLineColor(ci);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph010061007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph010061007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph010061007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph010061007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph010061007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph010061007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph010061007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph010061007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph010061007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph010061007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph010061007);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1a","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
