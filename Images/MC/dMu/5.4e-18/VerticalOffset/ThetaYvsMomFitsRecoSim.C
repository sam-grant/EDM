void ThetaYvsMomFitsRecoSim()
{
//=========Macro generated from canvas: c/
//=========  (Fri Apr 15 15:29:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(749.9813,-0.7,2988.367,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_fit_fx1007[7] = {
   1123.046,
   1371.407,
   1620.72,
   1868.002,
   2116.574,
   2363.173,
   2615.303};
   Double_t S0_fit_fy1007[7] = {
   -0.1684808,
   -0.1203835,
   -0.1598395,
   -0.09643004,
   -0.04166506,
   -0.01797078,
   -0.004246406};
   Double_t S0_fit_fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_fit_fey1007[7] = {
   0.0209571,
   0.01913568,
   0.01823076,
   0.018048,
   0.01875392,
   0.0199469,
   0.02080325};
   TGraphErrors *gre = new TGraphErrors(7,S0_fit_fx1007,S0_fit_fy1007,S0_fit_fex1007,S0_fit_fey1007);
   gre->SetName("S0_fit");
   gre->SetTitle(";Reco vertex momentum [MeV];Reco #LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_fit1007 = new TH1F("Graph_S0_fit1007","",100,973.8199,2764.529);
   Graph_S0_fit1007->SetMinimum(-0.6);
   Graph_S0_fit1007->SetMaximum(0.2);
   Graph_S0_fit1007->SetDirectory(0);
   Graph_S0_fit1007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_fit1007->SetLineColor(ci);
   Graph_S0_fit1007->GetXaxis()->SetTitle("Reco vertex momentum [MeV]");
   Graph_S0_fit1007->GetXaxis()->CenterTitle(true);
   Graph_S0_fit1007->GetXaxis()->SetLabelFont(42);
   Graph_S0_fit1007->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_fit1007->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_fit1007->GetXaxis()->SetTitleFont(42);
   Graph_S0_fit1007->GetYaxis()->SetTitle("Reco #LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S0_fit1007->GetYaxis()->CenterTitle(true);
   Graph_S0_fit1007->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_fit1007->GetYaxis()->SetLabelFont(42);
   Graph_S0_fit1007->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_fit1007->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_fit1007->GetYaxis()->SetTitleFont(42);
   Graph_S0_fit1007->GetZaxis()->SetLabelFont(42);
   Graph_S0_fit1007->GetZaxis()->SetTitleOffset(1);
   Graph_S0_fit1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_fit1007);
   
   
   TF1 *S0_fit1008 = new TF1("S0_fit","[0]+[1]*x",1123.046,2615.303, TF1::EAddToList::kNo);
   S0_fit1008->SetFillColor(19);
   S0_fit1008->SetFillStyle(0);
   S0_fit1008->SetLineWidth(2);
   S0_fit1008->SetChisquare(8.900007);
   S0_fit1008->SetNDF(5);
   S0_fit1008->GetXaxis()->SetLabelFont(42);
   S0_fit1008->GetXaxis()->SetTitleOffset(1);
   S0_fit1008->GetXaxis()->SetTitleFont(42);
   S0_fit1008->GetYaxis()->SetLabelFont(42);
   S0_fit1008->GetYaxis()->SetTitleFont(42);
   S0_fit1008->SetParameter(0,-0.3094115);
   S0_fit1008->SetParError(0,0.02963145);
   S0_fit1008->SetParLimits(0,0,0);
   S0_fit1008->SetParameter(1,0.000118574);
   S0_fit1008->SetParError(1,1.542553e-05);
   S0_fit1008->SetParLimits(1,0,0);
   S0_fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(S0_fit1008);
   gre->Draw("ap");
   
   Double_t S12_fit_fx1009[7] = {
   1123.172,
   1371.155,
   1620.23,
   1866.957,
   2115.041,
   2362.635,
   2614.361};
   Double_t S12_fit_fy1009[7] = {
   -0.4490933,
   -0.3716474,
   -0.3596138,
   -0.2113337,
   -0.1620439,
   -0.1828867,
   -0.1170736};
   Double_t S12_fit_fex1009[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_fit_fey1009[7] = {
   0.01435144,
   0.01311159,
   0.01250208,
   0.01263477,
   0.01355014,
   0.01498643,
   0.01560608};
   gre = new TGraphErrors(7,S12_fit_fx1009,S12_fit_fy1009,S12_fit_fex1009,S12_fit_fey1009);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_fit1009 = new TH1F("Graph_S12_fit1009","",100,974.0533,2763.479);
   Graph_S12_fit1009->SetMinimum(-0.4996425);
   Graph_S12_fit1009->SetMaximum(-0.06526985);
   Graph_S12_fit1009->SetDirectory(0);
   Graph_S12_fit1009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1009->SetLineColor(ci);
   Graph_S12_fit1009->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1009->GetXaxis()->SetTitleOffset(1);
   Graph_S12_fit1009->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1009->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1009->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1009->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1009->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1009);
   
   
   TF1 *S12_fit1010 = new TF1("S12_fit","[0]+[1]*x",1123.172,2614.361, TF1::EAddToList::kNo);
   S12_fit1010->SetFillColor(19);
   S12_fit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   S12_fit1010->SetLineColor(ci);
   S12_fit1010->SetLineWidth(2);
   S12_fit1010->SetChisquare(46.52723);
   S12_fit1010->SetNDF(5);
   S12_fit1010->GetXaxis()->SetLabelFont(42);
   S12_fit1010->GetXaxis()->SetTitleOffset(1);
   S12_fit1010->GetXaxis()->SetTitleFont(42);
   S12_fit1010->GetYaxis()->SetLabelFont(42);
   S12_fit1010->GetYaxis()->SetTitleFont(42);
   S12_fit1010->SetParameter(0,-0.6936867);
   S12_fit1010->SetParError(0,0.02087528);
   S12_fit1010->SetParLimits(0,0,0);
   S12_fit1010->SetParameter(1,0.0002308283);
   S12_fit1010->SetParError(1,1.1062e-05);
   S12_fit1010->SetParLimits(1,0,0);
   S12_fit1010->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit1010);
   gre->Draw("p ");
   
   Double_t S18_fit_fx1011[7] = {
   1123.038,
   1370.896,
   1619.753,
   1866.511,
   2115.078,
   2363.235,
   2612.145};
   Double_t S18_fit_fy1011[7] = {
   -0.3586216,
   -0.2610722,
   -0.2570317,
   -0.2148941,
   -0.1312508,
   -0.1436212,
   -0.0880649};
   Double_t S18_fit_fex1011[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_fit_fey1011[7] = {
   0.01425666,
   0.01314243,
   0.01260555,
   0.01286202,
   0.0138174,
   0.01533864,
   0.0157475};
   gre = new TGraphErrors(7,S18_fit_fx1011,S18_fit_fy1011,S18_fit_fex1011,S18_fit_fey1011);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_fit1011 = new TH1F("Graph_S18_fit1011","",100,974.1274,2761.055);
   Graph_S18_fit1011->SetMinimum(-0.4029343);
   Graph_S18_fit1011->SetMaximum(-0.04226131);
   Graph_S18_fit1011->SetDirectory(0);
   Graph_S18_fit1011->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1011->SetLineColor(ci);
   Graph_S18_fit1011->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1011->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1011->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1011->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1011->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1011->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1011->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1011);
   
   
   TF1 *S18_fit1012 = new TF1("S18_fit","[0]+[1]*x",1123.038,2612.145, TF1::EAddToList::kNo);
   S18_fit1012->SetFillColor(19);
   S18_fit1012->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   S18_fit1012->SetLineColor(ci);
   S18_fit1012->SetLineWidth(2);
   S18_fit1012->SetChisquare(17.19703);
   S18_fit1012->SetNDF(5);
   S18_fit1012->GetXaxis()->SetLabelFont(42);
   S18_fit1012->GetXaxis()->SetTitleOffset(1);
   S18_fit1012->GetXaxis()->SetTitleFont(42);
   S18_fit1012->GetYaxis()->SetLabelFont(42);
   S18_fit1012->GetYaxis()->SetTitleFont(42);
   S18_fit1012->SetParameter(0,-0.5228094);
   S18_fit1012->SetParError(0,0.02094331);
   S18_fit1012->SetParLimits(0,0,0);
   S18_fit1012->SetParameter(1,0.0001692734);
   S18_fit1012->SetParError(1,1.113603e-05);
   S18_fit1012->SetParLimits(1,0,0);
   S18_fit1012->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit1012);
   gre->Draw("p ");
   
   TF1 *S0_fit1013 = new TF1("S0_fit","[0]+[1]*x",1123.046,2615.303, TF1::EAddToList::kNo);
   S0_fit1013->SetFillColor(19);
   S0_fit1013->SetFillStyle(0);
   S0_fit1013->SetLineWidth(2);
   S0_fit1013->SetChisquare(8.900007);
   S0_fit1013->SetNDF(5);
   S0_fit1013->GetXaxis()->SetLabelFont(42);
   S0_fit1013->GetXaxis()->SetTitleOffset(1);
   S0_fit1013->GetXaxis()->SetTitleFont(42);
   S0_fit1013->GetYaxis()->SetLabelFont(42);
   S0_fit1013->GetYaxis()->SetTitleFont(42);
   S0_fit1013->SetParameter(0,-0.3094115);
   S0_fit1013->SetParError(0,0.02963145);
   S0_fit1013->SetParLimits(0,0,0);
   S0_fit1013->SetParameter(1,0.000118574);
   S0_fit1013->SetParError(1,1.542553e-05);
   S0_fit1013->SetParLimits(1,0,0);
   S0_fit1013->Draw("SAME");
   
   TF1 *S12_fit1014 = new TF1("S12_fit","[0]+[1]*x",1123.172,2614.361, TF1::EAddToList::kNo);
   S12_fit1014->SetFillColor(19);
   S12_fit1014->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   S12_fit1014->SetLineColor(ci);
   S12_fit1014->SetLineWidth(2);
   S12_fit1014->SetChisquare(46.52723);
   S12_fit1014->SetNDF(5);
   S12_fit1014->GetXaxis()->SetLabelFont(42);
   S12_fit1014->GetXaxis()->SetTitleOffset(1);
   S12_fit1014->GetXaxis()->SetTitleFont(42);
   S12_fit1014->GetYaxis()->SetLabelFont(42);
   S12_fit1014->GetYaxis()->SetTitleFont(42);
   S12_fit1014->SetParameter(0,-0.6936867);
   S12_fit1014->SetParError(0,0.02087528);
   S12_fit1014->SetParLimits(0,0,0);
   S12_fit1014->SetParameter(1,0.0002308283);
   S12_fit1014->SetParError(1,1.1062e-05);
   S12_fit1014->SetParLimits(1,0,0);
   S12_fit1014->Draw("SAME");
   
   TF1 *S18_fit1015 = new TF1("S18_fit","[0]+[1]*x",1123.038,2612.145, TF1::EAddToList::kNo);
   S18_fit1015->SetFillColor(19);
   S18_fit1015->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   S18_fit1015->SetLineColor(ci);
   S18_fit1015->SetLineWidth(2);
   S18_fit1015->SetChisquare(17.19703);
   S18_fit1015->SetNDF(5);
   S18_fit1015->GetXaxis()->SetLabelFont(42);
   S18_fit1015->GetXaxis()->SetTitleOffset(1);
   S18_fit1015->GetXaxis()->SetTitleFont(42);
   S18_fit1015->GetYaxis()->SetLabelFont(42);
   S18_fit1015->GetYaxis()->SetTitleFont(42);
   S18_fit1015->SetParameter(0,-0.5228094);
   S18_fit1015->SetParError(0,0.02094331);
   S18_fit1015->SetParLimits(0,0,0);
   S18_fit1015->SetParameter(1,0.0001692734);
   S18_fit1015->SetParError(1,1.113603e-05);
   S18_fit1015->SetParLimits(1,0,0);
   S18_fit1015->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S0_fit","S0","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S12_fit","S12","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_fit","S18","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
