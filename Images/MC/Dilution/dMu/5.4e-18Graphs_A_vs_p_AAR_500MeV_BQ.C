void 5.4e-18Graphs_A_vs_p_AAR_500MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 11:39:59 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.01625,3419.625,0.14625);
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
   -0.006666109,
   0.0802335,
   0.08873864,
   0.08499727,
   0.0522403,
   0.04648937};
   Double_t trackReco_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackReco_fey1001[6] = {
   0.0721929,
   0.01222486,
   0.007787674,
   0.007118783,
   0.007731508,
   0.01017062};
   TGraphErrors *gre = new TGraphErrors(6,trackReco_fx1001,trackReco_fy1001,trackReco_fex1001,trackReco_fey1001);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 250 < p < p #plus 250;d_{EDM}(p)");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1001 = new TH1F("Graph_trackReco1001","",100,0,3300);
   Graph_trackReco1001->SetMinimum(0);
   Graph_trackReco1001->SetMaximum(0.13);
   Graph_trackReco1001->SetDirectory(0);
   Graph_trackReco1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1001->SetLineColor(ci);
   Graph_trackReco1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 250 < p < p #plus 250");
   Graph_trackReco1001->GetXaxis()->SetRange(0,92);
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
   Graph_trackReco1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_trackReco1001->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1001->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1001->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1001);
   
   gre->Draw("ap");
   
   Double_t trackTruth_fx1002[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t trackTruth_fy1002[6] = {
   0.006048784,
   0.07929336,
   0.08659748,
   0.08147662,
   0.04796765,
   0.05198686};
   Double_t trackTruth_fex1002[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t trackTruth_fey1002[6] = {
   0.07822363,
   0.01323086,
   0.008411906,
   0.007694597,
   0.008348109,
   0.01090801};
   gre = new TGraphErrors(6,trackTruth_fx1002,trackTruth_fy1002,trackTruth_fex1002,trackTruth_fey1002);
   gre->SetName("trackTruth");
   gre->SetTitle("Graph");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1002 = new TH1F("Graph_trackTruth1002","Graph",100,0,3300);
   Graph_trackTruth1002->SetMinimum(-0.08889327);
   Graph_trackTruth1002->SetMaximum(0.1117278);
   Graph_trackTruth1002->SetDirectory(0);
   Graph_trackTruth1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1002->SetLineColor(ci);
   Graph_trackTruth1002->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1002->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1002->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1002->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1002->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1002->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1002->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1002);
   
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
   TLegendEntry *entry=leg->AddEntry("trackReco","#bf{Tracked reco decays}","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","#bf{Tracked truth decays}","lpf");
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
   
   TPaveText *pt = new TPaveText(0.3,0.51,0.53,0.56,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextFont(44);
   pt->SetTextSize(22);
   TText *pt_LaTex = pt->AddText("#bf{d_{EDM}(p)=ap^{2}+bp+d_{0}}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
