void verticalOffsetOffsetSimFit_S18()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:10:37 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(750.3777,-0.44375,2985.821,-0.006249997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[7] = {
   1122.952,
   1370.903,
   1620.012,
   1866.685,
   2114.399,
   2363.275,
   2613.247};
   Double_t _fy1005[7] = {
   -0.3459395,
   -0.2746015,
   -0.2412415,
   -0.2064299,
   -0.1294242,
   -0.1816989,
   -0.100172};
   Double_t _fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[7] = {
   0.02176349,
   0.02011971,
   0.01929037,
   0.01958669,
   0.02109419,
   0.02348291,
   0.02403096};
   TGraphErrors *gre = new TGraphErrors(7,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","S18",100,973.9221,2762.277);
   Graph_Graph1005->SetMinimum(-0.4);
   Graph_Graph1005->SetMaximum(-0.05);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",1123.093,2614.675, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(7.51757);
   fit1006->SetNDF(4);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,-0.4517997);
   fit1006->SetParError(0,0.04144899);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.0001324632);
   fit1006->SetParError(1,2.100683e-05);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("ap");
   
   Double_t _fx1007[7] = {
   1122.959,
   1370.855,
   1619.967,
   1866.721,
   2114.459,
   2363.098,
   2613.327};
   Double_t _fy1007[7] = {
   -0.3364735,
   -0.2569196,
   -0.2357782,
   -0.1990861,
   -0.1246946,
   -0.1910577,
   -0.1201097};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.02195488,
   0.02030862,
   0.01951833,
   0.01986683,
   0.02148255,
   0.02396531,
   0.02453844};
   gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,973.9224,2762.364);
   Graph_Graph1007->SetMinimum(-0.3847141);
   Graph_Graph1007->SetMaximum(-0.06928555);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1007->SetLineColor(ci);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   
   TF1 *fit1008 = new TF1("fit","[0]+[1]*x",1123.093,2614.675, TF1::EAddToList::kNo);
   fit1008->SetFillColor(19);
   fit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1008->SetLineColor(ci);
   fit1008->SetLineWidth(2);
   fit1008->SetChisquare(8.824474);
   fit1008->SetNDF(4);
   fit1008->GetXaxis()->SetLabelFont(42);
   fit1008->GetXaxis()->SetTitleOffset(1);
   fit1008->GetXaxis()->SetTitleFont(42);
   fit1008->GetYaxis()->SetLabelFont(42);
   fit1008->GetYaxis()->SetTitleFont(42);
   fit1008->SetParameter(0,-0.3989976);
   fit1008->SetParError(0,0.04203144);
   fit1008->SetParLimits(0,0,0);
   fit1008->SetParameter(1,0.0001065038);
   fit1008->SetParError(1,2.133879e-05);
   fit1008->SetParLimits(1,0,0);
   fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1008);
   gre->Draw("p ");
   
   TF1 *fit1009 = new TF1("fit","[0]+[1]*x",1123.093,2614.675, TF1::EAddToList::kNo);
   fit1009->SetFillColor(19);
   fit1009->SetFillStyle(0);
   fit1009->SetLineWidth(2);
   fit1009->SetChisquare(7.51757);
   fit1009->SetNDF(4);
   fit1009->GetXaxis()->SetLabelFont(42);
   fit1009->GetXaxis()->SetTitleOffset(1);
   fit1009->GetXaxis()->SetTitleFont(42);
   fit1009->GetYaxis()->SetLabelFont(42);
   fit1009->GetYaxis()->SetTitleFont(42);
   fit1009->SetParameter(0,-0.4517997);
   fit1009->SetParError(0,0.04144899);
   fit1009->SetParLimits(0,0,0);
   fit1009->SetParameter(1,0.0001324632);
   fit1009->SetParError(1,2.100683e-05);
   fit1009->SetParLimits(1,0,0);
   fit1009->Draw("SAME");
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",1123.093,2614.675, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1010->SetLineColor(ci);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(8.824474);
   fit1010->SetNDF(4);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,-0.3989976);
   fit1010->SetParError(0,0.04203144);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.0001065038);
   fit1010->SetParError(1,2.133879e-05);
   fit1010->SetParLimits(1,0,0);
   fit1010->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","0 mm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","#minus1 mm","lpf");
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
