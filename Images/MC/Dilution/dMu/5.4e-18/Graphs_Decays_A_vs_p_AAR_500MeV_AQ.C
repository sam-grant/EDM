void Graphs_Decays_A_vs_p_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Sep 10 15:49:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.050625,3419.625,0.255625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t truth_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t truth_fy1001[6] = {
   0.1496085,
   0.153841,
   0.1523347,
   0.1318929,
   0.09986036,
   0.05695996};
   Double_t truth_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truth_fey1001[6] = {
   0.01386214,
   0.004887843,
   0.003272966,
   0.002600038,
   0.002302491,
   0.002300744};
   TGraphErrors *gre = new TGraphErrors(6,truth_fx1001,truth_fy1001,truth_fex1001,truth_fey1001);
   gre->SetName("truth");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truth1001 = new TH1F("Graph_truth1001","",100,0,3300);
   Graph_truth1001->SetMinimum(-0.02);
   Graph_truth1001->SetMaximum(0.225);
   Graph_truth1001->SetDirectory(0);
   Graph_truth1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truth1001->SetLineColor(ci);
   Graph_truth1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_truth1001->GetXaxis()->SetRange(0,92);
   Graph_truth1001->GetXaxis()->CenterTitle(true);
   Graph_truth1001->GetXaxis()->SetLabelFont(42);
   Graph_truth1001->GetXaxis()->SetTitleSize(0.04);
   Graph_truth1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_truth1001->GetXaxis()->SetTitleFont(42);
   Graph_truth1001->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truth1001->GetYaxis()->CenterTitle(true);
   Graph_truth1001->GetYaxis()->SetNdivisions(4000510);
   Graph_truth1001->GetYaxis()->SetLabelFont(42);
   Graph_truth1001->GetYaxis()->SetTitleSize(0.04);
   Graph_truth1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_truth1001->GetYaxis()->SetTitleFont(42);
   Graph_truth1001->GetZaxis()->SetLabelFont(42);
   Graph_truth1001->GetZaxis()->SetTitleOffset(1);
   Graph_truth1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truth1001);
   
   gre->Draw("ap");
   
   Double_t truthAllDecays_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t truthAllDecays_fy1002[6] = {
   0.1758607,
   0.1866175,
   0.1725832,
   0.1446361,
   0.09708559,
   0.04738418};
   Double_t truthAllDecays_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truthAllDecays_fey1002[6] = {
   0.02300062,
   0.008131198,
   0.005940214,
   0.004920528,
   0.004403682,
   0.004444784};
   gre = new TGraphErrors(6,truthAllDecays_fx1002,truthAllDecays_fy1002,truthAllDecays_fex1002,truthAllDecays_fey1002);
   gre->SetName("truthAllDecays");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truthAllDecays1002 = new TH1F("Graph_truthAllDecays1002","Graph",100,0,3300);
   Graph_truthAllDecays1002->SetMinimum(0.0273472);
   Graph_truthAllDecays1002->SetMaximum(0.2144536);
   Graph_truthAllDecays1002->SetDirectory(0);
   Graph_truthAllDecays1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truthAllDecays1002->SetLineColor(ci);
   Graph_truthAllDecays1002->GetXaxis()->SetLabelFont(42);
   Graph_truthAllDecays1002->GetXaxis()->SetTitleOffset(1);
   Graph_truthAllDecays1002->GetXaxis()->SetTitleFont(42);
   Graph_truthAllDecays1002->GetYaxis()->SetLabelFont(42);
   Graph_truthAllDecays1002->GetYaxis()->SetTitleFont(42);
   Graph_truthAllDecays1002->GetZaxis()->SetLabelFont(42);
   Graph_truthAllDecays1002->GetZaxis()->SetTitleOffset(1);
   Graph_truthAllDecays1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truthAllDecays1002);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.49,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("truth","#bf{Accepted truth decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("truthAllDecays","#bf{All truth decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
