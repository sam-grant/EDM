void S12_ParametersVsMomentum_Run-1c_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:35:58 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(125,-104.9362,3125,72.21411);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1213[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph0_fy1213[9] = {
   -59.56188,
   -26.43087,
   -22.63495,
   -32.0878,
   -36.40036,
   -27.97131,
   -23.79091,
   -26.12832,
   -23.066};
   Double_t Graph0_fex1213[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1213[9] = {
   10.21503,
   5.121213,
   3.883691,
   3.361008,
   3.213661,
   3.257935,
   3.427677,
   3.73902,
   4.328042};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1213,Graph0_fy1213,Graph0_fex1213,Graph0_fey1213);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01213 = new TH1F("Graph_Graph01213","S12",100,425,2825);
   Graph_Graph01213->SetMinimum(-87.22114);
   Graph_Graph01213->SetMaximum(54.49909);
   Graph_Graph01213->SetDirectory(0);
   Graph_Graph01213->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01213->SetLineColor(ci);
   Graph_Graph01213->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01213->GetXaxis()->CenterTitle(true);
   Graph_Graph01213->GetXaxis()->SetLabelFont(42);
   Graph_Graph01213->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01213->GetXaxis()->SetTitleFont(42);
   Graph_Graph01213->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01213->GetYaxis()->CenterTitle(true);
   Graph_Graph01213->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01213->GetYaxis()->SetLabelFont(42);
   Graph_Graph01213->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01213->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01213->GetYaxis()->SetTitleFont(42);
   Graph_Graph01213->GetZaxis()->SetLabelFont(42);
   Graph_Graph01213->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01213->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01213);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1214[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph1_fy1214[9] = {
   39.50548,
   34.34207,
   24.05135,
   21.37091,
   18.26875,
   12.70483,
   9.392344,
   7.830119,
   4.543611};
   Double_t Graph1_fex1214[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1214[9] = {
   4.09379,
   2.013437,
   1.512553,
   1.289836,
   1.227013,
   1.236112,
   1.296942,
   1.4085,
   1.64675};
   gre = new TGraphErrors(9,Graph1_fx1214,Graph1_fy1214,Graph1_fex1214,Graph1_fey1214);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11214 = new TH1F("Graph_Graph11214","Graph",100,425,2825);
   Graph_Graph11214->SetMinimum(2.607175);
   Graph_Graph11214->SetMaximum(47.66951);
   Graph_Graph11214->SetDirectory(0);
   Graph_Graph11214->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11214->SetLineColor(ci);
   Graph_Graph11214->GetXaxis()->SetLabelFont(42);
   Graph_Graph11214->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11214->GetXaxis()->SetTitleFont(42);
   Graph_Graph11214->GetYaxis()->SetLabelFont(42);
   Graph_Graph11214->GetYaxis()->SetTitleFont(42);
   Graph_Graph11214->GetZaxis()->SetLabelFont(42);
   Graph_Graph11214->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11214->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11214);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1215[9] = {
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625};
   Double_t Graph2_fy1215[9] = {
   0.7240663,
   0.2303725,
   -0.4096429,
   -0.4949759,
   -0.1389791,
   -0.008892904,
   -0.02085208,
   0.0454093,
   0.1525192};
   Double_t Graph2_fex1215[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1215[9] = {
   0.05918891,
   0.02989137,
   0.0227815,
   0.01983091,
   0.0190265,
   0.01936147,
   0.02043784,
   0.02239828,
   0.02587764};
   gre = new TGraphErrors(9,Graph2_fx1215,Graph2_fy1215,Graph2_fex1215,Graph2_fey1215);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21215 = new TH1F("Graph_Graph21215","Graph",100,425,2825);
   Graph_Graph21215->SetMinimum(-0.6446131);
   Graph_Graph21215->SetMaximum(0.9130615);
   Graph_Graph21215->SetDirectory(0);
   Graph_Graph21215->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21215->SetLineColor(ci);
   Graph_Graph21215->GetXaxis()->SetLabelFont(42);
   Graph_Graph21215->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21215->GetXaxis()->SetTitleFont(42);
   Graph_Graph21215->GetYaxis()->SetLabelFont(42);
   Graph_Graph21215->GetYaxis()->SetTitleFont(42);
   Graph_Graph21215->GetZaxis()->SetLabelFont(42);
   Graph_Graph21215->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21215->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21215);
   
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
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
