void S12S18_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jun 10 08:44:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-78.1979,3125,71.78023);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1275[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1275[9] = {
   -43.42296,
   -21.39042,
   -20.49958,
   -23.89131,
   -29.07139,
   -21.48834,
   -22.17322,
   -23.47092,
   -21.8369};
   Double_t Graph0_fex1275[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1275[9] = {
   7.137107,
   3.645532,
   2.773373,
   2.419693,
   2.326599,
   2.385598,
   2.529482,
   2.776659,
   3.190723};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1275,Graph0_fy1275,Graph0_fex1275,Graph0_fey1275);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01275 = new TH1F("Graph_Graph01275","S12S18",100,425,2825);
   Graph_Graph01275->SetMinimum(-63.20009);
   Graph_Graph01275->SetMaximum(56.78242);
   Graph_Graph01275->SetDirectory(0);
   Graph_Graph01275->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01275->SetLineColor(ci);
   Graph_Graph01275->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01275->GetXaxis()->CenterTitle(true);
   Graph_Graph01275->GetXaxis()->SetLabelFont(42);
   Graph_Graph01275->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01275->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01275->GetXaxis()->SetTitleFont(42);
   Graph_Graph01275->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01275->GetYaxis()->CenterTitle(true);
   Graph_Graph01275->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01275->GetYaxis()->SetLabelFont(42);
   Graph_Graph01275->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01275->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01275->GetYaxis()->SetTitleFont(42);
   Graph_Graph01275->GetZaxis()->SetLabelFont(42);
   Graph_Graph01275->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01275->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01275);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1276[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1276[9] = {
   42.60054,
   33.04367,
   23.98325,
   19.75937,
   17.70921,
   11.89138,
   10.89089,
   8.030744,
   4.943318};
   Double_t Graph1_fex1276[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1276[9] = {
   2.82539,
   1.423259,
   1.076655,
   0.9293903,
   0.8896216,
   0.9066635,
   0.9568839,
   1.045632,
   1.208227};
   gre = new TGraphErrors(9,Graph1_fx1276,Graph1_fy1276,Graph1_fex1276,Graph1_fey1276);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11276 = new TH1F("Graph_Graph11276","Graph",100,425,2825);
   Graph_Graph11276->SetMinimum(3.361582);
   Graph_Graph11276->SetMaximum(49.59502);
   Graph_Graph11276->SetDirectory(0);
   Graph_Graph11276->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11276->SetLineColor(ci);
   Graph_Graph11276->GetXaxis()->SetLabelFont(42);
   Graph_Graph11276->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11276->GetXaxis()->SetTitleFont(42);
   Graph_Graph11276->GetYaxis()->SetLabelFont(42);
   Graph_Graph11276->GetYaxis()->SetTitleFont(42);
   Graph_Graph11276->GetZaxis()->SetLabelFont(42);
   Graph_Graph11276->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11276->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11276);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1277[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1277[9] = {
   0.6124276,
   0.137425,
   -0.4747215,
   -0.4980413,
   -0.1876817,
   -0.06921778,
   -0.04532864,
   0.01980676,
   0.08823569};
   Double_t Graph2_fex1277[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1277[9] = {
   0.0413232,
   0.02122571,
   0.01620867,
   0.01421232,
   0.01370538,
   0.01409499,
   0.01499803,
   0.01653706,
   0.01894623};
   gre = new TGraphErrors(9,Graph2_fx1277,Graph2_fy1277,Graph2_fex1277,Graph2_fey1277);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21277 = new TH1F("Graph_Graph21277","Graph",100,425,2825);
   Graph_Graph21277->SetMinimum(-0.628854);
   Graph_Graph21277->SetMaximum(0.7703512);
   Graph_Graph21277->SetDirectory(0);
   Graph_Graph21277->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21277->SetLineColor(ci);
   Graph_Graph21277->GetXaxis()->SetLabelFont(42);
   Graph_Graph21277->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21277->GetXaxis()->SetTitleFont(42);
   Graph_Graph21277->GetYaxis()->SetLabelFont(42);
   Graph_Graph21277->GetYaxis()->SetTitleFont(42);
   Graph_Graph21277->GetZaxis()->SetLabelFont(42);
   Graph_Graph21277->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21277->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21277);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1c","h");
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
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
