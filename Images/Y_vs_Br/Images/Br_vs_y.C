void Br_vs_y()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr 30 11:54:23 2021) by ROOT version 6.12/04
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
   gre->SetTitle(";#LTB_{r}^{App}#GT [ppm];#LTy_{trk}#GT [mm]");
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
   Graph_Graph1001->GetYaxis()->SetTitle("#LTy_{trk}#GT [mm]");
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
   
   gre->Draw("ap");
   
   Double_t S18_fx1002[5] = {
   50,
   30,
   -10,
   -30,
   -50};
   Double_t S18_fy1002[5] = {
   2.234697,
   1.138332,
   -1.405415,
   -2.630298,
   -3.926892};
   Double_t S18_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t S18_fey1002[5] = {
   0.1554412,
   0.1547073,
   0.1702369,
   0.1746546,
   0.1616413};
   gre = new TGraphErrors(5,S18_fx1002,S18_fy1002,S18_fex1002,S18_fey1002);
   gre->SetName("S18");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S181002 = new TH1F("Graph_S181002","Graph",100,-60,60);
   Graph_S181002->SetMinimum(-4.7364);
   Graph_S181002->SetMaximum(3.038006);
   Graph_S181002->SetDirectory(0);
   Graph_S181002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S181002->SetLineColor(ci);
   Graph_S181002->GetXaxis()->SetLabelFont(42);
   Graph_S181002->GetXaxis()->SetLabelSize(0.035);
   Graph_S181002->GetXaxis()->SetTitleSize(0.035);
   Graph_S181002->GetXaxis()->SetTitleFont(42);
   Graph_S181002->GetYaxis()->SetLabelFont(42);
   Graph_S181002->GetYaxis()->SetLabelSize(0.035);
   Graph_S181002->GetYaxis()->SetTitleSize(0.035);
   Graph_S181002->GetYaxis()->SetTitleOffset(0);
   Graph_S181002->GetYaxis()->SetTitleFont(42);
   Graph_S181002->GetZaxis()->SetLabelFont(42);
   Graph_S181002->GetZaxis()->SetLabelSize(0.035);
   Graph_S181002->GetZaxis()->SetTitleSize(0.035);
   Graph_S181002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S181002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.15,0.79,0.59,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("S18","S18","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
