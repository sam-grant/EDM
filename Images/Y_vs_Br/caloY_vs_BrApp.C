void caloY_vs_BrApp()
{
//=========Macro generated from canvas: c/c
//=========  (Wed May 12 10:49:18 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-76.289,70.60603,75.421,78.27071);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[5] = {
   49.566,
   29.566,
   -10.434,
   -30.434,
   -50.434};
   Double_t Graph0_fy1001[5] = {
   76.97646,
   75.94393,
   73.87522,
   72.90405,
   71.89776};
   Double_t Graph0_fex1001[5] = {
   0.57,
   0.57,
   0.57,
   0.57,
   0.57};
   Double_t Graph0_fey1001[5] = {
   0.01679603,
   0.01376328,
   0.01520311,
   0.01402425,
   0.01427944};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle(";#LTB_{r}^{tot}#GT [ppm];#LTy_{calo}#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","",100,-61.118,60.25);
   Graph_Graph01001->SetMinimum(71.3725);
   Graph_Graph01001->SetMaximum(77.50424);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("#LTB_{r}^{tot}#GT [ppm]");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#LTy_{calo}#GT [mm]");
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
   
   
   TF1 *func1002 = new TF1("func","[0]+[1]*x",-50.434,49.566, TF1::EAddToList::kNo);
   func1002->SetFillColor(19);
   func1002->SetFillStyle(0);
   func1002->SetLineColor(2);
   func1002->SetLineWidth(2);
   func1002->SetChisquare(1.866446);
   func1002->SetNDF(3);
   func1002->GetXaxis()->SetLabelFont(42);
   func1002->GetXaxis()->SetTitleOffset(1);
   func1002->GetXaxis()->SetTitleFont(42);
   func1002->GetYaxis()->SetLabelFont(42);
   func1002->GetYaxis()->SetTitleFont(42);
   func1002->SetParameter(0,74.44313);
   func1002->SetParError(0,0.01459858);
   func1002->SetParLimits(0,0,0);
   func1002->SetParameter(1,0.05080521);
   func1002->SetParError(1,0.0003943785);
   func1002->SetParLimits(1,0,0);
   func1002->SetParent(gre);
   gre->GetListOfFunctions()->Add(func1002);
   gre->Draw("ap");
   
   TF1 *func1003 = new TF1("func","[0]+[1]*x",-50.434,49.566, TF1::EAddToList::kDefault);
   func1003->SetFillColor(19);
   func1003->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   func1003->SetLineColor(ci);
   func1003->SetLineWidth(3);
   func1003->SetChisquare(1.866446);
   func1003->SetNDF(3);
   func1003->GetXaxis()->SetLabelFont(42);
   func1003->GetXaxis()->SetTitleOffset(1);
   func1003->GetXaxis()->SetTitleFont(42);
   func1003->GetYaxis()->SetLabelFont(42);
   func1003->GetYaxis()->SetTitleFont(42);
   func1003->SetParameter(0,74.44313);
   func1003->SetParError(0,0.01459858);
   func1003->SetParLimits(0,0,0);
   func1003->SetParameter(1,0.05080521);
   func1003->SetParError(1,0.0003943785);
   func1003->SetParLimits(1,0,0);
   func1003->Draw("same");
   
   TLegend *leg = new TLegend(0.12,0.65,0.6,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Data","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("func","#splitline{p0 = 74.44
#pm0.01
 [mm]}{p1 = 0.0508
#pm0.0004
 [mm/ppm]}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
