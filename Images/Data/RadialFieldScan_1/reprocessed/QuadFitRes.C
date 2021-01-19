void QuadFitRes()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 20:10:11 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,-0.0625,0.07845805,0.0625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1006[2] = {
   0.07142857,
   0.05555556};
   Double_t Graph0_fy1006[2] = {
   9.768115e-10,
   8.615757e-10};
   Double_t Graph0_fex1006[2] = {
   0,
   0};
   Double_t Graph0_fey1006[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1006,Graph0_fy1006,Graph0_fex1006,Graph0_fey1006);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];Fit residual [mm]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01006 = new TH1F("Graph_Graph01006","",100,0.05396825,0.07301588);
   Graph_Graph01006->SetMinimum(-0.05);
   Graph_Graph01006->SetMaximum(0.05);
   Graph_Graph01006->SetDirectory(0);
   Graph_Graph01006->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01006->SetLineColor(ci);
   Graph_Graph01006->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01006->GetXaxis()->CenterTitle(true);
   Graph_Graph01006->GetXaxis()->SetLabelFont(42);
   Graph_Graph01006->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01006->GetXaxis()->SetTitleFont(42);
   Graph_Graph01006->GetYaxis()->SetTitle("Fit residual [mm]");
   Graph_Graph01006->GetYaxis()->CenterTitle(true);
   Graph_Graph01006->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01006->GetYaxis()->SetLabelFont(42);
   Graph_Graph01006->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01006->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph01006->GetYaxis()->SetTitleFont(42);
   Graph_Graph01006->GetZaxis()->SetLabelFont(42);
   Graph_Graph01006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01006);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1007[2] = {
   0.07142857,
   0.05555556};
   Double_t Graph1_fy1007[2] = {
   2.037979e-10,
   1.804779e-10};
   Double_t Graph1_fex1007[2] = {
   0,
   0};
   Double_t Graph1_fey1007[2] = {
   0,
   0};
   gre = new TGraphErrors(2,Graph1_fx1007,Graph1_fy1007,Graph1_fex1007,Graph1_fey1007);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11007 = new TH1F("Graph_Graph11007","Graph",100,0.05396825,0.07301588);
   Graph_Graph11007->SetMinimum(1.781459e-10);
   Graph_Graph11007->SetMaximum(2.061299e-10);
   Graph_Graph11007->SetDirectory(0);
   Graph_Graph11007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11007->SetLineColor(ci);
   Graph_Graph11007->GetXaxis()->SetLabelFont(42);
   Graph_Graph11007->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11007->GetXaxis()->SetTitleFont(42);
   Graph_Graph11007->GetYaxis()->SetLabelFont(42);
   Graph_Graph11007->GetYaxis()->SetTitleFont(42);
   Graph_Graph11007->GetZaxis()->SetLabelFont(42);
   Graph_Graph11007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11007);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.81,0.35,0.99,0.65,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#LTB_{r}^{App}#GT","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","  #minus30 ppm","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","   30 ppm","lpf");
   entry->SetFillStyle(1000);
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
