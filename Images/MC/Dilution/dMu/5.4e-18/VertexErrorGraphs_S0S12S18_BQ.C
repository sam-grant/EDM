void VertexErrorGraphs_S0S12S18_BQ()
{
//=========Macro generated from canvas: S0S12S18/
//=========  (Tue Dec  7 01:11:49 2021) by ROOT version 6.24/04
   TCanvas *S0S12S18 = new TCanvas("S0S12S18", "",0,0,800,600);
   S0S12S18->SetHighLightColor(2);
   S0S12S18->Range(-133.169,-0.00375,3377.378,0.03375);
   S0S12S18->SetFillColor(0);
   S0S12S18->SetBorderMode(0);
   S0S12S18->SetBorderSize(2);
   S0S12S18->SetFrameBorderMode(0);
   S0S12S18->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1043[11] = {
   451.9222,
   653.3407,
   880.2728,
   1123.023,
   1371.209,
   1620.261,
   1867.114,
   2115.52,
   2363.035,
   2613.878,
   2792.287};
   Double_t Graph0_fy1043[11] = {
   0.06378456,
   0.02131405,
   0.01224083,
   0.01004693,
   0.009203171,
   0.008765288,
   0.008781899,
   0.009188697,
   0.009759984,
   0.00969133,
   0.02117574};
   Double_t Graph0_fex1043[11] = {
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
   Double_t Graph0_fey1043[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1043,Graph0_fy1043,Graph0_fex1043,Graph0_fey1043);
   gre->SetName("Graph0");
   gre->SetTitle(";Decay vertex momentum [MeV];#deltad_{EDM} / 250 MeV");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01043 = new TH1F("Graph_Graph01043","",100,217.8857,3026.323);
   Graph_Graph01043->SetMinimum(0);
   Graph_Graph01043->SetMaximum(0.03);
   Graph_Graph01043->SetDirectory(0);
   Graph_Graph01043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01043->SetLineColor(ci);
   Graph_Graph01043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01043->GetXaxis()->SetRange(1,100);
   Graph_Graph01043->GetXaxis()->CenterTitle(true);
   Graph_Graph01043->GetXaxis()->SetLabelFont(42);
   Graph_Graph01043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01043->GetXaxis()->SetTitleFont(42);
   Graph_Graph01043->GetYaxis()->SetTitle("#deltad_{EDM} / 250 MeV");
   Graph_Graph01043->GetYaxis()->CenterTitle(true);
   Graph_Graph01043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01043->GetYaxis()->SetLabelFont(42);
   Graph_Graph01043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01043->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph01043->GetYaxis()->SetTitleFont(42);
   Graph_Graph01043->GetZaxis()->SetLabelFont(42);
   Graph_Graph01043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01043);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1044[11] = {
   451.7878,
   653.2973,
   880.261,
   1123.043,
   1371.131,
   1620.23,
   1867.05,
   2115.574,
   2362.998,
   2614.023,
   2788.472};
   Double_t Graph1_fy1044[11] = {
   0.06378572,
   0.02135186,
   0.01227176,
   0.01008195,
   0.009240946,
   0.008796052,
   0.008815584,
   0.009231367,
   0.009808522,
   0.009731092,
   0.0220131};
   Double_t Graph1_fex1044[11] = {
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
   Double_t Graph1_fey1044[11] = {
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
   gre = new TGraphErrors(11,Graph1_fx1044,Graph1_fy1044,Graph1_fex1044,Graph1_fey1044);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph11044 = new TH1F("Graph_Graph11044","Graph",100,218.1194,3022.14);
   Graph_Graph11044->SetMinimum(0);
   Graph_Graph11044->SetMaximum(0.03);
   Graph_Graph11044->SetDirectory(0);
   Graph_Graph11044->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11044->SetLineColor(ci);
   Graph_Graph11044->GetXaxis()->SetRange(1,100);
   Graph_Graph11044->GetXaxis()->SetLabelFont(42);
   Graph_Graph11044->GetXaxis()->SetTitleOffset(1);
   Graph_Graph11044->GetXaxis()->SetTitleFont(42);
   Graph_Graph11044->GetYaxis()->SetLabelFont(42);
   Graph_Graph11044->GetYaxis()->SetTitleFont(42);
   Graph_Graph11044->GetZaxis()->SetLabelFont(42);
   Graph_Graph11044->GetZaxis()->SetTitleOffset(1);
   Graph_Graph11044->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph11044);
   
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
   S0S12S18->Modified();
   S0S12S18->cd();
   S0S12S18->SetSelected(S0S12S18);
}
