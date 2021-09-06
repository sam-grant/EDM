void WeightedFit_truthAllDecays_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Aug 29 16:55:56 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,0.3375,3456.75,0.9625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1001[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1001[6] = {
   0.6887443,
   0.555775,
   0.5819601,
   0.56613,
   0.5248697,
   0.6364618};
   Double_t delta_A_vs_p_fex1001[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1001[6] = {
   0.1536195,
   0.05305655,
   0.04138767,
   0.04088806,
   0.05258021,
   0.1314401};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1001,delta_A_vs_p_fy1001,delta_A_vs_p_fex1001,delta_A_vs_p_fey1001);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1001 = new TH1F("Graph_delta_A_vs_p1001","",100,0,3300);
   Graph_delta_A_vs_p1001->SetMinimum(0.4);
   Graph_delta_A_vs_p1001->SetMaximum(0.9);
   Graph_delta_A_vs_p1001->SetDirectory(0);
   Graph_delta_A_vs_p1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1001->SetLineColor(ci);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1001->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1001->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1001->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1001->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1001->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1001->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1001->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1001->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1001->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1001->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1001);
   
   
   TF1 *pol01002 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01002->SetFillColor(19);
   pol01002->SetFillStyle(0);
   pol01002->SetLineColor(2);
   pol01002->SetLineWidth(2);
   pol01002->SetChisquare(1.723544);
   pol01002->SetNDF(5);
   pol01002->GetXaxis()->SetLabelFont(42);
   pol01002->GetXaxis()->SetTitleOffset(1);
   pol01002->GetXaxis()->SetTitleFont(42);
   pol01002->GetYaxis()->SetLabelFont(42);
   pol01002->GetYaxis()->SetTitleFont(42);
   pol01002->SetParameter(0,0.5660828);
   pol01002->SetParError(0,0.02236549);
   pol01002->SetParLimits(0,0,0);
   pol01002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.3,0.68,0.7,0.83,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("delta_A_vs_p","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","Fit: #LT#delta'#GT = 0.566
#pm0.02
 mrad","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
