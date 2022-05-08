void S18_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  6 12:35:18 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-66.88761,3125,76.72549);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1244[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1244[9] = {
   -32.05599,
   -16.95536,
   -18.69297,
   -14.4484,
   -21.07625,
   -14.30624,
   -18.98559,
   -9.491585,
   -27.65943};
   Double_t Graph0_fex1244[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1244[9] = {
   9.965048,
   5.189335,
   3.961221,
   3.486131,
   3.372401,
   3.502535,
   3.745546,
   4.128114,
   4.687479};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1244,Graph0_fy1244,Graph0_fex1244,Graph0_fey1244);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01244 = new TH1F("Graph_Graph01244","S18",100,425,2825);
   Graph_Graph01244->SetMinimum(-52.5263);
   Graph_Graph01244->SetMaximum(62.36418);
   Graph_Graph01244->SetDirectory(0);
   Graph_Graph01244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01244->SetLineColor(ci);
   Graph_Graph01244->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01244->GetXaxis()->CenterTitle(true);
   Graph_Graph01244->GetXaxis()->SetLabelFont(42);
   Graph_Graph01244->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01244->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01244->GetXaxis()->SetTitleFont(42);
   Graph_Graph01244->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01244->GetYaxis()->CenterTitle(true);
   Graph_Graph01244->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01244->GetYaxis()->SetLabelFont(42);
   Graph_Graph01244->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01244->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01244->GetYaxis()->SetTitleFont(42);
   Graph_Graph01244->GetZaxis()->SetLabelFont(42);
   Graph_Graph01244->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01244->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01244);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1245[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1245[9] = {
   45.98697,
   32.01384,
   24.06888,
   17.85567,
   17.11089,
   11.01485,
   12.4485,
   6.297443,
   6.900579};
   Double_t Graph1_fex1245[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1245[9] = {
   3.904373,
   2.012333,
   1.532998,
   1.340338,
   1.291674,
   1.333912,
   1.417377,
   1.55911,
   1.775205};
   gre = new TGraphErrors(9,Graph1_fx1245,Graph1_fy1245,Graph1_fex1245,Graph1_fey1245);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11245 = new TH1F("Graph_Graph11245","Graph",100,425,2825);
   Graph_Graph11245->SetMinimum(0.2230322);
   Graph_Graph11245->SetMaximum(54.40664);
   Graph_Graph11245->SetDirectory(0);
   Graph_Graph11245->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11245->SetLineColor(ci);
   Graph_Graph11245->GetXaxis()->SetLabelFont(42);
   Graph_Graph11245->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11245->GetXaxis()->SetTitleFont(42);
   Graph_Graph11245->GetYaxis()->SetLabelFont(42);
   Graph_Graph11245->GetYaxis()->SetTitleFont(42);
   Graph_Graph11245->GetZaxis()->SetLabelFont(42);
   Graph_Graph11245->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11245->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11245);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1246[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1246[9] = {
   0.5335711,
   0.04506032,
   -0.5413794,
   -0.503107,
   -0.2402665,
   -0.1372083,
   -0.08304222,
   -0.08219866,
   0.05529829};
   Double_t Graph2_fex1246[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1246[9] = {
   0.05763385,
   0.03013392,
   0.02305904,
   0.02037338,
   0.01975215,
   0.02054973,
   0.02205052,
   0.02437943,
   0.02753996};
   gre = new TGraphErrors(9,Graph2_fx1246,Graph2_fy1246,Graph2_fex1246,Graph2_fey1246);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21246 = new TH1F("Graph_Graph21246","Graph",100,425,2825);
   Graph_Graph21246->SetMinimum(-0.6800027);
   Graph_Graph21246->SetMaximum(0.7067693);
   Graph_Graph21246->SetDirectory(0);
   Graph_Graph21246->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21246->SetLineColor(ci);
   Graph_Graph21246->GetXaxis()->SetLabelFont(42);
   Graph_Graph21246->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21246->GetXaxis()->SetTitleFont(42);
   Graph_Graph21246->GetYaxis()->SetLabelFont(42);
   Graph_Graph21246->GetYaxis()->SetTitleFont(42);
   Graph_Graph21246->GetZaxis()->SetLabelFont(42);
   Graph_Graph21246->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21246->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21246);
   
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
