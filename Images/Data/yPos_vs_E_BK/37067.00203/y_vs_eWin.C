void y_vs_eWin()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 16:10:22 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-130,60,2630,100);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1013[5] = {
   250,
   750,
   1250,
   1750,
   2250};
   Double_t Graph0_fy1013[5] = {
   73.28789,
   68.68856,
   113.4981,
   94.64648,
   98.89687};
   Double_t Graph0_fex1013[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1013[5] = {
   1.17237,
   6.453845,
   0,
   0,
   2.610483};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1013,Graph0_fy1013,Graph0_fex1013,Graph0_fey1013);
   gre->SetName("Graph0");
   gre->SetTitle(";E [MeV]: in range E #minus 250 < E < E #plus 250 MeV;#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01013 = new TH1F("Graph_Graph01013","",100,50,2450);
   Graph_Graph01013->SetMinimum(64);
   Graph_Graph01013->SetMaximum(96);
   Graph_Graph01013->SetDirectory(0);
   Graph_Graph01013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01013->SetLineColor(ci);
   Graph_Graph01013->GetXaxis()->SetTitle("E [MeV]: in range E #minus 250 < E < E #plus 250 MeV");
   Graph_Graph01013->GetXaxis()->SetRange(5,96);
   Graph_Graph01013->GetXaxis()->CenterTitle(true);
   Graph_Graph01013->GetXaxis()->SetLabelFont(42);
   Graph_Graph01013->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetXaxis()->SetTitleFont(42);
   Graph_Graph01013->GetYaxis()->SetTitle("#LT y_{calo} #GT [mm]");
   Graph_Graph01013->GetYaxis()->CenterTitle(true);
   Graph_Graph01013->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01013->GetYaxis()->SetLabelFont(42);
   Graph_Graph01013->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01013->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01013->GetYaxis()->SetTitleFont(42);
   Graph_Graph01013->GetZaxis()->SetLabelFont(42);
   Graph_Graph01013->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01013);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1014[2] = {
   250,
   750};
   Double_t Graph1_fy1014[2] = {
   69.67348,
   83.79388};
   Double_t Graph1_fex1014[2] = {
   0,
   0};
   Double_t Graph1_fey1014[2] = {
   2.221526,
   6.442227};
   gre = new TGraphErrors(2,Graph1_fx1014,Graph1_fy1014,Graph1_fex1014,Graph1_fey1014);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11014 = new TH1F("Graph_Graph11014","Graph",100,200,800);
   Graph_Graph11014->SetMinimum(65.17354);
   Graph_Graph11014->SetMaximum(92.51452);
   Graph_Graph11014->SetDirectory(0);
   Graph_Graph11014->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11014->SetLineColor(ci);
   Graph_Graph11014->GetXaxis()->SetLabelFont(42);
   Graph_Graph11014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11014->GetXaxis()->SetTitleFont(42);
   Graph_Graph11014->GetYaxis()->SetLabelFont(42);
   Graph_Graph11014->GetYaxis()->SetTitleFont(42);
   Graph_Graph11014->GetZaxis()->SetLabelFont(42);
   Graph_Graph11014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11014->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11014);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1015[2] = {
   250,
   750};
   Double_t Graph2_fy1015[2] = {
   71.04046,
   77.52876};
   Double_t Graph2_fex1015[2] = {
   0,
   0};
   Double_t Graph2_fey1015[2] = {
   2.5825,
   7.483125};
   gre = new TGraphErrors(2,Graph2_fx1015,Graph2_fy1015,Graph2_fex1015,Graph2_fey1015);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21015 = new TH1F("Graph_Graph21015","Graph",100,200,800);
   Graph_Graph21015->SetMinimum(66.80257);
   Graph_Graph21015->SetMaximum(86.66728);
   Graph_Graph21015->SetDirectory(0);
   Graph_Graph21015->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21015->SetLineColor(ci);
   Graph_Graph21015->GetXaxis()->SetLabelFont(42);
   Graph_Graph21015->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21015->GetXaxis()->SetTitleFont(42);
   Graph_Graph21015->GetYaxis()->SetLabelFont(42);
   Graph_Graph21015->GetYaxis()->SetTitleFont(42);
   Graph_Graph21015->GetZaxis()->SetLabelFont(42);
   Graph_Graph21015->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21015->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21015);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.45,0.79,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","t > 0 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","t > 24 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","t > 30 #mus","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
