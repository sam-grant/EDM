void VertexErrorGraphs_S12_BQ()
{
//=========Macro generated from canvas: S12/
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *S12 = new TCanvas("S12", "",0,0,800,600);
   S12->SetHighLightColor(2);
   S12->Range(-133.2961,-0.00375,3376.908,0.03375);
   S12->SetFillColor(0);
   S12->SetBorderMode(0);
   S12->SetBorderSize(2);
   S12->SetFrameBorderMode(0);
   S12->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1037[11] = {
   451.738,
   653.3893,
   880.2527,
   1123.051,
   1371.173,
   1620.272,
   1866.762,
   2114.836,
   2362.621,
   2614.182,
   2791.874};
   Double_t Graph0_fy1037[11] = {
   0.1100992,
   0.03694475,
   0.02118758,
   0.01742865,
   0.01591658,
   0.01513251,
   0.01521428,
   0.016058,
   0.01724904,
   0.01719824,
   0.03847322};
   Double_t Graph0_fex1037[11] = {
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
   Double_t Graph0_fey1037[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1037,Graph0_fy1037,Graph0_fex1037,Graph0_fey1037);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01037 = new TH1F("Graph_Graph01037","",100,217.7244,3025.888);
   Graph_Graph01037->SetMinimum(0);
   Graph_Graph01037->SetMaximum(0.03);
   Graph_Graph01037->SetDirectory(0);
   Graph_Graph01037->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01037->SetLineColor(ci);
   Graph_Graph01037->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01037->GetXaxis()->SetRange(1,100);
   Graph_Graph01037->GetXaxis()->CenterTitle(true);
   Graph_Graph01037->GetXaxis()->SetLabelFont(42);
   Graph_Graph01037->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01037->GetXaxis()->SetTitleFont(42);
   Graph_Graph01037->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01037->GetYaxis()->CenterTitle(true);
   Graph_Graph01037->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01037->GetYaxis()->SetLabelFont(42);
   Graph_Graph01037->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01037->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01037->GetYaxis()->SetTitleFont(42);
   Graph_Graph01037->GetZaxis()->SetLabelFont(42);
   Graph_Graph01037->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01037->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01037);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1038[11] = {
   451.6071,
   653.3642,
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236,
   2787.767};
   Double_t Graph1_fy1038[11] = {
   0.1100058,
   0.03699345,
   0.02125165,
   0.01748089,
   0.01598468,
   0.01518205,
   0.01527061,
   0.01614408,
   0.01732056,
   0.01728981,
   0.03988681};
   Double_t Graph1_fex1038[11] = {
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
   Double_t Graph1_fey1038[11] = {
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
   gre = new TGraphErrors(11,Graph1_fx1038,Graph1_fy1038,Graph1_fex1038,Graph1_fey1038);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11038 = new TH1F("Graph_Graph11038","Graph",100,217.9912,3021.382);
   Graph_Graph11038->SetMinimum(0);
   Graph_Graph11038->SetMaximum(0.03);
   Graph_Graph11038->SetDirectory(0);
   Graph_Graph11038->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11038->SetLineColor(ci);
   Graph_Graph11038->GetXaxis()->SetRange(1,100);
   Graph_Graph11038->GetXaxis()->SetLabelFont(42);
   Graph_Graph11038->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11038->GetXaxis()->SetTitleFont(42);
   Graph_Graph11038->GetYaxis()->SetLabelFont(42);
   Graph_Graph11038->GetYaxis()->SetTitleFont(42);
   Graph_Graph11038->GetZaxis()->SetLabelFont(42);
   Graph_Graph11038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11038);
   
   gre->Draw("p ");
   TLine *line = new TLine(750,0,750,0.03);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   line = new TLine(2750,0,2750,0.03);

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
   S12->Modified();
   S12->cd();
   S12->SetSelected(S12);
}
