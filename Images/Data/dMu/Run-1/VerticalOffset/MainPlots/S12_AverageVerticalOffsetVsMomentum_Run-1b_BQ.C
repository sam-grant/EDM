void S12_AverageVerticalOffsetVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Mar 27 15:09:42 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-2,3218.25,3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1227[18] = {
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
   Double_t Graph0_fy1227[18] = {
   2.748798,
   0.07403883,
   0.2858476,
   0.5534404,
   -0.2277198,
   -0.2721764,
   -0.4341191,
   -0.3597517,
   -0.1308288,
   -0.06355375,
   0.03995442,
   0.08884847,
   -0.01302896,
   0.0006699281,
   0.05911362,
   0.05967981,
   0.1754099,
   0.05309012};
   Double_t Graph0_fex1227[18] = {
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
   Double_t Graph0_fey1227[18] = {
   0.1033794,
   0.06238963,
   0.04293999,
   0.03521875,
   0.03104279,
   0.02799011,
   0.02624117,
   0.02479034,
   0.02480357,
   0.02393309,
   0.0247481,
   0.02482918,
   0.02585209,
   0.02625633,
   0.02741678,
   0.02930263,
   0.03112098,
   0.03317463};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1227,Graph0_fy1227,Graph0_fex1227,Graph0_fey1227);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01227 = new TH1F("Graph_Graph01227","S12",100,349.5,2899.5);
   Graph_Graph01227->SetMinimum(-1.5);
   Graph_Graph01227->SetMaximum(2.5);
   Graph_Graph01227->SetDirectory(0);
   Graph_Graph01227->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01227->SetLineColor(ci);
   Graph_Graph01227->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01227->GetXaxis()->CenterTitle(true);
   Graph_Graph01227->GetXaxis()->SetLabelFont(42);
   Graph_Graph01227->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01227->GetXaxis()->SetTitleFont(42);
   Graph_Graph01227->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph01227->GetYaxis()->CenterTitle(true);
   Graph_Graph01227->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01227->GetYaxis()->SetLabelFont(42);
   Graph_Graph01227->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01227->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01227->GetYaxis()->SetTitleFont(42);
   Graph_Graph01227->GetZaxis()->SetLabelFont(42);
   Graph_Graph01227->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01227);
   
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
   
   Double_t Graph0_fx1228[18] = {
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
   Double_t Graph0_fy1228[18] = {
   2.748798,
   0.07403883,
   0.2858476,
   0.5534404,
   -0.2277198,
   -0.2721764,
   -0.4341191,
   -0.3597517,
   -0.1308288,
   -0.06355375,
   0.03995442,
   0.08884847,
   -0.01302896,
   0.0006699281,
   0.05911362,
   0.05967981,
   0.1754099,
   0.05309012};
   Double_t Graph0_fex1228[18] = {
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
   Double_t Graph0_fey1228[18] = {
   0.1033794,
   0.06238963,
   0.04293999,
   0.03521875,
   0.03104279,
   0.02799011,
   0.02624117,
   0.02479034,
   0.02480357,
   0.02393309,
   0.0247481,
   0.02482918,
   0.02585209,
   0.02625633,
   0.02741678,
   0.02930263,
   0.03112098,
   0.03317463};
   gre = new TGraphErrors(18,Graph0_fx1228,Graph0_fy1228,Graph0_fex1228,Graph0_fey1228);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph012271228 = new TH1F("Graph_Graph_Graph012271228","S12",100,349.5,2899.5);
   Graph_Graph_Graph012271228->SetMinimum(-1.5);
   Graph_Graph_Graph012271228->SetMaximum(2.5);
   Graph_Graph_Graph012271228->SetDirectory(0);
   Graph_Graph_Graph012271228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph012271228->SetLineColor(ci);
   Graph_Graph_Graph012271228->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph012271228->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph012271228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph012271228->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012271228->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph012271228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph012271228->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad]");
   Graph_Graph_Graph012271228->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph012271228->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph012271228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph012271228->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph012271228->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph012271228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph012271228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph012271228->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph012271228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph012271228);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.65,0.75,0.85,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Run-1b","lpf");
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
