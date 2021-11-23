void VertexErrorGraphs_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 13:32:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-133.169,-0.009375001,3377.381,0.084375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1011[11] = {
   451.9227,
   653.3392,
   880.2735,
   1123.022,
   1371.209,
   1620.262,
   1867.113,
   2115.519,
   2363.039,
   2613.873,
   2792.289};
   Double_t Graph0_fy1011[11] = {
   0.06375102,
   0.02131359,
   0.01224355,
   0.0100481,
   0.00920587,
   0.008766033,
   0.008785909,
   0.00919343,
   0.009767184,
   0.009697446,
   0.02117012};
   Double_t Graph0_fex1011[11] = {
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
   Double_t Graph0_fey1011[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1011,Graph0_fy1011,Graph0_fex1011,Graph0_fey1011);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#deltad_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01011 = new TH1F("Graph_Graph01011","",100,217.886,3026.326);
   Graph_Graph01011->SetMinimum(0);
   Graph_Graph01011->SetMaximum(0.075);
   Graph_Graph01011->SetDirectory(0);
   Graph_Graph01011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01011->SetLineColor(ci);
   Graph_Graph01011->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph01011->GetXaxis()->SetRange(1,100);
   Graph_Graph01011->GetXaxis()->CenterTitle(true);
   Graph_Graph01011->GetXaxis()->SetLabelFont(42);
   Graph_Graph01011->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01011->GetXaxis()->SetTitleFont(42);
   Graph_Graph01011->GetYaxis()->SetTitle("#deltad_{EDM}(p)");
   Graph_Graph01011->GetYaxis()->CenterTitle(true);
   Graph_Graph01011->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01011->GetYaxis()->SetLabelFont(42);
   Graph_Graph01011->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01011->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01011->GetYaxis()->SetTitleFont(42);
   Graph_Graph01011->GetZaxis()->SetLabelFont(42);
   Graph_Graph01011->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01011);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1012[11] = {
   451.7878,
   653.297,
   880.2628,
   1123.041,
   1371.131,
   1620.23,
   1867.05,
   2115.573,
   2363,
   2614.02,
   2788.473};
   Double_t Graph1_fy1012[11] = {
   0.06372932,
   0.02134454,
   0.01227204,
   0.01008123,
   0.009241647,
   0.008794506,
   0.008816491,
   0.009233293,
   0.009812533,
   0.009733407,
   0.02198099};
   Double_t Graph1_fex1012[11] = {
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
   Double_t Graph1_fey1012[11] = {
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
   gre = new TGraphErrors(11,Graph1_fx1012,Graph1_fy1012,Graph1_fex1012,Graph1_fey1012);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11012 = new TH1F("Graph_Graph11012","Graph",100,218.1193,3022.141);
   Graph_Graph11012->SetMinimum(0);
   Graph_Graph11012->SetMaximum(0.075);
   Graph_Graph11012->SetDirectory(0);
   Graph_Graph11012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11012->SetLineColor(ci);
   Graph_Graph11012->GetXaxis()->SetRange(1,100);
   Graph_Graph11012->GetXaxis()->SetLabelFont(42);
   Graph_Graph11012->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11012->GetXaxis()->SetTitleFont(42);
   Graph_Graph11012->GetYaxis()->SetLabelFont(42);
   Graph_Graph11012->GetYaxis()->SetTitleFont(42);
   Graph_Graph11012->GetZaxis()->SetLabelFont(42);
   Graph_Graph11012->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11012);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,0,750,0.075);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2500,0,2500,0.075);

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
