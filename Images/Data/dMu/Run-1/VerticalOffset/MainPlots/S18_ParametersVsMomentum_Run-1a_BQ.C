#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_ParametersVsMomentum_Run-1a_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 10 15:15:48 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-56.93277,3125,66.62895);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1058[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1058[9] = {
   -24.80502,
   -10.44188,
   -2.548703,
   -12.11026,
   -16.09485,
   -12.39125,
   -18.06341,
   -7.198095,
   -11.45476};
   Double_t Graph0_fex1058[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1058[9] = {
   10.85626,
   5.647894,
   4.315265,
   3.785764,
   3.646786,
   3.766206,
   4.031248,
   4.411418,
   4.98904};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1058,Graph0_fy1058,Graph0_fex1058,Graph0_fey1058);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01058 = new TH1F("Graph_Graph01058","S18",100,425,2825);
   Graph_Graph01058->SetMinimum(-44.57659);
   Graph_Graph01058->SetMaximum(54.27278);
   Graph_Graph01058->SetDirectory(0);
   Graph_Graph01058->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01058->SetLineColor(ci);
   Graph_Graph01058->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01058->GetXaxis()->CenterTitle(true);
   Graph_Graph01058->GetXaxis()->SetLabelFont(42);
   Graph_Graph01058->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01058->GetXaxis()->SetTitleFont(42);
   Graph_Graph01058->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01058->GetYaxis()->CenterTitle(true);
   Graph_Graph01058->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01058->GetYaxis()->SetLabelFont(42);
   Graph_Graph01058->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01058->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01058->GetYaxis()->SetTitleFont(42);
   Graph_Graph01058->GetZaxis()->SetLabelFont(42);
   Graph_Graph01058->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01058->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01058);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1059[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1059[9] = {
   37.2722,
   31.87487,
   21.79332,
   19.16454,
   19.76976,
   11.12251,
   13.59216,
   4.923379,
   0.3684302};
   Double_t Graph1_fex1059[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1059[9] = {
   6.146025,
   3.166836,
   2.401695,
   2.094592,
   2.005718,
   2.064963,
   2.202582,
   2.402946,
   2.790172};
   gre = new TGraphErrors(9,Graph1_fx1059,Graph1_fy1059,Graph1_fex1059,Graph1_fey1059);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11059 = new TH1F("Graph_Graph11059","Graph",100,425,2825);
   Graph_Graph11059->SetMinimum(-7.005738);
   Graph_Graph11059->SetMaximum(48.00222);
   Graph_Graph11059->SetDirectory(0);
   Graph_Graph11059->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11059->SetLineColor(ci);
   Graph_Graph11059->GetXaxis()->SetLabelFont(42);
   Graph_Graph11059->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11059->GetXaxis()->SetTitleFont(42);
   Graph_Graph11059->GetYaxis()->SetLabelFont(42);
   Graph_Graph11059->GetYaxis()->SetTitleFont(42);
   Graph_Graph11059->GetZaxis()->SetLabelFont(42);
   Graph_Graph11059->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11059->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11059);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1060[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1060[9] = {
   0.7594506,
   0.2218674,
   -0.5054562,
   -0.4278169,
   -0.2096653,
   -0.08179908,
   -0.004145025,
   -0.04413198,
   -0.02933107};
   Double_t Graph2_fex1060[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1060[9] = {
   0.06995651,
   0.0365529,
   0.02801744,
   0.02464511,
   0.02382969,
   0.02465138,
   0.02647902,
   0.02898175,
   0.03256678};
   gre = new TGraphErrors(9,Graph2_fx1060,Graph2_fy1060,Graph2_fex1060,Graph2_fey1060);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21060 = new TH1F("Graph_Graph21060","Graph",100,425,2825);
   Graph_Graph21060->SetMinimum(-0.6697617);
   Graph_Graph21060->SetMaximum(0.9656952);
   Graph_Graph21060->SetDirectory(0);
   Graph_Graph21060->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21060->SetLineColor(ci);
   Graph_Graph21060->GetXaxis()->SetLabelFont(42);
   Graph_Graph21060->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21060->GetXaxis()->SetTitleFont(42);
   Graph_Graph21060->GetYaxis()->SetLabelFont(42);
   Graph_Graph21060->GetYaxis()->SetTitleFont(42);
   Graph_Graph21060->GetZaxis()->SetLabelFont(42);
   Graph_Graph21060->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21060->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21060);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1a","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","A","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","c","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
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
