void S0S12S18_g2_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:58 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-1.633645,2750,1.394371);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1131[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1131[7] = {
   -0.5052719,
   -0.4335681,
   0.04627361,
   0.03403046,
   0.07559553,
   0.06200401,
   0.5569752};
   Double_t _fex1131[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1131[7] = {
   0.3002078,
   0.2101265,
   0.1809107,
   0.1758904,
   0.1952789,
   0.2562618,
   0.4276751};
   TGraphErrors *gre = new TGraphErrors(7,_fx1131,_fy1131,_fex1131,_fey1131);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{g#minus2} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1131 = new TH1F("Graph_Graph1131","",100,725,2525);
   Graph_Graph1131->SetMinimum(-1.330843);
   Graph_Graph1131->SetMaximum(1.091569);
   Graph_Graph1131->SetDirectory(0);
   Graph_Graph1131->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1131->SetLineColor(ci);
   Graph_Graph1131->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1131->GetXaxis()->CenterTitle(true);
   Graph_Graph1131->GetXaxis()->SetLabelFont(42);
   Graph_Graph1131->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1131->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1131->GetXaxis()->SetTitleFont(42);
   Graph_Graph1131->GetYaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   Graph_Graph1131->GetYaxis()->CenterTitle(true);
   Graph_Graph1131->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1131->GetYaxis()->SetLabelFont(42);
   Graph_Graph1131->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1131->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1131->GetYaxis()->SetTitleFont(42);
   Graph_Graph1131->GetZaxis()->SetLabelFont(42);
   Graph_Graph1131->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1131->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1131);
   
   
   TF1 *pol01132 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01132->SetFillColor(19);
   pol01132->SetFillStyle(0);
   pol01132->SetLineColor(2);
   pol01132->SetLineWidth(2);
   pol01132->SetChisquare(8.761961);
   pol01132->SetNDF(6);
   pol01132->GetXaxis()->SetLabelFont(42);
   pol01132->GetXaxis()->SetTitleOffset(1);
   pol01132->GetXaxis()->SetTitleFont(42);
   pol01132->GetYaxis()->SetLabelFont(42);
   pol01132->GetYaxis()->SetTitleFont(42);
   pol01132->SetParameter(0,-0.04835224);
   pol01132->SetParError(0,0.08346675);
   pol01132->SetParLimits(0,0,0);
   pol01132->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01132);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim: Tracks","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = -0.048
#pm0.08
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
