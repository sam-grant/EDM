#ifdef __CLING__
#pragma cling optimize(0)
#endif
void S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Oct 10 15:15:52 2022) by ROOT version 6.26/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-34.46248,3125,46.87684);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1120[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1120[9] = {
   2.388423,
   -4.161408,
   -11.73834,
   -15.31618,
   -9.271718,
   -10.43218,
   -11.40991,
   -12.55051,
   -17.54727};
   Double_t Graph0_fex1120[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1120[9] = {
   7.619959,
   3.966037,
   3.03172,
   2.659456,
   2.560083,
   2.651014,
   2.830969,
   3.100904,
   3.515563};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1120,Graph0_fy1120,Graph0_fex1120,Graph0_fey1120);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01120 = new TH1F("Graph_Graph01120","S18",100,425,2825);
   Graph_Graph01120->SetMinimum(-26.32855);
   Graph_Graph01120->SetMaximum(38.7429);
   Graph_Graph01120->SetDirectory(0);
   Graph_Graph01120->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01120->SetLineColor(ci);
   Graph_Graph01120->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01120->GetXaxis()->CenterTitle(true);
   Graph_Graph01120->GetXaxis()->SetLabelFont(42);
   Graph_Graph01120->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01120->GetXaxis()->SetTitleFont(42);
   Graph_Graph01120->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01120->GetYaxis()->CenterTitle(true);
   Graph_Graph01120->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01120->GetYaxis()->SetLabelFont(42);
   Graph_Graph01120->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01120->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01120->GetYaxis()->SetTitleFont(42);
   Graph_Graph01120->GetZaxis()->SetLabelFont(42);
   Graph_Graph01120->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01120->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01120);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1121[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1121[9] = {
   22.43536,
   28.06154,
   24.52635,
   21.54489,
   18.41904,
   14.77775,
   13.14695,
   9.70338,
   8.463168};
   Double_t Graph1_fex1121[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1121[9] = {
   5.659625,
   2.932778,
   2.240421,
   1.95115,
   1.872113,
   1.930009,
   2.052739,
   2.244695,
   2.545458};
   gre = new TGraphErrors(9,Graph1_fx1121,Graph1_fy1121,Graph1_fex1121,Graph1_fey1121);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11121 = new TH1F("Graph_Graph11121","Graph",100,425,2825);
   Graph_Graph11121->SetMinimum(3.410049);
   Graph_Graph11121->SetMaximum(33.50198);
   Graph_Graph11121->SetDirectory(0);
   Graph_Graph11121->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11121->SetLineColor(ci);
   Graph_Graph11121->GetXaxis()->SetLabelFont(42);
   Graph_Graph11121->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11121->GetXaxis()->SetTitleFont(42);
   Graph_Graph11121->GetYaxis()->SetLabelFont(42);
   Graph_Graph11121->GetYaxis()->SetTitleFont(42);
   Graph_Graph11121->GetZaxis()->SetLabelFont(42);
   Graph_Graph11121->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11121->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11121);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1122[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1122[9] = {
   0.6163886,
   0.2556176,
   -0.3686613,
   -0.3566881,
   -0.2089101,
   -0.07082611,
   -0.009881045,
   0.0009326544,
   0.05195345};
   Double_t Graph2_fex1122[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1122[9] = {
   0.05244603,
   0.02736781,
   0.02100873,
   0.01850808,
   0.01785895,
   0.0185608,
   0.01991591,
   0.02184897,
   0.02469595};
   gre = new TGraphErrors(9,Graph2_fx1122,Graph2_fy1122,Graph2_fex1122,Graph2_fey1122);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21122 = new TH1F("Graph_Graph21122","Graph",100,425,2825);
   Graph_Graph21122->SetMinimum(-0.4955205);
   Graph_Graph21122->SetMaximum(0.7746851);
   Graph_Graph21122->SetDirectory(0);
   Graph_Graph21122->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21122->SetLineColor(ci);
   Graph_Graph21122->GetXaxis()->SetLabelFont(42);
   Graph_Graph21122->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21122->GetXaxis()->SetTitleFont(42);
   Graph_Graph21122->GetYaxis()->SetLabelFont(42);
   Graph_Graph21122->GetYaxis()->SetTitleFont(42);
   Graph_Graph21122->GetZaxis()->SetLabelFont(42);
   Graph_Graph21122->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21122->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21122);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1b","h");
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
