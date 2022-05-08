void S12S18_ParametersVsMomentum_Run-1b_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:35:16 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-40.62278,3125,60.08214);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1182[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1182[9] = {
   -18.95067,
   -9.896378,
   -13.67495,
   -17.29115,
   -13.22414,
   -16.17707,
   -11.67508,
   -12.81899,
   -16.13272};
   Double_t Graph0_fex1182[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1182[9] = {
   5.491159,
   2.801606,
   2.131584,
   1.850961,
   1.77205,
   1.814401,
   1.918409,
   2.095292,
   2.391654};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1182,Graph0_fy1182,Graph0_fex1182,Graph0_fey1182);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01182 = new TH1F("Graph_Graph01182","S12S18",100,425,2825);
   Graph_Graph01182->SetMinimum(-30.55229);
   Graph_Graph01182->SetMaximum(50.01165);
   Graph_Graph01182->SetDirectory(0);
   Graph_Graph01182->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01182->SetLineColor(ci);
   Graph_Graph01182->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01182->GetXaxis()->CenterTitle(true);
   Graph_Graph01182->GetXaxis()->SetLabelFont(42);
   Graph_Graph01182->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01182->GetXaxis()->SetTitleFont(42);
   Graph_Graph01182->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01182->GetYaxis()->CenterTitle(true);
   Graph_Graph01182->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01182->GetYaxis()->SetLabelFont(42);
   Graph_Graph01182->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01182->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01182->GetYaxis()->SetTitleFont(42);
   Graph_Graph01182->GetZaxis()->SetLabelFont(42);
   Graph_Graph01182->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01182->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01182);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1183[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1183[9] = {
   35.87645,
   32.25335,
   27.82263,
   23.30323,
   17.94015,
   16.36508,
   12.08747,
   9.91388,
   7.19196};
   Double_t Graph1_fex1183[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1183[9] = {
   4.132866,
   2.089332,
   1.583325,
   1.362807,
   1.29869,
   1.323162,
   1.399436,
   1.521769,
   1.746866};
   gre = new TGraphErrors(9,Graph1_fx1183,Graph1_fy1183,Graph1_fex1183,Graph1_fey1183);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11183 = new TH1F("Graph_Graph11183","Graph",100,425,2825);
   Graph_Graph11183->SetMinimum(1.988671);
   Graph_Graph11183->SetMaximum(43.46574);
   Graph_Graph11183->SetDirectory(0);
   Graph_Graph11183->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11183->SetLineColor(ci);
   Graph_Graph11183->GetXaxis()->SetLabelFont(42);
   Graph_Graph11183->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11183->GetXaxis()->SetTitleFont(42);
   Graph_Graph11183->GetYaxis()->SetLabelFont(42);
   Graph_Graph11183->GetYaxis()->SetTitleFont(42);
   Graph_Graph11183->GetZaxis()->SetLabelFont(42);
   Graph_Graph11183->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11183->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11183);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1184[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1184[9] = {
   0.7734317,
   0.3461288,
   -0.308807,
   -0.3799971,
   -0.1518377,
   -0.006152433,
   -0.01095186,
   0.02311451,
   0.1040586};
   Double_t Graph2_fex1184[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1184[9] = {
   0.03770255,
   0.01935033,
   0.0148002,
   0.01293166,
   0.01242858,
   0.01278564,
   0.01356835,
   0.01487067,
   0.01691955};
   gre = new TGraphErrors(9,Graph2_fx1184,Graph2_fy1184,Graph2_fex1184,Graph2_fey1184);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21184 = new TH1F("Graph_Graph21184","Graph",100,425,2825);
   Graph_Graph21184->SetMinimum(-0.513335);
   Graph_Graph21184->SetMaximum(0.9315405);
   Graph_Graph21184->SetDirectory(0);
   Graph_Graph21184->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21184->SetLineColor(ci);
   Graph_Graph21184->GetXaxis()->SetLabelFont(42);
   Graph_Graph21184->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21184->GetXaxis()->SetTitleFont(42);
   Graph_Graph21184->GetYaxis()->SetLabelFont(42);
   Graph_Graph21184->GetYaxis()->SetTitleFont(42);
   Graph_Graph21184->GetZaxis()->SetLabelFont(42);
   Graph_Graph21184->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21184->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21184);
   
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
