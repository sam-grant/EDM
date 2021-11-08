void S18_EDM_delta_prime_vs_p()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(500,-0.7727665,2750,2.891792);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1117[7] = {
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375};
   Double_t _fy1117[7] = {
   1.01468,
   1.520901,
   1.228474,
   1.693523,
   1.640963,
   1.027478,
   1.598524};
   Double_t _fex1117[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1117[7] = {
   0.5167237,
   0.3615119,
   0.3131184,
   0.3039836,
   0.3416327,
   0.4476029,
   0.7414496};
   TGraphErrors *gre = new TGraphErrors(7,_fx1117,_fy1117,_fex1117,_fey1117);
   gre->SetName("");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;#delta'_{EDM} [mrad];");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1117 = new TH1F("Graph_Graph1117","",100,725,2525);
   Graph_Graph1117->SetMinimum(-0.4063107);
   Graph_Graph1117->SetMaximum(2.525336);
   Graph_Graph1117->SetDirectory(0);
   Graph_Graph1117->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1117->SetLineColor(ci);
   Graph_Graph1117->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_Graph1117->GetXaxis()->CenterTitle(true);
   Graph_Graph1117->GetXaxis()->SetLabelFont(42);
   Graph_Graph1117->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1117->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1117->GetXaxis()->SetTitleFont(42);
   Graph_Graph1117->GetYaxis()->SetTitle("#delta'_{EDM} [mrad]");
   Graph_Graph1117->GetYaxis()->CenterTitle(true);
   Graph_Graph1117->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1117->GetYaxis()->SetLabelFont(42);
   Graph_Graph1117->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1117->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1117->GetYaxis()->SetTitleFont(42);
   Graph_Graph1117->GetZaxis()->SetLabelFont(42);
   Graph_Graph1117->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1117->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1117);
   
   
   TF1 *pol01118 = new TF1("pol0","pol0",750,2500, TF1::EAddToList::kNo);
   pol01118->SetFillColor(19);
   pol01118->SetFillStyle(0);
   pol01118->SetLineColor(2);
   pol01118->SetLineWidth(2);
   pol01118->SetChisquare(3.116655);
   pol01118->SetNDF(6);
   pol01118->GetXaxis()->SetLabelFont(42);
   pol01118->GetXaxis()->SetTitleOffset(1);
   pol01118->GetXaxis()->SetTitleFont(42);
   pol01118->GetYaxis()->SetLabelFont(42);
   pol01118->GetYaxis()->SetTitleFont(42);
   pol01118->SetParameter(0,1.430865);
   pol01118->SetParError(0,0.1446442);
   pol01118->SetParLimits(0,0,0);
   pol01118->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01118);
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
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 1.4
#pm0.1
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
