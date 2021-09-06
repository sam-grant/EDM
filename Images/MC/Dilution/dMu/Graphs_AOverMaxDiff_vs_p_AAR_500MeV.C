void Graphs_AOverMaxDiff_vs_p_AAR_500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 14:20:15 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.00084375,3456.75,0.00259375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1004[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackReco_fy1004[6] = {
   5.355012e-05,
   0.0001172333,
   0.0001243559,
   0.000127872,
   0.0001445302,
   7.214594e-05};
   Double_t trackReco_fex1004[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1004[6] = {
   4.084147e-05,
   1.259661e-05,
   1.445497e-05,
   1.314937e-05,
   1.875993e-05,
   1.555362e-05};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1004,trackReco_fy1004,trackReco_fex1004,trackReco_fey1004);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1004 = new TH1F("Graph_trackReco1004","",100,0,3300);
   Graph_trackReco1004->SetMinimum(-0.0005);
   Graph_trackReco1004->SetMaximum(0.00225);
   Graph_trackReco1004->SetDirectory(0);
   Graph_trackReco1004->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco1004->SetLineColor(ci);
   Graph_trackReco1004->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_trackReco1004->GetXaxis()->SetRange(0,93);
   Graph_trackReco1004->GetXaxis()->CenterTitle(true);
   Graph_trackReco1004->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1004->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1004->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitle("d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   Graph_trackReco1004->GetYaxis()->CenterTitle(true);
   Graph_trackReco1004->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1004->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1004->GetYaxis()->SetTitleOffset(1.1);
   Graph_trackReco1004->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1004);
   
   gre->Draw("ap");
   
   Double_t truth_fx1005[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t truth_fy1005[6] = {
   0.000139828,
   0.0009828513,
   0.001511609,
   0.001757486,
   0.001862909,
   0.001562642};
   Double_t truth_fex1005[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truth_fey1005[6] = {
   1.296199e-05,
   3.657432e-05,
   5.588883e-05,
   7.901391e-05,
   0.0001137997,
   0.0001445081};
   gre = new TGraphErrors(6,truth_fx1005,truth_fy1005,truth_fex1005,truth_fey1005);
   gre->SetName("truth");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truth1005 = new TH1F("Graph_truth1005","",100,0,3300);
   Graph_truth1005->SetMinimum(-0.0005);
   Graph_truth1005->SetMaximum(0.00225);
   Graph_truth1005->SetDirectory(0);
   Graph_truth1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truth1005->SetLineColor(ci);
   Graph_truth1005->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_truth1005->GetXaxis()->SetRange(0,93);
   Graph_truth1005->GetXaxis()->CenterTitle(true);
   Graph_truth1005->GetXaxis()->SetLabelFont(42);
   Graph_truth1005->GetXaxis()->SetTitleSize(0.04);
   Graph_truth1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_truth1005->GetXaxis()->SetTitleFont(42);
   Graph_truth1005->GetYaxis()->SetTitle("d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   Graph_truth1005->GetYaxis()->CenterTitle(true);
   Graph_truth1005->GetYaxis()->SetNdivisions(4000510);
   Graph_truth1005->GetYaxis()->SetLabelFont(42);
   Graph_truth1005->GetYaxis()->SetTitleSize(0.04);
   Graph_truth1005->GetYaxis()->SetTitleOffset(1.1);
   Graph_truth1005->GetYaxis()->SetTitleFont(42);
   Graph_truth1005->GetZaxis()->SetLabelFont(42);
   Graph_truth1005->GetZaxis()->SetTitleOffset(1);
   Graph_truth1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truth1005);
   
   gre->Draw("p");
   
   Double_t truthAllDecays_fx1006[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t truthAllDecays_fy1006[6] = {
   0.0001643641,
   0.001192252,
   0.001712534,
   0.001927291,
   0.001811146,
   0.001299939};
   Double_t truthAllDecays_fex1006[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truthAllDecays_fey1006[6] = {
   2.150203e-05,
   5.685152e-05,
   7.829267e-05,
   0.0001018007,
   0.0001313226,
   0.0001629828};
   gre = new TGraphErrors(6,truthAllDecays_fx1006,truthAllDecays_fy1006,truthAllDecays_fex1006,truthAllDecays_fey1006);
   gre->SetName("truthAllDecays");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truthAllDecays1006 = new TH1F("Graph_truthAllDecays1006","",100,0,3300);
   Graph_truthAllDecays1006->SetMinimum(-0.0005);
   Graph_truthAllDecays1006->SetMaximum(0.00225);
   Graph_truthAllDecays1006->SetDirectory(0);
   Graph_truthAllDecays1006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truthAllDecays1006->SetLineColor(ci);
   Graph_truthAllDecays1006->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_truthAllDecays1006->GetXaxis()->SetRange(0,93);
   Graph_truthAllDecays1006->GetXaxis()->CenterTitle(true);
   Graph_truthAllDecays1006->GetXaxis()->SetLabelFont(42);
   Graph_truthAllDecays1006->GetXaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1006->GetXaxis()->SetTitleOffset(1.1);
   Graph_truthAllDecays1006->GetXaxis()->SetTitleFont(42);
   Graph_truthAllDecays1006->GetYaxis()->SetTitle("d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   Graph_truthAllDecays1006->GetYaxis()->CenterTitle(true);
   Graph_truthAllDecays1006->GetYaxis()->SetNdivisions(4000510);
   Graph_truthAllDecays1006->GetYaxis()->SetLabelFont(42);
   Graph_truthAllDecays1006->GetYaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1006->GetYaxis()->SetTitleOffset(1.1);
   Graph_truthAllDecays1006->GetYaxis()->SetTitleFont(42);
   Graph_truthAllDecays1006->GetZaxis()->SetLabelFont(42);
   Graph_truthAllDecays1006->GetZaxis()->SetTitleOffset(1);
   Graph_truthAllDecays1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truthAllDecays1006);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.15,0.69,0.35,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackReco","Reco (tracks)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("truth","Truth (tracks)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("truthAllDecays","Truth (all decays)","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
