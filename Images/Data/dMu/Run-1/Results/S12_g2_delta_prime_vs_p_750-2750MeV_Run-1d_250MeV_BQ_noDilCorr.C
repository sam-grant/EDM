void S12_g2_delta_prime_vs_p_750-2750MeV_Run-1d_250MeV_BQ_noDilCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:16:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(453.1429,-1.028701,3039.225,1.030789);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1043[8] = {
   884.1567,
   1127.482,
   1373.619,
   1620.287,
   1866.945,
   2116.357,
   2359.644,
   2608.212};
   Double_t _fy1043[8] = {
   0.0429024,
   0.03874173,
   0.04545775,
   0.0008019802,
   -0.006330446,
   -0.008083873,
   -0.05079128,
   -0.01786197};
   Double_t _fex1043[8] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1043[8] = {
   0.03193805,
   0.02719541,
   0.01840232,
   0.01556106,
   0.0172969,
   0.0193489,
   0.02196031,
   0.02209919};
   TGraphErrors *gre = new TGraphErrors(8,_fx1043,_fy1043,_fex1043,_fey1043);
   gre->SetName("");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1043 = new TH1F("Graph_Graph1043","S12",100,711.7512,2780.617);
   Graph_Graph1043->SetMinimum(-0.8227516);
   Graph_Graph1043->SetMaximum(0.8248404);
   Graph_Graph1043->SetDirectory(0);
   Graph_Graph1043->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1043->SetLineColor(ci);
   Graph_Graph1043->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1043->GetXaxis()->CenterTitle(true);
   Graph_Graph1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph1043->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetXaxis()->SetTitleFont(42);
   Graph_Graph1043->GetYaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad] / 250 MeV");
   Graph_Graph1043->GetYaxis()->CenterTitle(true);
   Graph_Graph1043->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph1043->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1043->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph1043->GetYaxis()->SetTitleFont(42);
   Graph_Graph1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph1043->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1043->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1043);
   
   
   TF1 *pol01044 = new TF1("pol0","pol0",750,2750, TF1::EAddToList::kNo);
   pol01044->SetFillColor(19);
   pol01044->SetFillStyle(0);
   pol01044->SetLineColor(2);
   pol01044->SetLineWidth(2);
   pol01044->SetChisquare(16.13499);
   pol01044->SetNDF(7);
   pol01044->GetXaxis()->SetLabelFont(42);
   pol01044->GetXaxis()->SetTitleOffset(1);
   pol01044->GetXaxis()->SetTitleFont(42);
   pol01044->GetYaxis()->SetLabelFont(42);
   pol01044->GetYaxis()->SetTitleFont(42);
   pol01044->SetParameter(0,0.002421594);
   pol01044->SetParError(0,0.007152012);
   pol01044->SetParLimits(0,0,0);
   pol01044->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol01044);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.11,0.75,0.59,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Data: Run-1d","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pol0","#LT#delta'#GT = 0.00242
#pm0.007
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
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
