void S12_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:35:21 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-113.9707,3125,57.5706);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1306[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1306[9] = {
   -69.986,
   -42.23918,
   -37.14229,
   -45.81161,
   -49.67205,
   -44.93325,
   -42.02247,
   -40.36665,
   -36.21204};
   Double_t Graph0_fex1306[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1306[9] = {
   7.467263,
   3.769981,
   2.872186,
   2.483788,
   2.373446,
   2.41558,
   2.54452,
   2.78419,
   3.195941};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1306,Graph0_fy1306,Graph0_fex1306,Graph0_fey1306);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01306 = new TH1F("Graph_Graph01306","S12",100,425,2825);
   Graph_Graph01306->SetMinimum(-96.81658);
   Graph_Graph01306->SetMaximum(40.41647);
   Graph_Graph01306->SetDirectory(0);
   Graph_Graph01306->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01306->SetLineColor(ci);
   Graph_Graph01306->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01306->GetXaxis()->CenterTitle(true);
   Graph_Graph01306->GetXaxis()->SetLabelFont(42);
   Graph_Graph01306->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01306->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01306->GetXaxis()->SetTitleFont(42);
   Graph_Graph01306->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01306->GetYaxis()->CenterTitle(true);
   Graph_Graph01306->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01306->GetYaxis()->SetLabelFont(42);
   Graph_Graph01306->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01306->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01306->GetYaxis()->SetTitleFont(42);
   Graph_Graph01306->GetZaxis()->SetLabelFont(42);
   Graph_Graph01306->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01306->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01306);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1307[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1307[9] = {
   29.48463,
   27.72126,
   19.24057,
   16.34163,
   16.56373,
   11.61145,
   8.991726,
   7.975261,
   5.596306};
   Double_t Graph1_fex1307[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1307[9] = {
   2.848543,
   1.42979,
   1.081188,
   0.9223445,
   0.8740659,
   0.8822845,
   0.9288148,
   1.013963,
   1.168763};
   gre = new TGraphErrors(9,Graph1_fx1307,Graph1_fy1307,Graph1_fex1307,Graph1_fey1307);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11307 = new TH1F("Graph_Graph11307","Graph",100,425,2825);
   Graph_Graph11307->SetMinimum(1.63698);
   Graph_Graph11307->SetMaximum(35.12374);
   Graph_Graph11307->SetDirectory(0);
   Graph_Graph11307->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11307->SetLineColor(ci);
   Graph_Graph11307->GetXaxis()->SetLabelFont(42);
   Graph_Graph11307->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11307->GetXaxis()->SetTitleFont(42);
   Graph_Graph11307->GetYaxis()->SetLabelFont(42);
   Graph_Graph11307->GetYaxis()->SetTitleFont(42);
   Graph_Graph11307->GetZaxis()->SetLabelFont(42);
   Graph_Graph11307->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11307->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11307);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1308[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1308[9] = {
   0.2885859,
   -0.04731307,
   -0.6182266,
   -0.6343316,
   -0.2488241,
   -0.07790354,
   -0.04987542,
   -0.001066375,
   0.1611005};
   Double_t Graph2_fex1308[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1308[9] = {
   0.04322893,
   0.02194588,
   0.01680309,
   0.01462204,
   0.01402834,
   0.01434918,
   0.0151531,
   0.01664857,
   0.01912708};
   gre = new TGraphErrors(9,Graph2_fx1308,Graph2_fy1308,Graph2_fex1308,Graph2_fey1308);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21308 = new TH1F("Graph_Graph21308","Graph",100,425,2825);
   Graph_Graph21308->SetMinimum(-0.7470305);
   Graph_Graph21308->SetMaximum(0.4298916);
   Graph_Graph21308->SetDirectory(0);
   Graph_Graph21308->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21308->SetLineColor(ci);
   Graph_Graph21308->GetXaxis()->SetLabelFont(42);
   Graph_Graph21308->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21308->GetXaxis()->SetTitleFont(42);
   Graph_Graph21308->GetYaxis()->SetLabelFont(42);
   Graph_Graph21308->GetYaxis()->SetTitleFont(42);
   Graph_Graph21308->GetZaxis()->SetLabelFont(42);
   Graph_Graph21308->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21308->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21308);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.625,0.75,0.875,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Data: Run-1d","h");
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
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
