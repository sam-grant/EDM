void QuadCTAGs()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 18 23:55:19 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0.05124717,562500,0.07845805,4937500);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetRightMargin(0.2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1008[2] = {
   0.07142857,
   0.05555556};
   Double_t Graph0_fy1008[2] = {
   2839717,
   3121681};
   Double_t Graph0_fex1008[2] = {
   0,
   0};
   Double_t Graph0_fey1008[2] = {
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1008,Graph0_fy1008,Graph0_fex1008,Graph0_fey1008);
   gre->SetName("Graph0");
   gre->SetTitle(";1/QHV [kV^{-1}];Integrated CTAGs / setting");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01008 = new TH1F("Graph_Graph01008","",100,0.05396825,0.07301588);
   Graph_Graph01008->SetMinimum(1000000);
   Graph_Graph01008->SetMaximum(4500000);
   Graph_Graph01008->SetDirectory(0);
   Graph_Graph01008->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01008->SetLineColor(ci);
   Graph_Graph01008->GetXaxis()->SetTitle("1/QHV [kV^{-1}]");
   Graph_Graph01008->GetXaxis()->CenterTitle(true);
   Graph_Graph01008->GetXaxis()->SetLabelFont(42);
   Graph_Graph01008->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01008->GetXaxis()->SetTitleFont(42);
   Graph_Graph01008->GetYaxis()->SetTitle("Integrated CTAGs / setting");
   Graph_Graph01008->GetYaxis()->CenterTitle(true);
   Graph_Graph01008->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01008->GetYaxis()->SetLabelFont(42);
   Graph_Graph01008->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01008->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph01008->GetYaxis()->SetTitleFont(42);
   Graph_Graph01008->GetZaxis()->SetLabelFont(42);
   Graph_Graph01008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01008);
   
   gre->Draw("apl");
   
   Double_t Graph1_fx1009[2] = {
   0.07142857,
   0.05555556};
   Double_t Graph1_fy1009[2] = {
   2457050,
   3040573};
   Double_t Graph1_fex1009[2] = {
   0,
   0};
   Double_t Graph1_fey1009[2] = {
   0,
   0};
   gre = new TGraphErrors(2,Graph1_fx1009,Graph1_fy1009,Graph1_fex1009,Graph1_fey1009);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph11009 = new TH1F("Graph_Graph11009","Graph",100,0.05396825,0.07301588);
   Graph_Graph11009->SetMinimum(2398698);
   Graph_Graph11009->SetMaximum(3098925);
   Graph_Graph11009->SetDirectory(0);
   Graph_Graph11009->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11009->SetLineColor(ci);
   Graph_Graph11009->GetXaxis()->SetLabelFont(42);
   Graph_Graph11009->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11009->GetXaxis()->SetTitleFont(42);
   Graph_Graph11009->GetYaxis()->SetLabelFont(42);
   Graph_Graph11009->GetYaxis()->SetTitleFont(42);
   Graph_Graph11009->GetZaxis()->SetLabelFont(42);
   Graph_Graph11009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11009);
   
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
