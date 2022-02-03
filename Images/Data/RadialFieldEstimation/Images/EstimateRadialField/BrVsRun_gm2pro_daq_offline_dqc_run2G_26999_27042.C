void BrVsRun_gm2pro_daq_offline_dqc_run2G_26999_27042()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Jan 14 06:17:43 2022) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(26988.25,-4,27052.75,6);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t Graph0_fy1003[10] = {
   16.81408,
   14.36835,
   13.90016,
   13.56105,
   13.92054,
   13.57844,
   13.64819,
   13.35324,
   12.88958,
   12.57327};
   Double_t Graph0_fex1003[10] = {
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
   Double_t Graph0_fey1003[10] = {
   4.293031,
   4.237213,
   4.233204,
   4.229741,
   4.235199,
   4.230774,
   4.230705,
   4.229279,
   4.223034,
   4.219937};
   TGraphErrors *gre = new TGraphErrors(10,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle(";Run number;#LTB_{r}#GT [ppm]");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3004);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,26994.7,27046.3);
   Graph_Graph1003->SetMinimum(-3);
   Graph_Graph1003->SetMaximum(5);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("Run number");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#LTB_{r}#GT [ppm]");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("a3");
   
   Double_t Graph1_fx1004[10] = {
   26999,
   27013,
   27018,
   27019,
   27021,
   27022,
   27028,
   27029,
   27041,
   27042};
   Double_t Graph1_fy1004[10] = {
   16.81408,
   14.36835,
   13.90016,
   13.56105,
   13.92054,
   13.57844,
   13.64819,
   13.35324,
   12.88958,
   12.57327};
   Double_t Graph1_fex1004[10] = {
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
   Double_t Graph1_fey1004[10] = {
   0.5919327,
   0.09223502,
   0.09665033,
   0.08034734,
   0.1601382,
   0.1194843,
   0.08795143,
   0.1426051,
   0.07960828,
   0.09487133};
   gre = new TGraphErrors(10,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3004);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,26994.7,27046.3);
   Graph_Graph1004->SetMinimum(11.98564);
   Graph_Graph1004->SetMaximum(17.89878);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(0);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p3 ");
   
   TLegend *leg = new TLegend(0.15,0.79,0.65,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph1","Uncorrelated errors","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Correlated errors","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);
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
