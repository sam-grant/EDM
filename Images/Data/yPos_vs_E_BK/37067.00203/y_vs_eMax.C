void y_vs_eMax()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 16:10:22 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-564.9376,73.975,7049.438,76.225);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[12] = {
   500,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500,
   6000};
   Double_t Graph0_fy1007[12] = {
   73.28789,
   73.20419,
   73.24489,
   73.26648,
   73.36952,
   73.36952,
   73.36952,
   73.36952,
   73.36952,
   73.36952,
   73.36952,
   73.36952};
   Double_t Graph0_fex1007[12] = {
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
   Double_t Graph0_fey1007[12] = {
   1.17237,
   1.157176,
   1.156723,
   1.155757,
   1.152306,
   1.152306,
   1.152306,
   1.152306,
   1.152306,
   1.152306,
   1.152306,
   1.152306};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{max} [MeV];#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","",100,0,6550);
   Graph_Graph01007->SetMinimum(74.2);
   Graph_Graph01007->SetMaximum(76);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("E_{max} [MeV]");
   Graph_Graph01007->GetXaxis()->SetRange(4,96);
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("#LT y_{calo} #GT [mm]");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1008[12] = {
   500,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500,
   6000};
   Double_t Graph1_fy1008[12] = {
   69.67348,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589,
   69.95589};
   Double_t Graph1_fex1008[12] = {
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
   Double_t Graph1_fey1008[12] = {
   2.221526,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486,
   2.184486};
   gre = new TGraphErrors(12,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Graph",100,0,6550);
   Graph_Graph11008->SetMinimum(66.98311);
   Graph_Graph11008->SetMaximum(72.60921);
   Graph_Graph11008->SetDirectory(0);
   Graph_Graph11008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11008->SetLineColor(ci);
   Graph_Graph11008->GetXaxis()->SetLabelFont(42);
   Graph_Graph11008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetXaxis()->SetTitleFont(42);
   Graph_Graph11008->GetYaxis()->SetLabelFont(42);
   Graph_Graph11008->GetYaxis()->SetTitleFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelFont(42);
   Graph_Graph11008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11008);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1009[12] = {
   500,
   1000,
   1500,
   2000,
   2500,
   3000,
   3500,
   4000,
   4500,
   5000,
   5500,
   6000};
   Double_t Graph2_fy1009[12] = {
   71.04046,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927,
   71.13927};
   Double_t Graph2_fex1009[12] = {
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
   Double_t Graph2_fey1009[12] = {
   2.5825,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354,
   2.546354};
   gre = new TGraphErrors(12,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Graph",100,0,6550);
   Graph_Graph21009->SetMinimum(67.93519);
   Graph_Graph21009->SetMaximum(74.20839);
   Graph_Graph21009->SetDirectory(0);
   Graph_Graph21009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21009->SetLineColor(ci);
   Graph_Graph21009->GetXaxis()->SetLabelFont(42);
   Graph_Graph21009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetXaxis()->SetTitleFont(42);
   Graph_Graph21009->GetYaxis()->SetLabelFont(42);
   Graph_Graph21009->GetYaxis()->SetTitleFont(42);
   Graph_Graph21009->GetZaxis()->SetLabelFont(42);
   Graph_Graph21009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21009);
   
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
