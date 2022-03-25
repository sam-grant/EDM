void S12_ParametersVsMomentum_Run-1d_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 00:57:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(30.74998,-148.0704,3218.25,64.16956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1066[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph0_fy1066[18] = {
   -86.98733,
   -61.43497,
   -47.86243,
   -38.21868,
   -38.34446,
   -36.08036,
   -47.60726,
   -43.93035,
   -49.14463,
   -50.52597,
   -43.78038,
   -46.25859,
   -41.17505,
   -43.65775,
   -43.94307,
   -34.74938,
   -40.32533,
   -31.83915};
   Double_t Graph0_fex1066[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1066[18] = {
   14.4898,
   8.602861,
   5.920793,
   4.858701,
   4.277972,
   3.857555,
   3.610874,
   3.405199,
   3.404111,
   3.284232,
   3.391586,
   3.41246,
   3.563405,
   3.598195,
   3.775478,
   4.061441,
   4.333295,
   4.6445};
   TGraphErrors *gre = new TGraphErrors(18,Graph0_fx1066,Graph0_fy1066,Graph0_fex1066,Graph0_fey1066);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01066 = new TH1F("Graph_Graph01066","S12",100,349.5,2899.5);
   Graph_Graph01066->SetMinimum(-126.8464);
   Graph_Graph01066->SetMaximum(42.94556);
   Graph_Graph01066->SetDirectory(0);
   Graph_Graph01066->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01066->SetLineColor(ci);
   Graph_Graph01066->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01066->GetXaxis()->CenterTitle(true);
   Graph_Graph01066->GetXaxis()->SetLabelFont(42);
   Graph_Graph01066->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01066->GetXaxis()->SetTitleFont(42);
   Graph_Graph01066->GetYaxis()->SetTitle("Parameter value [mrad]");
   Graph_Graph01066->GetYaxis()->CenterTitle(true);
   Graph_Graph01066->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01066->GetYaxis()->SetLabelFont(42);
   Graph_Graph01066->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01066->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01066->GetYaxis()->SetTitleFont(42);
   Graph_Graph01066->GetZaxis()->SetLabelFont(42);
   Graph_Graph01066->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01066);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1067[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph1_fy1067[18] = {
   28.74101,
   31.00024,
   30.77826,
   25.35278,
   20.43192,
   18.14731,
   19.70647,
   12.89513,
   17.99029,
   15.03076,
   11.41347,
   11.84142,
   9.793595,
   8.114281,
   9.287467,
   5.995806,
   8.223858,
   2.059161};
   Double_t Graph1_fex1067[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1067[18] = {
   5.615438,
   3.266643,
   2.246645,
   1.842447,
   1.618655,
   1.44595,
   1.342207,
   1.263578,
   1.252659,
   1.210957,
   1.240189,
   1.245021,
   1.302369,
   1.313675,
   1.372259,
   1.485027,
   1.585311,
   1.705897};
   gre = new TGraphErrors(18,Graph1_fx1067,Graph1_fy1067,Graph1_fex1067,Graph1_fey1067);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11067 = new TH1F("Graph_Graph11067","Graph",100,349.5,2899.5);
   Graph_Graph11067->SetMinimum(0.3179374);
   Graph_Graph11067->SetMaximum(37.75677);
   Graph_Graph11067->SetDirectory(0);
   Graph_Graph11067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11067->SetLineColor(ci);
   Graph_Graph11067->GetXaxis()->SetLabelFont(42);
   Graph_Graph11067->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11067->GetXaxis()->SetTitleFont(42);
   Graph_Graph11067->GetYaxis()->SetLabelFont(42);
   Graph_Graph11067->GetYaxis()->SetTitleFont(42);
   Graph_Graph11067->GetZaxis()->SetLabelFont(42);
   Graph_Graph11067->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11067);
   
   gre->Draw("p ");
   
   Double_t Graph2_fx1068[18] = {
   562,
   687,
   812,
   937,
   1062,
   1187,
   1312,
   1437,
   1562,
   1687,
   1812,
   1937,
   2062,
   2187,
   2312,
   2437,
   2562,
   2687};
   Double_t Graph2_fy1068[18] = {
   1.957554,
   -0.4808419,
   -0.2342689,
   0.1044764,
   -0.623374,
   -0.6130854,
   -0.6773747,
   -0.5907151,
   -0.3341579,
   -0.1523068,
   -0.1185101,
   -0.02940907,
   -0.08377358,
   -0.004430852,
   0.00184224,
   -0.008195002,
   0.1329711,
   0.212352};
   Double_t Graph2_fex1068[18] = {
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1068[18] = {
   0.08333991,
   0.04991025,
   0.0344413,
   0.02829554,
   0.02498544,
   0.02259689,
   0.02123622,
   0.02006361,
   0.02009952,
   0.0194306,
   0.02012797,
   0.02028669,
   0.02120037,
   0.02143761,
   0.02256962,
   0.02428388,
   0.02592203,
   0.02776147};
   gre = new TGraphErrors(18,Graph2_fx1068,Graph2_fy1068,Graph2_fex1068,Graph2_fey1068);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21068 = new TH1F("Graph_Graph21068","Graph",100,349.5,2899.5);
   Graph_Graph21068->SetMinimum(-0.9725614);
   Graph_Graph21068->SetMaximum(2.314845);
   Graph_Graph21068->SetDirectory(0);
   Graph_Graph21068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21068->SetLineColor(ci);
   Graph_Graph21068->GetXaxis()->SetLabelFont(42);
   Graph_Graph21068->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21068->GetXaxis()->SetTitleFont(42);
   Graph_Graph21068->GetYaxis()->SetLabelFont(42);
   Graph_Graph21068->GetYaxis()->SetTitleFont(42);
   Graph_Graph21068->GetZaxis()->SetLabelFont(42);
   Graph_Graph21068->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21068);
   
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
