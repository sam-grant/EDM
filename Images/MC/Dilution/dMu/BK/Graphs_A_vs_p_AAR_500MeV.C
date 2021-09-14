void Graphs_A_vs_p_AAR_500MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 26 14:20:15 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,-0.028125,3456.75,0.253125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t trackReco_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackReco_fy1001[6] = {
   0.0548845,
   0.123171,
   0.08932494,
   0.09047961,
   0.07437575,
   0.05228655};
   Double_t trackReco_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1001[6] = {
   0.04185886,
   0.01322983,
   0.01037616,
   0.009296142,
   0.009643972,
   0.0112701};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1001,trackReco_fy1001,trackReco_fex1001,trackReco_fey1001);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1001 = new TH1F("Graph_trackReco1001","",100,0,3300);
   Graph_trackReco1001->SetMinimum(0);
   Graph_trackReco1001->SetMaximum(0.225);
   Graph_trackReco1001->SetDirectory(0);
   Graph_trackReco1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_trackReco1001->SetLineColor(ci);
   Graph_trackReco1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_trackReco1001->GetXaxis()->SetRange(0,93);
   Graph_trackReco1001->GetXaxis()->CenterTitle(true);
   Graph_trackReco1001->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetXaxis()->SetTitleSize(0.04);
   Graph_trackReco1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_trackReco1001->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1001->GetYaxis()->CenterTitle(true);
   Graph_trackReco1001->GetYaxis()->SetNdivisions(4000510);
   Graph_trackReco1001->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetYaxis()->SetTitleSize(0.04);
   Graph_trackReco1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_trackReco1001->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1001);
   
   gre->Draw("ap");
   
   Double_t truth_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t truth_fy1002[6] = {
   0.1496085,
   0.153841,
   0.1523347,
   0.1318929,
   0.09986036,
   0.05695996};
   Double_t truth_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truth_fey1002[6] = {
   0.01386214,
   0.004887843,
   0.003272966,
   0.002600038,
   0.002302491,
   0.002300744};
   gre = new TGraphErrors(6,truth_fx1002,truth_fy1002,truth_fex1002,truth_fey1002);
   gre->SetName("truth");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truth1002 = new TH1F("Graph_truth1002","",100,0,3300);
   Graph_truth1002->SetMinimum(0);
   Graph_truth1002->SetMaximum(0.225);
   Graph_truth1002->SetDirectory(0);
   Graph_truth1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truth1002->SetLineColor(ci);
   Graph_truth1002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_truth1002->GetXaxis()->SetRange(0,93);
   Graph_truth1002->GetXaxis()->CenterTitle(true);
   Graph_truth1002->GetXaxis()->SetLabelFont(42);
   Graph_truth1002->GetXaxis()->SetTitleSize(0.04);
   Graph_truth1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_truth1002->GetXaxis()->SetTitleFont(42);
   Graph_truth1002->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truth1002->GetYaxis()->CenterTitle(true);
   Graph_truth1002->GetYaxis()->SetNdivisions(4000510);
   Graph_truth1002->GetYaxis()->SetLabelFont(42);
   Graph_truth1002->GetYaxis()->SetTitleSize(0.04);
   Graph_truth1002->GetYaxis()->SetTitleOffset(1.1);
   Graph_truth1002->GetYaxis()->SetTitleFont(42);
   Graph_truth1002->GetZaxis()->SetLabelFont(42);
   Graph_truth1002->GetZaxis()->SetTitleOffset(1);
   Graph_truth1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truth1002);
   
   gre->Draw("p");
   
   Double_t truthAllDecays_fx1003[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t truthAllDecays_fy1003[6] = {
   0.1758607,
   0.1866175,
   0.1725832,
   0.1446361,
   0.09708559,
   0.04738418};
   Double_t truthAllDecays_fex1003[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truthAllDecays_fey1003[6] = {
   0.02300062,
   0.008131198,
   0.005940214,
   0.004920528,
   0.004403682,
   0.004444784};
   gre = new TGraphErrors(6,truthAllDecays_fx1003,truthAllDecays_fy1003,truthAllDecays_fex1003,truthAllDecays_fey1003);
   gre->SetName("truthAllDecays");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truthAllDecays1003 = new TH1F("Graph_truthAllDecays1003","",100,0,3300);
   Graph_truthAllDecays1003->SetMinimum(0);
   Graph_truthAllDecays1003->SetMaximum(0.225);
   Graph_truthAllDecays1003->SetDirectory(0);
   Graph_truthAllDecays1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truthAllDecays1003->SetLineColor(ci);
   Graph_truthAllDecays1003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_truthAllDecays1003->GetXaxis()->SetRange(0,93);
   Graph_truthAllDecays1003->GetXaxis()->CenterTitle(true);
   Graph_truthAllDecays1003->GetXaxis()->SetLabelFont(42);
   Graph_truthAllDecays1003->GetXaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_truthAllDecays1003->GetXaxis()->SetTitleFont(42);
   Graph_truthAllDecays1003->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truthAllDecays1003->GetYaxis()->CenterTitle(true);
   Graph_truthAllDecays1003->GetYaxis()->SetNdivisions(4000510);
   Graph_truthAllDecays1003->GetYaxis()->SetLabelFont(42);
   Graph_truthAllDecays1003->GetYaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1003->GetYaxis()->SetTitleOffset(1.1);
   Graph_truthAllDecays1003->GetYaxis()->SetTitleFont(42);
   Graph_truthAllDecays1003->GetZaxis()->SetLabelFont(42);
   Graph_truthAllDecays1003->GetZaxis()->SetTitleOffset(1);
   Graph_truthAllDecays1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truthAllDecays1003);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.69,0.69,0.89,0.89,NULL,"brNDC");
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
