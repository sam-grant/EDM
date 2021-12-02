void Br_vs_y()
{
//=========Macro generated from canvas: c/c
//=========  (Tue May 11 23:15:26 2021) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-75,-6,75,4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_fx1001[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t S12_fy1001[5] = {
   1.929191,
   0.6124482,
   -2.044588,
   -2.964453,
   -4.147683};
   Double_t S12_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S12_fey1001[5] = {
   0.1617117,
   0.1606568,
   0.168073,
   0.1799122,
   0.1658097};
   TGraphErrors *gre = new TGraphErrors(5,S12_fx1001,S12_fy1001,S12_fex1001,S12_fey1001);
   gre->SetName("S12");
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy#GT [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,-60,60);
   Graph_Graph1001->SetMinimum(-5);
   Graph_Graph1001->SetMaximum(3);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("#LTB_{r}^{App}#GT [ppm]");
   Graph_Graph1001->GetXaxis()->SetRange(1,100);
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("#LTy#GT [mm]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *fit121002 = new TF1("fit12","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit121002->SetFillColor(19);
   fit121002->SetFillStyle(0);
   fit121002->SetLineColor(2);
   fit121002->SetLineWidth(2);
   fit121002->SetChisquare(2.708883);
   fit121002->SetNDF(3);
   fit121002->GetXaxis()->SetLabelFont(42);
   fit121002->GetXaxis()->SetLabelSize(0.035);
   fit121002->GetXaxis()->SetTitleSize(0.035);
   fit121002->GetXaxis()->SetTitleFont(42);
   fit121002->GetYaxis()->SetLabelFont(42);
   fit121002->GetYaxis()->SetLabelSize(0.035);
   fit121002->GetYaxis()->SetTitleSize(0.035);
   fit121002->GetYaxis()->SetTitleOffset(0);
   fit121002->GetYaxis()->SetTitleFont(42);
   fit121002->SetParameter(0,-1.2012);
   fit121002->SetParError(0,0.07460844);
   fit121002->SetParLimits(0,0,0);
   fit121002->SetParameter(1,0.06087);
   fit121002->SetParError(1,0.001989116);
   fit121002->SetParLimits(1,0,0);
   fit121002->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit121002);
   gre->Draw("ap");
   
   Double_t S18_fx1003[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t S18_fy1003[5] = {
   2.234697,
   1.138332,
   -1.405415,
   -2.630298,
   -3.926892};
   Double_t S18_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S18_fey1003[5] = {
   0.1554412,
   0.1547073,
   0.1702369,
   0.1746546,
   0.1616413};
   gre = new TGraphErrors(5,S18_fx1003,S18_fy1003,S18_fex1003,S18_fey1003);
   gre->SetName("S18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S181003 = new TH1F("Graph_S181003","Graph",100,-60,60);
   Graph_S181003->SetMinimum(-4.7364);
   Graph_S181003->SetMaximum(3.038006);
   Graph_S181003->SetDirectory(0);
   Graph_S181003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S181003->SetLineColor(ci);
   Graph_S181003->GetXaxis()->SetLabelFont(42);
   Graph_S181003->GetXaxis()->SetLabelSize(0.035);
   Graph_S181003->GetXaxis()->SetTitleSize(0.035);
   Graph_S181003->GetXaxis()->SetTitleFont(42);
   Graph_S181003->GetYaxis()->SetLabelFont(42);
   Graph_S181003->GetYaxis()->SetLabelSize(0.035);
   Graph_S181003->GetYaxis()->SetTitleSize(0.035);
   Graph_S181003->GetYaxis()->SetTitleOffset(0);
   Graph_S181003->GetYaxis()->SetTitleFont(42);
   Graph_S181003->GetZaxis()->SetLabelFont(42);
   Graph_S181003->GetZaxis()->SetLabelSize(0.035);
   Graph_S181003->GetZaxis()->SetTitleSize(0.035);
   Graph_S181003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S181003);
   
   
   TF1 *fit181004 = new TF1("fit18","[0]+[1]*x",-50,50, TF1::EAddToList::kNo);
   fit181004->SetFillColor(19);
   fit181004->SetFillStyle(0);
   fit181004->SetLineColor(2);
   fit181004->SetLineWidth(2);
   fit181004->SetChisquare(0.4897984);
   fit181004->SetNDF(3);
   fit181004->GetXaxis()->SetLabelFont(42);
   fit181004->GetXaxis()->SetLabelSize(0.035);
   fit181004->GetXaxis()->SetTitleSize(0.035);
   fit181004->GetXaxis()->SetTitleFont(42);
   fit181004->GetYaxis()->SetLabelFont(42);
   fit181004->GetYaxis()->SetLabelSize(0.035);
   fit181004->GetYaxis()->SetTitleSize(0.035);
   fit181004->GetYaxis()->SetTitleOffset(0);
   fit181004->GetYaxis()->SetTitleFont(42);
   fit181004->SetParameter(0,-0.7945751);
   fit181004->SetParError(0,0.072796);
   fit181004->SetParLimits(0,0,0);
   fit181004->SetParameter(1,0.06192522);
   fit181004->SetParError(1,0.001925661);
   fit181004->SetParLimits(1,0,0);
   fit181004->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit181004);
   gre->Draw("p ");
   
   TF1 *fit121005 = new TF1("fit12","[0]+[1]*x",-50,50, TF1::EAddToList::kDefault);
   fit121005->SetFillColor(19);
   fit121005->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit121005->SetLineColor(ci);
   fit121005->SetLineWidth(3);
   fit121005->SetChisquare(2.708883);
   fit121005->SetNDF(3);
   fit121005->GetXaxis()->SetLabelFont(42);
   fit121005->GetXaxis()->SetLabelSize(0.035);
   fit121005->GetXaxis()->SetTitleSize(0.035);
   fit121005->GetXaxis()->SetTitleFont(42);
   fit121005->GetYaxis()->SetLabelFont(42);
   fit121005->GetYaxis()->SetLabelSize(0.035);
   fit121005->GetYaxis()->SetTitleSize(0.035);
   fit121005->GetYaxis()->SetTitleOffset(0);
   fit121005->GetYaxis()->SetTitleFont(42);
   fit121005->SetParameter(0,-1.2012);
   fit121005->SetParError(0,0.07460844);
   fit121005->SetParLimits(0,0,0);
   fit121005->SetParameter(1,0.06087);
   fit121005->SetParError(1,0.001989116);
   fit121005->SetParLimits(1,0,0);
   fit121005->Draw("same");
   
   TF1 *fit181006 = new TF1("fit18","[0]+[1]*x",-50,50, TF1::EAddToList::kDefault);
   fit181006->SetFillColor(19);
   fit181006->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   fit181006->SetLineColor(ci);
   fit181006->SetLineWidth(3);
   fit181006->SetChisquare(0.4897984);
   fit181006->SetNDF(3);
   fit181006->GetXaxis()->SetLabelFont(42);
   fit181006->GetXaxis()->SetLabelSize(0.035);
   fit181006->GetXaxis()->SetTitleSize(0.035);
   fit181006->GetXaxis()->SetTitleFont(42);
   fit181006->GetYaxis()->SetLabelFont(42);
   fit181006->GetYaxis()->SetLabelSize(0.035);
   fit181006->GetYaxis()->SetTitleSize(0.035);
   fit181006->GetYaxis()->SetTitleOffset(0);
   fit181006->GetYaxis()->SetTitleFont(42);
   fit181006->SetParameter(0,-0.7945751);
   fit181006->SetParError(0,0.072796);
   fit181006->SetParLimits(0,0,0);
   fit181006->SetParameter(1,0.06192522);
   fit181006->SetParError(1,0.001925661);
   fit181006->SetParLimits(1,0,0);
   fit181006->Draw("same");
   
   TLegend *leg = new TLegend(0.12,0.65,0.6,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12","S12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fit12","#splitline{p0 = -1.2
0#pm0.07
 [mm]}{p1 = 0.061
#pm0.002
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
   entry=leg->AddEntry("S18","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("fit18","#splitline{p0 = -0.79
#pm0.07
 [mm]}{p1 = 0.062
#pm0.002
 [mm/ppm]}","lpf");
   entry->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
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
