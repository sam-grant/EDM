void WeightedFit_truthAllDecays_AAR_500MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Sep  9 14:17:27 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-420.75,0.3375,3456.75,0.9625);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t delta_A_vs_p_fx1013[6] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750};
   Double_t delta_A_vs_p_fy1013[6] = {
   0.6887443,
   0.555775,
   0.5819601,
   0.56613,
   0.5248697,
   0.6364618};
   Double_t delta_A_vs_p_fex1013[6] = {
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t delta_A_vs_p_fey1013[6] = {
   0.1536195,
   0.05305655,
   0.04138767,
   0.04088806,
   0.05258021,
   0.1314401};
   TGraphErrors *gre = new TGraphErrors(6,delta_A_vs_p_fx1013,delta_A_vs_p_fy1013,delta_A_vs_p_fex1013,delta_A_vs_p_fey1013);
   gre->SetName("delta_A_vs_p");
   gre->SetTitle("");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_delta_A_vs_p1013 = new TH1F("Graph_delta_A_vs_p1013","",100,0,3300);
   Graph_delta_A_vs_p1013->SetMinimum(0.4);
   Graph_delta_A_vs_p1013->SetMaximum(0.9);
   Graph_delta_A_vs_p1013->SetDirectory(0);
   Graph_delta_A_vs_p1013->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_delta_A_vs_p1013->SetLineColor(ci);
   Graph_delta_A_vs_p1013->GetXaxis()->SetTitle("p [MeV] in range: p #minus 250 < p < p #plus 250");
   Graph_delta_A_vs_p1013->GetXaxis()->SetRange(0,93);
   Graph_delta_A_vs_p1013->GetXaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1013->GetXaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1013->GetXaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1013->GetXaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1013->GetXaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1013->GetYaxis()->SetTitle("#delta' [mrad]");
   Graph_delta_A_vs_p1013->GetYaxis()->CenterTitle(true);
   Graph_delta_A_vs_p1013->GetYaxis()->SetNdivisions(4000510);
   Graph_delta_A_vs_p1013->GetYaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1013->GetYaxis()->SetTitleSize(0.04);
   Graph_delta_A_vs_p1013->GetYaxis()->SetTitleOffset(1.1);
   Graph_delta_A_vs_p1013->GetYaxis()->SetTitleFont(42);
   Graph_delta_A_vs_p1013->GetZaxis()->SetLabelFont(42);
   Graph_delta_A_vs_p1013->GetZaxis()->SetTitleOffset(1);
   Graph_delta_A_vs_p1013->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_delta_A_vs_p1013);
   
   
   TF1 *pol01014 = new TF1("pol0","pol0",-33,3069, TF1::EAddToList::kNo);
   pol01014->SetFillColor(19);
   pol01014->SetFillStyle(0);
   pol01014->SetLineColor(2);
   pol01014->SetLineWidth(2);
   pol01014->SetChisquare(1.723544);
   pol01014->SetNDF(5);
   pol01014->GetXaxis()->SetLabelFont(42);
   pol01014->GetXaxis()->SetTitleOffset(1);
   pol01014->GetXaxis()->SetTitleFont(42);
   pol01014->GetYaxis()->SetLabelFont(42);
   pol01014->GetYaxis()->SetTitleFont(42);
   pol01014->SetParameter(0,0.5660828);
   pol01014->SetParError(0,0.02236549);
   pol01014->SetParLimits(0,0,0);
   pol01014->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01014);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.25,0.7,0.75,0.85,NULL,"brNDC");
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.566
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
