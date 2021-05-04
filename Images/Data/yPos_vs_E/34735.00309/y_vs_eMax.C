void y_vs_eMax()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 23 17:02:00 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-564.9376,73.84375,7049.438,75.40625);
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
   74.29419,
   74.43127,
   74.44531,
   74.47492,
   74.53685,
   74.54373,
   74.54213,
   74.53921,
   74.53784,
   74.537,
   74.53664,
   74.53623};
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
   0.1137029,
   0.08996918,
   0.07622544,
   0.06773027,
   0.06329514,
   0.06216263,
   0.0621191,
   0.06209293,
   0.06207614,
   0.06206563,
   0.06205795,
   0.06205528};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle(";E_{max} [MeV];#LT y_{calo} #GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","",100,0,6550);
   Graph_Graph01007->SetMinimum(74);
   Graph_Graph01007->SetMaximum(75.25);
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
   74.55944,
   74.82937,
   74.85399,
   74.88757,
   74.94949,
   74.94785,
   74.94727,
   74.94561,
   74.94473,
   74.94385,
   74.9437,
   74.94307};
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
   0.1805851,
   0.1296969,
   0.1050465,
   0.09122691,
   0.08440328,
   0.08284837,
   0.08281343,
   0.08279547,
   0.08278563,
   0.08277714,
   0.08277354,
   0.08277063};
   gre = new TGraphErrors(12,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Graph",100,0,6550);
   Graph_Graph11008->SetMinimum(74.31335);
   Graph_Graph11008->SetMaximum(75.0994);
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
   74.45414,
   74.80046,
   74.84517,
   74.89358,
   74.95005,
   74.9449,
   74.94344,
   74.94207,
   74.94093,
   74.94016,
   74.94,
   74.93938};
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
   0.1913862,
   0.1374739,
   0.1114749,
   0.09675755,
   0.08947661,
   0.08781978,
   0.08778441,
   0.08777037,
   0.08775917,
   0.08775144,
   0.08774715,
   0.08774429};
   gre = new TGraphErrors(12,Graph2_fx1009,Graph2_fy1009,Graph2_fex1009,Graph2_fey1009);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21009 = new TH1F("Graph_Graph21009","Graph",100,0,6550);
   Graph_Graph21009->SetMinimum(74.18508);
   Graph_Graph21009->SetMaximum(75.11721);
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
