void InverseQuadFits()
{
//=========Macro generated from canvas: c/c
//=========  (Mon May 24 19:15:13 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-77.14286,70.125,94.28572,78.875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph0_fy1001[6] = {
   77.25431,
   76.13916,
   74.97153,
   73.85256,
   72.73378,
   71.58552};
   Double_t Graph0_fex1001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[6] = {
   0.01619135,
   0.02068126,
   0.01197841,
   0.0155008,
   0.01865954,
   0.01841166};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{App}#GT;#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,-60,60);
   Graph_Graph01001->SetMinimum(71);
   Graph_Graph01001->SetMaximum(78);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *fit1002 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1002->SetFillColor(19);
   fit1002->SetFillStyle(0);
   fit1002->SetLineColor(2);
   fit1002->SetLineWidth(2);
   fit1002->SetChisquare(2.976334);
   fit1002->SetNDF(4);
   fit1002->GetXaxis()->SetLabelFont(42);
   fit1002->GetXaxis()->SetTitleOffset(1);
   fit1002->GetXaxis()->SetTitleFont(42);
   fit1002->GetYaxis()->SetLabelFont(42);
   fit1002->GetYaxis()->SetTitleFont(42);
   fit1002->SetParameter(0,74.41901);
   fit1002->SetParError(0,0.006597912);
   fit1002->SetParLimits(0,0,0);
   fit1002->SetParameter(1,0.05664662);
   fit1002->SetParError(1,0.00021044);
   fit1002->SetParLimits(1,0,0);
   fit1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1002);
   gre->Draw("ap");
   
   Double_t Graph1_fx1003[5] = {
   50,
   30,
   10,
   -10,
   -30};
   Double_t Graph1_fy1003[5] = {
   77.66587,
   76.30882,
   75.0715,
   73.7531,
   72.4789};
   Double_t Graph1_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1003[5] = {
   0.02030086,
   0.01453961,
   0.01771062,
   0.01452874,
   0.01847127};
   gre = new TGraphErrors(5,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11003 = new TH1F("Graph_Graph11003","Graph",100,-38,58);
   Graph_Graph11003->SetMinimum(71.93785);
   Graph_Graph11003->SetMaximum(78.20875);
   Graph_Graph11003->SetDirectory(0);
   Graph_Graph11003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11003->SetLineColor(ci);
   Graph_Graph11003->GetXaxis()->SetLabelFont(42);
   Graph_Graph11003->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetXaxis()->SetTitleFont(42);
   Graph_Graph11003->GetYaxis()->SetLabelFont(42);
   Graph_Graph11003->GetYaxis()->SetTitleFont(42);
   Graph_Graph11003->GetZaxis()->SetLabelFont(42);
   Graph_Graph11003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11003);
   
   
   TF1 *fit1004 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1004->SetFillColor(19);
   fit1004->SetFillStyle(0);
   fit1004->SetLineWidth(2);
   fit1004->SetChisquare(9.651593);
   fit1004->SetNDF(3);
   fit1004->GetXaxis()->SetLabelFont(42);
   fit1004->GetXaxis()->SetTitleOffset(1);
   fit1004->GetXaxis()->SetTitleFont(42);
   fit1004->GetYaxis()->SetLabelFont(42);
   fit1004->GetYaxis()->SetTitleFont(42);
   fit1004->SetParameter(0,74.40498);
   fit1004->SetParError(0,0.007867342);
   fit1004->SetParLimits(0,0,0);
   fit1004->SetParameter(1,0.0645117);
   fit1004->SetParError(1,0.0002847164);
   fit1004->SetParLimits(1,0,0);
   fit1004->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1004);
   gre->Draw("p ");
   
   TF1 *fit1005 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1005->SetFillColor(19);
   fit1005->SetFillStyle(0);
   fit1005->SetLineWidth(2);
   fit1005->SetChisquare(9.651593);
   fit1005->SetNDF(3);
   fit1005->GetXaxis()->SetLabelFont(42);
   fit1005->GetXaxis()->SetTitleOffset(1);
   fit1005->GetXaxis()->SetTitleFont(42);
   fit1005->GetYaxis()->SetLabelFont(42);
   fit1005->GetYaxis()->SetTitleFont(42);
   fit1005->SetParameter(0,74.40498);
   fit1005->SetParError(0,0.007867342);
   fit1005->SetParLimits(0,0,0);
   fit1005->SetParameter(1,0.0645117);
   fit1005->SetParError(1,0.0002847164);
   fit1005->SetParLimits(1,0,0);
   fit1005->Draw("same");
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineColor(2);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(2.976334);
   fit1006->SetNDF(4);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,74.41901);
   fit1006->SetParError(0,0.006597912);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.05664662);
   fit1006->SetParError(1,0.00021044);
   fit1006->SetParLimits(1,0,0);
   fit1006->Draw("same");
   
   Double_t Graph2_fx1005[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t Graph2_fy1005[5] = {
   76.97646,
   75.94393,
   73.87522,
   72.90405,
   71.89776};
   Double_t Graph2_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1005[5] = {
   0.01679603,
   0.01376328,
   0.01520311,
   0.01402425,
   0.01427944};
   gre = new TGraphErrors(5,Graph2_fx1005,Graph2_fy1005,Graph2_fex1005,Graph2_fey1005);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(3);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph21005 = new TH1F("Graph_Graph21005","Graph",100,-60,60);
   Graph_Graph21005->SetMinimum(71.3725);
   Graph_Graph21005->SetMaximum(77.50424);
   Graph_Graph21005->SetDirectory(0);
   Graph_Graph21005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21005->SetLineColor(ci);
   Graph_Graph21005->GetXaxis()->SetLabelFont(42);
   Graph_Graph21005->GetXaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetXaxis()->SetTitleFont(42);
   Graph_Graph21005->GetYaxis()->SetLabelFont(42);
   Graph_Graph21005->GetYaxis()->SetTitleFont(42);
   Graph_Graph21005->GetZaxis()->SetLabelFont(42);
   Graph_Graph21005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph21005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph21005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);
   fit1006->SetLineColor(3);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(8.628963);
   fit1006->SetNDF(3);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,74.42102);
   fit1006->SetParError(0,0.006625675);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.05076836);
   fit1006->SetParError(1,0.0001813621);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("p ");
   
   TF1 *fit1007 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1007->SetFillColor(19);
   fit1007->SetFillStyle(0);
   fit1007->SetLineColor(3);
   fit1007->SetLineWidth(2);
   fit1007->SetChisquare(8.628963);
   fit1007->SetNDF(3);
   fit1007->GetXaxis()->SetLabelFont(42);
   fit1007->GetXaxis()->SetTitleOffset(1);
   fit1007->GetXaxis()->SetTitleFont(42);
   fit1007->GetYaxis()->SetLabelFont(42);
   fit1007->GetYaxis()->SetTitleFont(42);
   fit1007->SetParameter(0,74.42102);
   fit1007->SetParError(0,0.006625675);
   fit1007->SetParLimits(0,0,0);
   fit1007->SetParameter(1,0.05076836);
   fit1007->SetParError(1,0.0001813621);
   fit1007->SetParLimits(1,0,0);
   fit1007->Draw("same");
   
   Double_t Graph3_fx1007[6] = {
   50,
   30,
   10,
   -10,
   -30,
   -50};
   Double_t Graph3_fy1007[6] = {
   76.80487,
   75.84816,
   74.88405,
   73.94443,
   72.99069,
   72.06276};
   Double_t Graph3_fex1007[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1007[6] = {
   0.01638699,
   0.01669002,
   0.01550752,
   0.01722104,
   0.01133484,
   0.01523482};
   gre = new TGraphErrors(6,Graph3_fx1007,Graph3_fy1007,Graph3_fex1007,Graph3_fey1007);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph31007 = new TH1F("Graph_Graph31007","Graph",100,-60,60);
   Graph_Graph31007->SetMinimum(71.57015);
   Graph_Graph31007->SetMaximum(77.29863);
   Graph_Graph31007->SetDirectory(0);
   Graph_Graph31007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph31007->SetLineColor(ci);
   Graph_Graph31007->GetXaxis()->SetLabelFont(42);
   Graph_Graph31007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetXaxis()->SetTitleFont(42);
   Graph_Graph31007->GetYaxis()->SetLabelFont(42);
   Graph_Graph31007->GetYaxis()->SetTitleFont(42);
   Graph_Graph31007->GetZaxis()->SetLabelFont(42);
   Graph_Graph31007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph31007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph31007);
   
   
   TF1 *fit1008 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1008->SetFillColor(19);
   fit1008->SetFillStyle(0);
   fit1008->SetLineColor(4);
   fit1008->SetLineWidth(2);
   fit1008->SetChisquare(2.30741);
   fit1008->SetNDF(4);
   fit1008->GetXaxis()->SetLabelFont(42);
   fit1008->GetXaxis()->SetTitleOffset(1);
   fit1008->GetXaxis()->SetTitleFont(42);
   fit1008->GetYaxis()->SetLabelFont(42);
   fit1008->GetYaxis()->SetTitleFont(42);
   fit1008->SetParameter(0,74.42147);
   fit1008->SetParError(0,0.006173438);
   fit1008->SetParLimits(0,0,0);
   fit1008->SetParameter(1,0.04747224);
   fit1008->SetParError(1,0.00018177);
   fit1008->SetParLimits(1,0,0);
   fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1008);
   gre->Draw("p ");
   
   TF1 *fit1009 = new TF1("fit","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit1009->SetFillColor(19);
   fit1009->SetFillStyle(0);
   fit1009->SetLineColor(4);
   fit1009->SetLineWidth(2);
   fit1009->SetChisquare(2.30741);
   fit1009->SetNDF(4);
   fit1009->GetXaxis()->SetLabelFont(42);
   fit1009->GetXaxis()->SetTitleOffset(1);
   fit1009->GetXaxis()->SetTitleFont(42);
   fit1009->GetYaxis()->SetLabelFont(42);
   fit1009->GetYaxis()->SetTitleFont(42);
   fit1009->SetParameter(0,74.42147);
   fit1009->SetParError(0,0.006173438);
   fit1009->SetParLimits(0,0,0);
   fit1009->SetParameter(1,0.04747224);
   fit1009->SetParError(1,0.00018177);
   fit1009->SetParLimits(1,0,0);
   fit1009->Draw("same");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","QHV [kV]","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","   14","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","   16","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","   18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3"," 19.5","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
