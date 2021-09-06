void TrackerResRMSGraph_500()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Sep  6 14:39:40 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,1.87843,3419.625,5.627177);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1004[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t Graph0_fy1004[6] = {
   4.998727,
   3.584726,
   2.82186,
   2.613337,
   2.57024,
   2.505152};
   Double_t Graph0_fex1004[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1004[6] = {
   0.003658328,
   0.001046162,
   0.0008658443,
   0.0009230354,
   0.001166851,
   0.00193068};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;True #minus reco #theta_{y} RMS [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01004 = new TH1F("Graph_Graph01004","",100,0,3300);
   Graph_Graph01004->SetMinimum(2.253305);
   Graph_Graph01004->SetMaximum(5.252302);
   Graph_Graph01004->SetDirectory(0);
   Graph_Graph01004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01004->SetLineColor(ci);
   Graph_Graph01004->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_Graph01004->GetXaxis()->SetRange(0,92);
   Graph_Graph01004->GetXaxis()->CenterTitle(true);
   Graph_Graph01004->GetXaxis()->SetLabelFont(42);
   Graph_Graph01004->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01004->GetXaxis()->SetTitleFont(42);
   Graph_Graph01004->GetYaxis()->SetTitle("True #minus reco #theta_{y} RMS [mrad]");
   Graph_Graph01004->GetYaxis()->CenterTitle(true);
   Graph_Graph01004->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01004->GetYaxis()->SetLabelFont(42);
   Graph_Graph01004->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01004->GetYaxis()->SetTitleFont(42);
   Graph_Graph01004->GetZaxis()->SetLabelFont(42);
   Graph_Graph01004->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01004);
   
   gre->Draw("ap");
   TLine *line = new TLine(500,2.253305,500,5.252302);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
