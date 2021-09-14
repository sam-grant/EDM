void VertexErrorGraphs_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:03:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-119.625,-0.00375,3386.625,0.03375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1007[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph0_fy1007[12] = {
   0.6773616,
   0.02364774,
   0.01180618,
   0.009700394,
   0.00874829,
   0.008048514,
   0.007593834,
   0.007442528,
   0.007496123,
   0.007796622,
   0.008025993,
   0.009514982};
   Double_t Graph0_fex1007[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph0_fey1007[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#deltad_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01007 = new TH1F("Graph_Graph01007","",100,0,3300);
   Graph_Graph01007->SetMinimum(0);
   Graph_Graph01007->SetMaximum(0.03);
   Graph_Graph01007->SetDirectory(0);
   Graph_Graph01007->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01007->SetLineColor(ci);
   Graph_Graph01007->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph01007->GetXaxis()->SetRange(8,92);
   Graph_Graph01007->GetXaxis()->CenterTitle(true);
   Graph_Graph01007->GetXaxis()->SetLabelFont(42);
   Graph_Graph01007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01007->GetXaxis()->SetTitleFont(42);
   Graph_Graph01007->GetYaxis()->SetTitle("#deltad_{EDM}(p)");
   Graph_Graph01007->GetYaxis()->CenterTitle(true);
   Graph_Graph01007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01007->GetYaxis()->SetLabelFont(42);
   Graph_Graph01007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01007->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01007->GetYaxis()->SetTitleFont(42);
   Graph_Graph01007->GetZaxis()->SetLabelFont(42);
   Graph_Graph01007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01007);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1008[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t Graph1_fy1008[12] = {
   0.3539373,
   0.02391831,
   0.01191528,
   0.009778094,
   0.008823658,
   0.008133694,
   0.007683219,
   0.007538423,
   0.007641947,
   0.008045241,
   0.008213424,
   0.00983529};
   Double_t Graph1_fex1008[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t Graph1_fey1008[12] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(12,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11008 = new TH1F("Graph_Graph11008","Graph",100,0,3300);
   Graph_Graph11008->SetMinimum(0);
   Graph_Graph11008->SetMaximum(0.03);
   Graph_Graph11008->SetDirectory(0);
   Graph_Graph11008->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11008->SetLineColor(ci);
   Graph_Graph11008->GetXaxis()->SetRange(8,92);
   Graph_Graph11008->GetXaxis()->SetLabelFont(42);
   Graph_Graph11008->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetXaxis()->SetTitleFont(42);
   Graph_Graph11008->GetYaxis()->SetLabelFont(42);
   Graph_Graph11008->GetYaxis()->SetTitleFont(42);
   Graph_Graph11008->GetZaxis()->SetLabelFont(42);
   Graph_Graph11008->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11008);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,0,750,0.03);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2500,0,2500,0.03);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   
   TLegend *leg = new TLegend(0.25,0.91,0.75,0.99,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("Graph1","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
