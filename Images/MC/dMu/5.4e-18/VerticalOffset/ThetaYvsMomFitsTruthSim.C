void ThetaYvsMomFitsTruthSim()
{
//=========Macro generated from canvas: c/
//=========  (Fri Apr 15 15:29:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(749.9953,-0.7,2988.124,0.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S0_fit_fx1001[7] = {
   1123.017,
   1371.494,
   1620.718,
   1868.039,
   2116.575,
   2363.182,
   2615.103};
   Double_t S0_fit_fy1001[7] = {
   -0.1922985,
   -0.1264115,
   -0.1738417,
   -0.1161239,
   -0.06348759,
   -0.04098489,
   -0.03486812};
   Double_t S0_fit_fex1001[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S0_fit_fey1001[7] = {
   0.02088934,
   0.01905453,
   0.01816287,
   0.01798048,
   0.01865795,
   0.01984006,
   0.02072489};
   TGraphErrors *gre = new TGraphErrors(7,S0_fit_fx1001,S0_fit_fy1001,S0_fit_fex1001,S0_fit_fey1001);
   gre->SetName("S0_fit");
   gre->SetTitle(";Truth vertex momentum [MeV];Truth #LT#theta_{y}#GT [mrad] / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S0_fit1001 = new TH1F("Graph_S0_fit1001","",100,973.8082,2764.311);
   Graph_S0_fit1001->SetMinimum(-0.6);
   Graph_S0_fit1001->SetMaximum(0.2);
   Graph_S0_fit1001->SetDirectory(0);
   Graph_S0_fit1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S0_fit1001->SetLineColor(ci);
   Graph_S0_fit1001->GetXaxis()->SetTitle("Truth vertex momentum [MeV]");
   Graph_S0_fit1001->GetXaxis()->CenterTitle(true);
   Graph_S0_fit1001->GetXaxis()->SetLabelFont(42);
   Graph_S0_fit1001->GetXaxis()->SetTitleSize(0.04);
   Graph_S0_fit1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_S0_fit1001->GetXaxis()->SetTitleFont(42);
   Graph_S0_fit1001->GetYaxis()->SetTitle("Truth #LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S0_fit1001->GetYaxis()->CenterTitle(true);
   Graph_S0_fit1001->GetYaxis()->SetNdivisions(4000510);
   Graph_S0_fit1001->GetYaxis()->SetLabelFont(42);
   Graph_S0_fit1001->GetYaxis()->SetTitleSize(0.04);
   Graph_S0_fit1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_S0_fit1001->GetYaxis()->SetTitleFont(42);
   Graph_S0_fit1001->GetZaxis()->SetLabelFont(42);
   Graph_S0_fit1001->GetZaxis()->SetTitleOffset(1);
   Graph_S0_fit1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S0_fit1001);
   
   
   TF1 *S0_fit1002 = new TF1("S0_fit","[0]+[1]*x",1123.017,2615.103, TF1::EAddToList::kNo);
   S0_fit1002->SetFillColor(19);
   S0_fit1002->SetFillStyle(0);
   S0_fit1002->SetLineWidth(2);
   S0_fit1002->SetChisquare(9.778524);
   S0_fit1002->SetNDF(5);
   S0_fit1002->GetXaxis()->SetLabelFont(42);
   S0_fit1002->GetXaxis()->SetTitleOffset(1);
   S0_fit1002->GetXaxis()->SetTitleFont(42);
   S0_fit1002->GetYaxis()->SetLabelFont(42);
   S0_fit1002->GetYaxis()->SetTitleFont(42);
   S0_fit1002->SetParameter(0,-0.3110075);
   S0_fit1002->SetParError(0,0.0295209);
   S0_fit1002->SetParLimits(0,0,0);
   S0_fit1002->SetParameter(1,0.0001090179);
   S0_fit1002->SetParError(1,1.536559e-05);
   S0_fit1002->SetParLimits(1,0,0);
   S0_fit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(S0_fit1002);
   gre->Draw("ap");
   
   Double_t S12_fit_fx1003[7] = {
   1123.157,
   1371.168,
   1620.209,
   1866.98,
   2114.946,
   2362.647,
   2614.196};
   Double_t S12_fit_fy1003[7] = {
   -0.4501362,
   -0.3856428,
   -0.3689125,
   -0.2333394,
   -0.1847871,
   -0.2104054,
   -0.1420595};
   Double_t S12_fit_fex1003[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S12_fit_fey1003[7] = {
   0.01430528,
   0.01305857,
   0.01246068,
   0.01258899,
   0.01347827,
   0.01490862,
   0.01552087};
   gre = new TGraphErrors(7,S12_fit_fx1003,S12_fit_fy1003,S12_fit_fex1003,S12_fit_fey1003);
   gre->SetName("S12_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_fit1003 = new TH1F("Graph_S12_fit1003","",100,974.0529,2763.299);
   Graph_S12_fit1003->SetMinimum(-0.4982318);
   Graph_S12_fit1003->SetMaximum(-0.09274829);
   Graph_S12_fit1003->SetDirectory(0);
   Graph_S12_fit1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S12_fit1003->SetLineColor(ci);
   Graph_S12_fit1003->GetXaxis()->SetLabelFont(42);
   Graph_S12_fit1003->GetXaxis()->SetTitleOffset(1);
   Graph_S12_fit1003->GetXaxis()->SetTitleFont(42);
   Graph_S12_fit1003->GetYaxis()->SetLabelFont(42);
   Graph_S12_fit1003->GetYaxis()->SetTitleFont(42);
   Graph_S12_fit1003->GetZaxis()->SetLabelFont(42);
   Graph_S12_fit1003->GetZaxis()->SetTitleOffset(1);
   Graph_S12_fit1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_fit1003);
   
   
   TF1 *S12_fit1004 = new TF1("S12_fit","[0]+[1]*x",1123.157,2614.196, TF1::EAddToList::kNo);
   S12_fit1004->SetFillColor(19);
   S12_fit1004->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   S12_fit1004->SetLineColor(ci);
   S12_fit1004->SetLineWidth(2);
   S12_fit1004->SetChisquare(40.48344);
   S12_fit1004->SetNDF(5);
   S12_fit1004->GetXaxis()->SetLabelFont(42);
   S12_fit1004->GetXaxis()->SetTitleOffset(1);
   S12_fit1004->GetXaxis()->SetTitleFont(42);
   S12_fit1004->GetYaxis()->SetLabelFont(42);
   S12_fit1004->GetYaxis()->SetTitleFont(42);
   S12_fit1004->SetParameter(0,-0.680626);
   S12_fit1004->SetParError(0,0.02079101);
   S12_fit1004->SetParLimits(0,0,0);
   S12_fit1004->SetParameter(1,0.0002144197);
   S12_fit1004->SetParError(1,1.101345e-05);
   S12_fit1004->SetParLimits(1,0,0);
   S12_fit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(S12_fit1004);
   gre->Draw("p ");
   
   Double_t S18_fit_fx1005[7] = {
   1123.012,
   1370.957,
   1619.772,
   1866.605,
   2115.051,
   2363.383,
   2612.035};
   Double_t S18_fit_fy1005[7] = {
   -0.3661099,
   -0.2711162,
   -0.2546875,
   -0.2194772,
   -0.1238138,
   -0.1256053,
   -0.09303673};
   Double_t S18_fit_fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t S18_fit_fey1005[7] = {
   0.01420984,
   0.01309126,
   0.01256099,
   0.01280527,
   0.01375506,
   0.01526425,
   0.01567217};
   gre = new TGraphErrors(7,S18_fit_fx1005,S18_fit_fy1005,S18_fit_fex1005,S18_fit_fey1005);
   gre->SetName("S18_fit");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S18_fit1005 = new TH1F("Graph_S18_fit1005","",100,974.1095,2760.937);
   Graph_S18_fit1005->SetMinimum(-0.4106153);
   Graph_S18_fit1005->SetMaximum(-0.04706904);
   Graph_S18_fit1005->SetDirectory(0);
   Graph_S18_fit1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_fit1005->SetLineColor(ci);
   Graph_S18_fit1005->GetXaxis()->SetLabelFont(42);
   Graph_S18_fit1005->GetXaxis()->SetTitleOffset(1);
   Graph_S18_fit1005->GetXaxis()->SetTitleFont(42);
   Graph_S18_fit1005->GetYaxis()->SetLabelFont(42);
   Graph_S18_fit1005->GetYaxis()->SetTitleFont(42);
   Graph_S18_fit1005->GetZaxis()->SetLabelFont(42);
   Graph_S18_fit1005->GetZaxis()->SetTitleOffset(1);
   Graph_S18_fit1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_fit1005);
   
   
   TF1 *S18_fit1006 = new TF1("S18_fit","[0]+[1]*x",1123.012,2612.035, TF1::EAddToList::kNo);
   S18_fit1006->SetFillColor(19);
   S18_fit1006->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   S18_fit1006->SetLineColor(ci);
   S18_fit1006->SetLineWidth(2);
   S18_fit1006->SetChisquare(17.61025);
   S18_fit1006->SetNDF(5);
   S18_fit1006->GetXaxis()->SetLabelFont(42);
   S18_fit1006->GetXaxis()->SetTitleOffset(1);
   S18_fit1006->GetXaxis()->SetTitleFont(42);
   S18_fit1006->GetYaxis()->SetLabelFont(42);
   S18_fit1006->GetYaxis()->SetTitleFont(42);
   S18_fit1006->SetParameter(0,-0.5422585);
   S18_fit1006->SetParError(0,0.02086187);
   S18_fit1006->SetParLimits(0,0,0);
   S18_fit1006->SetParameter(1,0.0001797653);
   S18_fit1006->SetParError(1,1.108985e-05);
   S18_fit1006->SetParLimits(1,0,0);
   S18_fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(S18_fit1006);
   gre->Draw("p ");
   
   TF1 *S0_fit1007 = new TF1("S0_fit","[0]+[1]*x",1123.017,2615.103, TF1::EAddToList::kNo);
   S0_fit1007->SetFillColor(19);
   S0_fit1007->SetFillStyle(0);
   S0_fit1007->SetLineWidth(2);
   S0_fit1007->SetChisquare(9.778524);
   S0_fit1007->SetNDF(5);
   S0_fit1007->GetXaxis()->SetLabelFont(42);
   S0_fit1007->GetXaxis()->SetTitleOffset(1);
   S0_fit1007->GetXaxis()->SetTitleFont(42);
   S0_fit1007->GetYaxis()->SetLabelFont(42);
   S0_fit1007->GetYaxis()->SetTitleFont(42);
   S0_fit1007->SetParameter(0,-0.3110075);
   S0_fit1007->SetParError(0,0.0295209);
   S0_fit1007->SetParLimits(0,0,0);
   S0_fit1007->SetParameter(1,0.0001090179);
   S0_fit1007->SetParError(1,1.536559e-05);
   S0_fit1007->SetParLimits(1,0,0);
   S0_fit1007->Draw("SAME");
   
   TF1 *S12_fit1008 = new TF1("S12_fit","[0]+[1]*x",1123.157,2614.196, TF1::EAddToList::kNo);
   S12_fit1008->SetFillColor(19);
   S12_fit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   S12_fit1008->SetLineColor(ci);
   S12_fit1008->SetLineWidth(2);
   S12_fit1008->SetChisquare(40.48344);
   S12_fit1008->SetNDF(5);
   S12_fit1008->GetXaxis()->SetLabelFont(42);
   S12_fit1008->GetXaxis()->SetTitleOffset(1);
   S12_fit1008->GetXaxis()->SetTitleFont(42);
   S12_fit1008->GetYaxis()->SetLabelFont(42);
   S12_fit1008->GetYaxis()->SetTitleFont(42);
   S12_fit1008->SetParameter(0,-0.680626);
   S12_fit1008->SetParError(0,0.02079101);
   S12_fit1008->SetParLimits(0,0,0);
   S12_fit1008->SetParameter(1,0.0002144197);
   S12_fit1008->SetParError(1,1.101345e-05);
   S12_fit1008->SetParLimits(1,0,0);
   S12_fit1008->Draw("SAME");
   
   TF1 *S18_fit1009 = new TF1("S18_fit","[0]+[1]*x",1123.012,2612.035, TF1::EAddToList::kNo);
   S18_fit1009->SetFillColor(19);
   S18_fit1009->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   S18_fit1009->SetLineColor(ci);
   S18_fit1009->SetLineWidth(2);
   S18_fit1009->SetChisquare(17.61025);
   S18_fit1009->SetNDF(5);
   S18_fit1009->GetXaxis()->SetLabelFont(42);
   S18_fit1009->GetXaxis()->SetTitleOffset(1);
   S18_fit1009->GetXaxis()->SetTitleFont(42);
   S18_fit1009->GetYaxis()->SetLabelFont(42);
   S18_fit1009->GetYaxis()->SetTitleFont(42);
   S18_fit1009->SetParameter(0,-0.5422585);
   S18_fit1009->SetParError(0,0.02086187);
   S18_fit1009->SetParLimits(0,0,0);
   S18_fit1009->SetParameter(1,0.0001797653);
   S18_fit1009->SetParError(1,1.108985e-05);
   S18_fit1009->SetParLimits(1,0,0);
   S18_fit1009->Draw("SAME");
   
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
