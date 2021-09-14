void Graphs_Decays_AOverMaxDiff_vs_p_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 13:02:02 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.0006729911,3419.625,0.003199777);
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
   0.000139828,
   0.0009828513,
   0.001511609,
   0.001757486,
   0.001862909,
   0.001562642};
   Double_t truth_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truth_fey1001[6] = {
   1.296199e-05,
   3.657432e-05,
   5.588883e-05,
   7.901391e-05,
   0.0001137997,
   0.0001445081};
   TGraphErrors *gre = new TGraphErrors(6,truth_fx1001,truth_fy1001,truth_fex1001,truth_fey1001);
   gre->SetName("truth");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truth1001 = new TH1F("Graph_truth1001","",100,0,3300);
   Graph_truth1001->SetMinimum(-0.0002857143);
   Graph_truth1001->SetMaximum(0.0028125);
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
   Graph_truth1001->GetYaxis()->SetTitle("d_{EDM}(p) / #Delta_{max}#theta_{y}(p)");
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
   0.0001643641,
   0.001192252,
   0.001712534,
   0.001927291,
   0.001811146,
   0.001299939};
   Double_t truthAllDecays_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t truthAllDecays_fey1002[6] = {
   2.150203e-05,
   5.685152e-05,
   7.829267e-05,
   0.0001018007,
   0.0001313226,
   0.0001629828};
   gre = new TGraphErrors(6,truthAllDecays_fx1002,truthAllDecays_fy1002,truthAllDecays_fex1002,truthAllDecays_fey1002);
   gre->SetName("truthAllDecays");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truthAllDecays1002 = new TH1F("Graph_truthAllDecays1002","Graph",100,0,3300);
   Graph_truthAllDecays1002->SetMinimum(0.0001285759);
   Graph_truthAllDecays1002->SetMaximum(0.002217714);
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
   
   TLegend *leg = new TLegend(0.11,0.75,0.51,0.89,NULL,"brNDC");
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
