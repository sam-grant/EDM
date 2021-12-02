void VertexErrorGraphs_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 15:17:07 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-135.2991,-0.00375,3382.477,0.03375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1009[12] = {
   200.2236,
   433.6193,
   628.4777,
   873.018,
   1121.651,
   1371.589,
   1620.262,
   1868.394,
   2116.814,
   2363.628,
   2613.583,
   2829.611};
   Double_t Graph0_fy1009[12] = {
   0.6777398,
   0.0236693,
   0.0118169,
   0.00970933,
   0.00875586,
   0.008055087,
   0.007599435,
   0.007448266,
   0.007500867,
   0.00780087,
   0.008030246,
   0.009519822};
   Double_t Graph0_fex1009[12] = {
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
   Double_t Graph0_fey1009[12] = {
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
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1009,Graph0_fy1009,Graph0_fex1009,Graph0_fey1009);
   gre->SetName("Graph0");
   gre->SetTitle("Decay vertex momentum [MeV]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01009 = new TH1F("Graph_Graph01009","Decay vertex momentum [MeV]",100,0,3092.55);
   Graph_Graph01009->SetMinimum(0);
   Graph_Graph01009->SetMaximum(0.03);
   Graph_Graph01009->SetDirectory(0);
   Graph_Graph01009->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01009->SetLineColor(ci);
   Graph_Graph01009->GetXaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01009->GetXaxis()->SetRange(8,98);
   Graph_Graph01009->GetXaxis()->CenterTitle(true);
   Graph_Graph01009->GetXaxis()->SetLabelFont(42);
   Graph_Graph01009->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01009->GetXaxis()->SetTitleFont(42);
   Graph_Graph01009->GetYaxis()->CenterTitle(true);
   Graph_Graph01009->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01009->GetYaxis()->SetLabelFont(42);
   Graph_Graph01009->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01009->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01009->GetYaxis()->SetTitleFont(42);
   Graph_Graph01009->GetZaxis()->SetLabelFont(42);
   Graph_Graph01009->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01009->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01009);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1010[12] = {
   176.0138,
   432.6504,
   628.4065,
   872.9909,
   1121.658,
   1371.497,
   1620.22,
   1868.422,
   2116.783,
   2363.589,
   2614.113,
   2827.094};
   Double_t Graph1_fy1010[12] = {
   0.3540749,
   0.02393894,
   0.0119255,
   0.009786713,
   0.008830967,
   0.008139897,
   0.007688857,
   0.007543985,
   0.007646547,
   0.008049577,
   0.008217598,
   0.009839241};
   Double_t Graph1_fex1010[12] = {
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
   Double_t Graph1_fey1010[12] = {
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
   gre = new TGraphErrors(12,Graph1_fx1010,Graph1_fy1010,Graph1_fex1010,Graph1_fey1010);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11010 = new TH1F("Graph_Graph11010","Graph",100,0,3092.202);
   Graph_Graph11010->SetMinimum(0);
   Graph_Graph11010->SetMaximum(0.03);
   Graph_Graph11010->SetDirectory(0);
   Graph_Graph11010->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11010->SetLineColor(ci);
   Graph_Graph11010->GetXaxis()->SetRange(8,98);
   Graph_Graph11010->GetXaxis()->SetLabelFont(42);
   Graph_Graph11010->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11010->GetXaxis()->SetTitleFont(42);
   Graph_Graph11010->GetYaxis()->SetLabelFont(42);
   Graph_Graph11010->GetYaxis()->SetTitleFont(42);
   Graph_Graph11010->GetZaxis()->SetLabelFont(42);
   Graph_Graph11010->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11010->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11010);
   
   gre->Draw("p ");
   
   TPaveText *pt = new TPaveText(0.2205276,0.9341608,0.7794724,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Decay vertex momentum [MeV]");
   pt->Draw();
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
